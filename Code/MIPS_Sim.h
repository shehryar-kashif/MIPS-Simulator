#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <msclr/marshal_cppstd.h>
using namespace std;

const int regNo = 33;
const int memNo = 50;
class MIPS_Sim {
	int regFile[regNo];
	int mem[memNo];
	vector<string> program;		//Stores complete set of instructions
	vector<string> regs;		//Stores the adresses of registers of one instruction
	string keyWords;			//Stores keywords of one instruction
	string constants;			//Stores constants of one instruction

	//Function to find the index of register
	int findregInd(string s) {
		if (s == "t0") {
			return 8;
		}
		else if (s == "t1") {
			return 9;
		}
		else if (s == "t2") {
			return 10;
		}
		else if (s == "t3") {
			return 11;
		}
		else if (s == "t4") {
			return 12;
		}
		else if (s == "t5") {
			return 13;
		}
		else if (s == "t6") {
			return 14;
		}
		else if (s == "t7") {
			return 15;
		}
		else if (s == "t8") {
			return 24;
		}
		else if (s == "t9") {
			return 25;
		}
		else if (s == "s0") {
			return 16;
		}
		else if (s == "s1") {
			return 17;
		}
		else if (s == "s2") {
			return 18;
		}
		else if (s == "s3") {
			return 19;
		}
		else if (s == "s4") {
			return 20;
		}
		else if (s == "s5") {
			return 21;
		}
		else if (s == "s6") {
			return 22;
		}
		else if (s == "s7") {
			return 23;
		}
		else {
			return 8;
		}
	}

	//Function to leave only 1 space after keyword and remove the rest
	string removeSpace(string input) {
		string ret;
		int spaceCount = 0;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == ' ') {
				spaceCount++;
				if (spaceCount > 1)
					continue;
			}
			ret += input[i];
		}
		return ret;
	}

	//Function to break command into keywords, registers and constants
	void parse(string cmnd) {
		string temp;
		bool reg = 0, const_ = 0, keyWord = 1;	//flags to check the appropriate part of string
		for (int i = 0; i <= cmnd.size(); i++) {
			if (cmnd[i] == ' ') {
				keyWord = false;
				keyWords = temp;
				temp.clear();
			}
			else if (cmnd[i] == '$') {
				reg = true;
			}
			else if (cmnd[i] == ',' || cmnd[i] == '\0' || cmnd[i] == '(' || cmnd[i] == ')') {
				if (reg == true) {
					regs.push_back(temp);
					temp.clear();
				}
				else if (const_ == true) {
					constants = temp;
					temp.clear();
				}
				reg = false;
			}
			else {
				temp += cmnd[i];
			}
			const_ = (isdigit(cmnd[i]) && reg == false);
		}
	}

	//Function to perform one instructions' task
	void perform() {
		if (keyWords == "add") {
			regFile[findregInd(regs[0])] = regFile[findregInd(regs[1])] + regFile[findregInd(regs[2])];
		}
		else if (keyWords == "addi") {
			regFile[findregInd(regs[0])] = regFile[findregInd(regs[1])] + stoi(constants);
		}
		else if (keyWords == "sub") {
			regFile[findregInd(regs[0])] = regFile[findregInd(regs[1])] - regFile[findregInd(regs[2])];
		}
		else if (keyWords == "subi") {
			regFile[findregInd(regs[0])] = regFile[findregInd(regs[1])] - stoi(constants);
		}
		else if (keyWords == "mul") {
			regFile[findregInd(regs[0])] = regFile[findregInd(regs[1])] * regFile[findregInd(regs[2])];
		}
		else if (keyWords == "lw") {
			int address = regFile[findregInd(regs[1])] + stoi(constants);
			regFile[findregInd(regs[0])] = mem[address];
		}
		else if (keyWords == "sw") {
			int address = regFile[findregInd(regs[1])] + stoi(constants);
			mem[address] = regFile[findregInd(regs[0])];
		}
		else if (keyWords == "beq") {
			if (regFile[findregInd(regs[0])] == regFile[findregInd(regs[1])]) {
				regFile[32] = stoi(constants);
			}
			else
				regFile[32] = regFile[32] + 1;
		}
		else if (keyWords == "j") {
			regFile[32] = stoi(constants);
		}
	}

	//Completely executes one instruction
	void execute(string inst) {
		parse(removeSpace(inst));
		perform();
		//Clearing for next instruction
		regs.clear();
		keyWords.clear();
		constants.clear();
	}

	void reset() {
		for (int i = 0; i < regNo; i++) {
			regFile[i] = 0;
			mem[i] = 0;
		}
		for (int i = (regNo - 1); i < memNo; i++) {
			mem[i] = 0;
		}
	}

public:
	//Default Constructor for initializing all regs amd mem with 0
	MIPS_Sim() {
		for (int i = 0; i < regNo; i++) {
			regFile[i] = 0;
			mem[i] = 0;
		}
		for (int i = (regNo - 1); i < memNo; i++) {
			mem[i] = 0;
		}
	}

	void run() {
		reset();
		for (regFile[32] = 0; regFile[32] < program.size(); regFile[32]++) {
			execute(program[regFile[32]]);
		}
	}

	void singleStep() {
		if (regFile[32] < program.size()) {
			execute(program[regFile[32]]);
			regFile[32]++;
		}
	}

	void input(System::String^ inp) {
		System::String^ temp = "";
		msclr::interop::marshal_context context;
		for (int i = 0; i < inp->Length; i++) {
			if (i + 1 < inp->Length && inp[i] == '\r' && inp[i + 1] == '\n') {
				std::string store = context.marshal_as<std::string>(temp);
				program.push_back(store);
				temp = "";
			}
			else if (inp[i] != '\n') {
				temp += inp[i];
			}
		}
		if (!(temp->IsNullOrEmpty(temp))) {
			std::string s = context.marshal_as<std::string>(temp);
			program.push_back(s);
		}
	}

	int getRegVal(int index) {
		if (index >= 0 && index <33)
			return regFile[index];
		return regFile[0];
	}

	int getMemVal(int index) {
		if (index >= 0 && index < 50)
			return mem[index];
		return mem[0];
	}
};