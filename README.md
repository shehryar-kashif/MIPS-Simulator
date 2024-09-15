# MIPS Simulator

## Overview
This project is a **MIPS Processor Simulator**, designed to emulate the basic functionalities of a MIPS processor, similar to the popular MARS simulator. The simulator features a user-friendly GUI with a text editor for entering assembly code, displays for memory and register states, and controls for single-step execution or running the program all at once. It is developed in C++ using a Windows-based GUI framework.

## Objectives
The objective of this project was to create a basic **MIPS processor simulator** with functionality similar to MARS. The simulator is designed to accept MIPS assembly instructions, execute them, and display the resulting memory and register states. This project demonstrates how basic MIPS instructions work and how they modify the state of the processor.

## Features
- **Text Editor**: Allows users to input and edit MIPS assembly code.
- **Register and Memory Displays**: Dynamically updates and shows the current values of registers and memory as the program executes.
- **Execution Controls**:
  - **Single-Step Execution**: Users can execute the program one instruction at a time, allowing them to observe changes in memory and registers step-by-step.
  - **Run All**: Allows users to run the entire program in one go, similar to MARS.

## Supported Instructions
The simulator supports the following **MIPS instructions**:
- **add**: Add two registers and store the result.
- **addi**: Add an immediate value to a register.
- **sub**: Subtract one register from another.
- **subi**: Subtract an immediate value from a register.
- **mul**: Multiply two registers and store the result.
- **lw**: Load a word from memory into a register.
- **sw**: Store a word from a register into memory.
- **beq**: Branch if two registers are equal.
- **j**: Jump to an address.

These basic instructions allow the user to simulate fundamental operations of the MIPS processor and observe changes in memory and register states.

## How It Works
1. **Input Assembly Code**: Users input MIPS assembly code into the text editor provided in the GUI.
2. **Execution**:
   - Users can either execute the program one instruction at a time (single-step execution) or run the entire program at once.
   - The simulator parses and executes the assembly code, updating the register and memory states.
3. **Register and Memory Display**: The GUI dynamically displays the values of registers and memory after each instruction execution.

### Example Workflow:
1. **Input MIPS Code**: Enter code such as:
   `add $t0, $t1, $t2
   lw $t0, 0($t3)`
2. **Run or Step Through Execution**: Use the "Run All" button to execute the entire program or the "Step" button to execute one instruction at a time.
3. **Observe Memory/Register Changes**: View how registers and memory are updated in real-time as instructions are executed.

## File Structure:
- Assignment03_GUI.sln: The Visual Studio solution file for the project.
- Assignment03_GUI.vcxproj: The Visual Studio project file.
- MIPS_Sim.h: Header file containing the simulator's core logic.
- MyForm.cpp: The main source file that handles the GUI and integrates the simulator logic.
- MyForm.h: Header file for the GUI elements.
- MyForm.resx: Resource file for the GUI layout.
- Memory.txt: Initialization file for memory state, used by the simulator.
- RegFile.txt: Initialization file for register states, used by the simulator.

## Getting Started
### Prerequisites
- Windows OS: The project is developed using Windows Forms for the GUI, so it is compatible with Windows operating systems.
- Visual Studio: Open the .sln file in Visual Studio to compile and run the project.
- C++ Environment: Ensure you have a C++ development environment set up in Visual Studio.

### Running the Project
- Clone the Repository: git clone https://github.com/shehryar-kashif/MIPS-Simulator.git
- Open in Visual Studio: Open the solution file Assignment03_GUI.sln in Visual Studio.
- Build the project using the provided Visual Studio configurations.
- Run the Simulator: After building the project, you can run the simulator to input and execute MIPS assembly code.

## Future Enhancements
- Extend Instruction Set: Add support for additional MIPS instructions such as ori, andi, xor, etc.
- Add More Features: Include advanced features like breakpoints, error handling, and multi-threaded execution.
- Cross-Platform Support: Port the simulator to support multiple operating systems.

## Acknowledgments
This Simulator was built as a part of the course "Computer Systems Architecture".
