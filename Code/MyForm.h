#pragma once
#include "MIPS_Sim.h"
namespace Assignment03GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
            sStepCount = 0;
            isUpdated = false;
            simulator = new MIPS_Sim();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Label^ label53;
    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::Label^ label56;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::Label^ label61;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label73;
    private: System::Windows::Forms::Label^ label74;
    private: System::Windows::Forms::Label^ label75;
    private: System::Windows::Forms::Label^ label76;
    private: System::Windows::Forms::Label^ label77;
    private: System::Windows::Forms::Label^ label78;
    private: System::Windows::Forms::Label^ label79;
    private: System::Windows::Forms::Label^ label80;
    private: System::Windows::Forms::Label^ label81;
    private: System::Windows::Forms::Label^ label82;
    private: System::Windows::Forms::Label^ label83;
    private: System::Windows::Forms::Label^ label84;
    private: System::Windows::Forms::Label^ label85;
    private: System::Windows::Forms::Label^ label86;
    private: System::Windows::Forms::Label^ label87;
    private: System::Windows::Forms::Label^ label88;
    private: System::Windows::Forms::Label^ label89;
    private: System::Windows::Forms::Label^ label90;
    private: System::Windows::Forms::Label^ label91;
    private: System::Windows::Forms::Label^ label92;
    private: System::Windows::Forms::Label^ label93;
    private: System::Windows::Forms::Label^ label94;
    private: System::Windows::Forms::Label^ label95;
    private: System::Windows::Forms::Label^ label96;
    private: System::Windows::Forms::Label^ label97;
    private: System::Windows::Forms::Label^ label98;
    private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::Label^ label126;
private: System::Windows::Forms::Label^ label127;
private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Label^ label130;
private: System::Windows::Forms::Label^ label131;
private: System::Windows::Forms::Label^ label132;
private: System::Windows::Forms::Label^ label133;
private: System::Windows::Forms::Label^ label134;
private: System::Windows::Forms::Label^ label135;
private: System::Windows::Forms::Label^ label136;
private: System::Windows::Forms::Label^ label137;
private: System::Windows::Forms::Label^ label138;
private: System::Windows::Forms::Label^ label139;
private: System::Windows::Forms::Label^ label140;
private: System::Windows::Forms::Label^ label141;
private: System::Windows::Forms::Label^ label142;
private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Label^ label144;
private: System::Windows::Forms::Label^ label145;
private: System::Windows::Forms::Label^ label146;
private: System::Windows::Forms::Label^ label147;
private: System::Windows::Forms::Label^ label148;
private: System::Windows::Forms::Label^ label149;
private: System::Windows::Forms::Label^ label150;
private: System::Windows::Forms::Label^ label151;
private: System::Windows::Forms::Label^ label152;
private: System::Windows::Forms::Label^ label153;
private: System::Windows::Forms::Label^ label154;
private: System::Windows::Forms::Label^ label155;
private: System::Windows::Forms::Label^ label156;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::Label^ label158;
private: System::Windows::Forms::Label^ label159;
private: System::Windows::Forms::Label^ label160;
private: System::Windows::Forms::Label^ label161;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::Label^ label165;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Label^ label167;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button1;
       MIPS_Sim* simulator;
       int sStepCount;
       bool isUpdated;
private: System::Windows::Forms::Button^ button2;

	protected:

	protected:













	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->label77 = (gcnew System::Windows::Forms::Label());
            this->label78 = (gcnew System::Windows::Forms::Label());
            this->label79 = (gcnew System::Windows::Forms::Label());
            this->label80 = (gcnew System::Windows::Forms::Label());
            this->label81 = (gcnew System::Windows::Forms::Label());
            this->label82 = (gcnew System::Windows::Forms::Label());
            this->label83 = (gcnew System::Windows::Forms::Label());
            this->label84 = (gcnew System::Windows::Forms::Label());
            this->label85 = (gcnew System::Windows::Forms::Label());
            this->label86 = (gcnew System::Windows::Forms::Label());
            this->label87 = (gcnew System::Windows::Forms::Label());
            this->label88 = (gcnew System::Windows::Forms::Label());
            this->label89 = (gcnew System::Windows::Forms::Label());
            this->label90 = (gcnew System::Windows::Forms::Label());
            this->label91 = (gcnew System::Windows::Forms::Label());
            this->label92 = (gcnew System::Windows::Forms::Label());
            this->label93 = (gcnew System::Windows::Forms::Label());
            this->label94 = (gcnew System::Windows::Forms::Label());
            this->label95 = (gcnew System::Windows::Forms::Label());
            this->label96 = (gcnew System::Windows::Forms::Label());
            this->label97 = (gcnew System::Windows::Forms::Label());
            this->label98 = (gcnew System::Windows::Forms::Label());
            this->label99 = (gcnew System::Windows::Forms::Label());
            this->label100 = (gcnew System::Windows::Forms::Label());
            this->label101 = (gcnew System::Windows::Forms::Label());
            this->label102 = (gcnew System::Windows::Forms::Label());
            this->label103 = (gcnew System::Windows::Forms::Label());
            this->label104 = (gcnew System::Windows::Forms::Label());
            this->label105 = (gcnew System::Windows::Forms::Label());
            this->label106 = (gcnew System::Windows::Forms::Label());
            this->label107 = (gcnew System::Windows::Forms::Label());
            this->label108 = (gcnew System::Windows::Forms::Label());
            this->label109 = (gcnew System::Windows::Forms::Label());
            this->label110 = (gcnew System::Windows::Forms::Label());
            this->label111 = (gcnew System::Windows::Forms::Label());
            this->label112 = (gcnew System::Windows::Forms::Label());
            this->label113 = (gcnew System::Windows::Forms::Label());
            this->label114 = (gcnew System::Windows::Forms::Label());
            this->label115 = (gcnew System::Windows::Forms::Label());
            this->label116 = (gcnew System::Windows::Forms::Label());
            this->label117 = (gcnew System::Windows::Forms::Label());
            this->label118 = (gcnew System::Windows::Forms::Label());
            this->label119 = (gcnew System::Windows::Forms::Label());
            this->label120 = (gcnew System::Windows::Forms::Label());
            this->label121 = (gcnew System::Windows::Forms::Label());
            this->label122 = (gcnew System::Windows::Forms::Label());
            this->label123 = (gcnew System::Windows::Forms::Label());
            this->label124 = (gcnew System::Windows::Forms::Label());
            this->label125 = (gcnew System::Windows::Forms::Label());
            this->label126 = (gcnew System::Windows::Forms::Label());
            this->label127 = (gcnew System::Windows::Forms::Label());
            this->label128 = (gcnew System::Windows::Forms::Label());
            this->label129 = (gcnew System::Windows::Forms::Label());
            this->label130 = (gcnew System::Windows::Forms::Label());
            this->label131 = (gcnew System::Windows::Forms::Label());
            this->label132 = (gcnew System::Windows::Forms::Label());
            this->label133 = (gcnew System::Windows::Forms::Label());
            this->label134 = (gcnew System::Windows::Forms::Label());
            this->label135 = (gcnew System::Windows::Forms::Label());
            this->label136 = (gcnew System::Windows::Forms::Label());
            this->label137 = (gcnew System::Windows::Forms::Label());
            this->label138 = (gcnew System::Windows::Forms::Label());
            this->label139 = (gcnew System::Windows::Forms::Label());
            this->label140 = (gcnew System::Windows::Forms::Label());
            this->label141 = (gcnew System::Windows::Forms::Label());
            this->label142 = (gcnew System::Windows::Forms::Label());
            this->label143 = (gcnew System::Windows::Forms::Label());
            this->label144 = (gcnew System::Windows::Forms::Label());
            this->label145 = (gcnew System::Windows::Forms::Label());
            this->label146 = (gcnew System::Windows::Forms::Label());
            this->label147 = (gcnew System::Windows::Forms::Label());
            this->label148 = (gcnew System::Windows::Forms::Label());
            this->label149 = (gcnew System::Windows::Forms::Label());
            this->label150 = (gcnew System::Windows::Forms::Label());
            this->label151 = (gcnew System::Windows::Forms::Label());
            this->label152 = (gcnew System::Windows::Forms::Label());
            this->label153 = (gcnew System::Windows::Forms::Label());
            this->label154 = (gcnew System::Windows::Forms::Label());
            this->label155 = (gcnew System::Windows::Forms::Label());
            this->label156 = (gcnew System::Windows::Forms::Label());
            this->label157 = (gcnew System::Windows::Forms::Label());
            this->label158 = (gcnew System::Windows::Forms::Label());
            this->label159 = (gcnew System::Windows::Forms::Label());
            this->label160 = (gcnew System::Windows::Forms::Label());
            this->label161 = (gcnew System::Windows::Forms::Label());
            this->label162 = (gcnew System::Windows::Forms::Label());
            this->label163 = (gcnew System::Windows::Forms::Label());
            this->label164 = (gcnew System::Windows::Forms::Label());
            this->label165 = (gcnew System::Windows::Forms::Label());
            this->label166 = (gcnew System::Windows::Forms::Label());
            this->label167 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label1->Location = System::Drawing::Point(650, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(40, 15);
            this->label1->TabIndex = 0;
            this->label1->Text = L"1";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label2
            // 
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label2->Location = System::Drawing::Point(650, 42);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(40, 15);
            this->label2->TabIndex = 1;
            this->label2->Text = L"2";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label3
            // 
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label3->Location = System::Drawing::Point(650, 72);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(40, 15);
            this->label3->TabIndex = 3;
            this->label3->Text = L"4";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label4
            // 
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label4->Location = System::Drawing::Point(650, 57);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(40, 15);
            this->label4->TabIndex = 2;
            this->label4->Text = L"3";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label5
            // 
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label5->Location = System::Drawing::Point(650, 132);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(40, 15);
            this->label5->TabIndex = 7;
            this->label5->Text = L"8";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label6
            // 
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label6->Location = System::Drawing::Point(650, 117);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(40, 15);
            this->label6->TabIndex = 6;
            this->label6->Text = L"7";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label7
            // 
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label7->Location = System::Drawing::Point(650, 102);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(40, 15);
            this->label7->TabIndex = 5;
            this->label7->Text = L"6";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label8
            // 
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label8->Location = System::Drawing::Point(650, 87);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(40, 15);
            this->label8->TabIndex = 4;
            this->label8->Text = L"5";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label9
            // 
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label9->Location = System::Drawing::Point(650, 252);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(40, 15);
            this->label9->TabIndex = 15;
            this->label9->Text = L"16";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label10
            // 
            this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label10->Location = System::Drawing::Point(650, 237);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(40, 15);
            this->label10->TabIndex = 14;
            this->label10->Text = L"15";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label11
            // 
            this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label11->Location = System::Drawing::Point(650, 222);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(40, 15);
            this->label11->TabIndex = 13;
            this->label11->Text = L"14";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label12
            // 
            this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label12->Location = System::Drawing::Point(650, 207);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(40, 15);
            this->label12->TabIndex = 12;
            this->label12->Text = L"13";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label13
            // 
            this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label13->Location = System::Drawing::Point(650, 192);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(40, 15);
            this->label13->TabIndex = 11;
            this->label13->Text = L"12";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label14
            // 
            this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label14->Location = System::Drawing::Point(650, 177);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(40, 15);
            this->label14->TabIndex = 10;
            this->label14->Text = L"11";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label15
            // 
            this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label15->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label15->Location = System::Drawing::Point(650, 162);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(40, 15);
            this->label15->TabIndex = 9;
            this->label15->Text = L"10";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label16
            // 
            this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label16->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label16->Location = System::Drawing::Point(650, 147);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(40, 15);
            this->label16->TabIndex = 8;
            this->label16->Text = L"9";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label17
            // 
            this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label17->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label17->Location = System::Drawing::Point(650, 492);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(40, 15);
            this->label17->TabIndex = 31;
            this->label17->Text = L"32";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label18
            // 
            this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label18->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label18->Location = System::Drawing::Point(650, 477);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(40, 15);
            this->label18->TabIndex = 30;
            this->label18->Text = L"31";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label19
            // 
            this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label19->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label19->Location = System::Drawing::Point(650, 462);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(40, 15);
            this->label19->TabIndex = 29;
            this->label19->Text = L"30";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label20
            // 
            this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label20->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label20->Location = System::Drawing::Point(650, 447);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(40, 15);
            this->label20->TabIndex = 28;
            this->label20->Text = L"29";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label21
            // 
            this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label21->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label21->Location = System::Drawing::Point(650, 432);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(40, 15);
            this->label21->TabIndex = 27;
            this->label21->Text = L"28";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label22
            // 
            this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label22->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label22->Location = System::Drawing::Point(650, 417);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(40, 15);
            this->label22->TabIndex = 26;
            this->label22->Text = L"27";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
            // 
            // label23
            // 
            this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label23->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label23->Location = System::Drawing::Point(650, 402);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(40, 15);
            this->label23->TabIndex = 25;
            this->label23->Text = L"26";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label24->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label24->Location = System::Drawing::Point(650, 387);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(40, 15);
            this->label24->TabIndex = 24;
            this->label24->Text = L"25";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label25
            // 
            this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label25->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label25->Location = System::Drawing::Point(650, 372);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(40, 15);
            this->label25->TabIndex = 24;
            this->label25->Text = L"24";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label26
            // 
            this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label26->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label26->Location = System::Drawing::Point(650, 357);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(40, 15);
            this->label26->TabIndex = 22;
            this->label26->Text = L"23";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label27
            // 
            this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label27->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label27->Location = System::Drawing::Point(650, 342);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(40, 15);
            this->label27->TabIndex = 21;
            this->label27->Text = L"22";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label28
            // 
            this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label28->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label28->Location = System::Drawing::Point(650, 327);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(40, 15);
            this->label28->TabIndex = 20;
            this->label28->Text = L"21";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label29
            // 
            this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label29->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label29->Location = System::Drawing::Point(650, 312);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(40, 15);
            this->label29->TabIndex = 19;
            this->label29->Text = L"20";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label30
            // 
            this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label30->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label30->Location = System::Drawing::Point(650, 297);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(40, 15);
            this->label30->TabIndex = 18;
            this->label30->Text = L"19";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label30->Click += gcnew System::EventHandler(this, &MyForm::label30_Click);
            // 
            // label31
            // 
            this->label31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label31->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label31->Location = System::Drawing::Point(650, 282);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(40, 15);
            this->label31->TabIndex = 17;
            this->label31->Text = L"18";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label32
            // 
            this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label32->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label32->Location = System::Drawing::Point(650, 267);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(40, 15);
            this->label32->TabIndex = 16;
            this->label32->Text = L"17";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label33
            // 
            this->label33->BackColor = System::Drawing::Color::Red;
            this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label33->Location = System::Drawing::Point(650, 507);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(40, 15);
            this->label33->TabIndex = 32;
            this->label33->Text = L"33";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label34
            // 
            this->label34->BackColor = System::Drawing::Color::Red;
            this->label34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label34->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label34->Location = System::Drawing::Point(696, 507);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(87, 15);
            this->label34->TabIndex = 65;
            this->label34->Text = L"PC";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label35
            // 
            this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label35->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label35->Location = System::Drawing::Point(696, 492);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(87, 15);
            this->label35->TabIndex = 64;
            this->label35->Text = L"$ra";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label36
            // 
            this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label36->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label36->Location = System::Drawing::Point(696, 477);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(87, 15);
            this->label36->TabIndex = 63;
            this->label36->Text = L"$fp";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label37
            // 
            this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label37->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label37->Location = System::Drawing::Point(696, 462);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(87, 15);
            this->label37->TabIndex = 62;
            this->label37->Text = L"$sp";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label37->Click += gcnew System::EventHandler(this, &MyForm::label37_Click);
            // 
            // label38
            // 
            this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label38->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label38->Location = System::Drawing::Point(696, 447);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(87, 15);
            this->label38->TabIndex = 61;
            this->label38->Text = L"$gp";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label39
            // 
            this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label39->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label39->Location = System::Drawing::Point(696, 432);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(87, 15);
            this->label39->TabIndex = 60;
            this->label39->Text = L"$k1";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label40
            // 
            this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label40->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label40->Location = System::Drawing::Point(696, 417);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(87, 15);
            this->label40->TabIndex = 59;
            this->label40->Text = L"$k0";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label41
            // 
            this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label41->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label41->Location = System::Drawing::Point(696, 402);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(87, 15);
            this->label41->TabIndex = 58;
            this->label41->Text = L"$t9";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label42
            // 
            this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label42->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label42->Location = System::Drawing::Point(696, 387);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(87, 15);
            this->label42->TabIndex = 57;
            this->label42->Text = L"$t8";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label43
            // 
            this->label43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label43->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label43->Location = System::Drawing::Point(696, 372);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(87, 15);
            this->label43->TabIndex = 56;
            this->label43->Text = L"$s7";
            this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label44
            // 
            this->label44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label44->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label44->Location = System::Drawing::Point(696, 357);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(87, 15);
            this->label44->TabIndex = 55;
            this->label44->Text = L"$s6";
            this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label44->Click += gcnew System::EventHandler(this, &MyForm::label44_Click);
            // 
            // label45
            // 
            this->label45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label45->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label45->Location = System::Drawing::Point(696, 342);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(87, 15);
            this->label45->TabIndex = 54;
            this->label45->Text = L"$s5";
            this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label46
            // 
            this->label46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label46->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label46->Location = System::Drawing::Point(696, 327);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(87, 15);
            this->label46->TabIndex = 53;
            this->label46->Text = L"$s4";
            this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label47
            // 
            this->label47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label47->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label47->Location = System::Drawing::Point(696, 312);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(87, 15);
            this->label47->TabIndex = 52;
            this->label47->Text = L"Ss3";
            this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label48
            // 
            this->label48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label48->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label48->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label48->Location = System::Drawing::Point(696, 297);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(87, 15);
            this->label48->TabIndex = 51;
            this->label48->Text = L"$s2";
            this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label49
            // 
            this->label49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label49->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label49->Location = System::Drawing::Point(696, 282);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(87, 15);
            this->label49->TabIndex = 50;
            this->label49->Text = L"$s1";
            this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label50
            // 
            this->label50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label50->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label50->Location = System::Drawing::Point(696, 267);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(87, 15);
            this->label50->TabIndex = 49;
            this->label50->Text = L"$s0";
            this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label51
            // 
            this->label51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label51->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label51->Location = System::Drawing::Point(696, 252);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(87, 15);
            this->label51->TabIndex = 48;
            this->label51->Text = L"$t7";
            this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label52
            // 
            this->label52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label52->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label52->Location = System::Drawing::Point(696, 237);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(87, 15);
            this->label52->TabIndex = 47;
            this->label52->Text = L"$t6";
            this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label53
            // 
            this->label53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label53->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label53->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label53->Location = System::Drawing::Point(696, 222);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(87, 15);
            this->label53->TabIndex = 46;
            this->label53->Text = L"$t5";
            this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label54
            // 
            this->label54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label54->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label54->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label54->Location = System::Drawing::Point(696, 207);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(87, 15);
            this->label54->TabIndex = 45;
            this->label54->Text = L"$t4";
            this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label55
            // 
            this->label55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label55->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label55->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label55->Location = System::Drawing::Point(696, 192);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(87, 15);
            this->label55->TabIndex = 44;
            this->label55->Text = L"$t3";
            this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label56
            // 
            this->label56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label56->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label56->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label56->Location = System::Drawing::Point(696, 177);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(87, 15);
            this->label56->TabIndex = 43;
            this->label56->Text = L"$t2";
            this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label57
            // 
            this->label57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label57->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label57->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label57->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label57->Location = System::Drawing::Point(696, 162);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(87, 15);
            this->label57->TabIndex = 42;
            this->label57->Text = L"$t1";
            this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label58
            // 
            this->label58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label58->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label58->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label58->Location = System::Drawing::Point(696, 147);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(87, 15);
            this->label58->TabIndex = 41;
            this->label58->Text = L"$t0";
            this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label59
            // 
            this->label59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label59->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label59->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label59->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label59->Location = System::Drawing::Point(696, 132);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(87, 15);
            this->label59->TabIndex = 40;
            this->label59->Text = L"$a3";
            this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label60
            // 
            this->label60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label60->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label60->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label60->Location = System::Drawing::Point(696, 117);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(87, 15);
            this->label60->TabIndex = 39;
            this->label60->Text = L"$a2";
            this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label61
            // 
            this->label61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label61->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label61->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label61->Location = System::Drawing::Point(696, 102);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(87, 15);
            this->label61->TabIndex = 38;
            this->label61->Text = L"$a1";
            this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label62
            // 
            this->label62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label62->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label62->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label62->Location = System::Drawing::Point(696, 87);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(87, 15);
            this->label62->TabIndex = 37;
            this->label62->Text = L"$a0";
            this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label63
            // 
            this->label63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label63->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label63->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label63->Location = System::Drawing::Point(696, 72);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(87, 15);
            this->label63->TabIndex = 36;
            this->label63->Text = L"$v1";
            this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label64
            // 
            this->label64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label64->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label64->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label64->Location = System::Drawing::Point(696, 57);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(87, 15);
            this->label64->TabIndex = 35;
            this->label64->Text = L"$v0";
            this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label65
            // 
            this->label65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label65->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label65->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label65->Location = System::Drawing::Point(696, 42);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(87, 15);
            this->label65->TabIndex = 34;
            this->label65->Text = L"$at";
            this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label66
            // 
            this->label66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label66->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label66->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label66->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label66->Location = System::Drawing::Point(696, 27);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(87, 15);
            this->label66->TabIndex = 33;
            this->label66->Text = L"$zero";
            this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label67
            // 
            this->label67->BackColor = System::Drawing::Color::Red;
            this->label67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label67->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label67->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label67->Location = System::Drawing::Point(787, 507);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(87, 15);
            this->label67->TabIndex = 98;
            this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label68
            // 
            this->label68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label68->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label68->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label68->Location = System::Drawing::Point(787, 492);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(87, 15);
            this->label68->TabIndex = 97;
            this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label69
            // 
            this->label69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label69->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label69->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label69->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label69->Location = System::Drawing::Point(787, 477);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(87, 15);
            this->label69->TabIndex = 96;
            this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label70
            // 
            this->label70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label70->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label70->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label70->Location = System::Drawing::Point(787, 462);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(87, 15);
            this->label70->TabIndex = 95;
            this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label71
            // 
            this->label71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label71->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label71->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label71->Location = System::Drawing::Point(787, 447);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(87, 15);
            this->label71->TabIndex = 94;
            this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label72
            // 
            this->label72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label72->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label72->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label72->Location = System::Drawing::Point(787, 432);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(87, 15);
            this->label72->TabIndex = 93;
            this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label73
            // 
            this->label73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label73->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label73->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label73->Location = System::Drawing::Point(787, 417);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(87, 15);
            this->label73->TabIndex = 92;
            this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label74
            // 
            this->label74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label74->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label74->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label74->Location = System::Drawing::Point(787, 402);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(87, 15);
            this->label74->TabIndex = 91;
            this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label75
            // 
            this->label75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label75->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label75->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label75->Location = System::Drawing::Point(787, 387);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(87, 15);
            this->label75->TabIndex = 90;
            this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label76
            // 
            this->label76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label76->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label76->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label76->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label76->Location = System::Drawing::Point(787, 372);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(87, 15);
            this->label76->TabIndex = 89;
            this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label77
            // 
            this->label77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label77->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label77->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label77->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label77->Location = System::Drawing::Point(787, 357);
            this->label77->Name = L"label77";
            this->label77->Size = System::Drawing::Size(87, 15);
            this->label77->TabIndex = 88;
            this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label78
            // 
            this->label78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label78->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label78->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label78->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label78->Location = System::Drawing::Point(787, 342);
            this->label78->Name = L"label78";
            this->label78->Size = System::Drawing::Size(87, 15);
            this->label78->TabIndex = 87;
            this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label79
            // 
            this->label79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label79->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label79->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label79->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label79->Location = System::Drawing::Point(787, 327);
            this->label79->Name = L"label79";
            this->label79->Size = System::Drawing::Size(87, 15);
            this->label79->TabIndex = 86;
            this->label79->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label80
            // 
            this->label80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label80->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label80->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label80->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label80->Location = System::Drawing::Point(787, 312);
            this->label80->Name = L"label80";
            this->label80->Size = System::Drawing::Size(87, 15);
            this->label80->TabIndex = 85;
            this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label81
            // 
            this->label81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label81->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label81->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label81->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label81->Location = System::Drawing::Point(787, 297);
            this->label81->Name = L"label81";
            this->label81->Size = System::Drawing::Size(87, 15);
            this->label81->TabIndex = 84;
            this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label82
            // 
            this->label82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label82->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label82->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label82->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label82->Location = System::Drawing::Point(787, 282);
            this->label82->Name = L"label82";
            this->label82->Size = System::Drawing::Size(87, 15);
            this->label82->TabIndex = 83;
            this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label83
            // 
            this->label83->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label83->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label83->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label83->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label83->Location = System::Drawing::Point(787, 267);
            this->label83->Name = L"label83";
            this->label83->Size = System::Drawing::Size(87, 15);
            this->label83->TabIndex = 82;
            this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label84
            // 
            this->label84->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label84->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label84->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label84->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label84->Location = System::Drawing::Point(787, 252);
            this->label84->Name = L"label84";
            this->label84->Size = System::Drawing::Size(87, 15);
            this->label84->TabIndex = 81;
            this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label85
            // 
            this->label85->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label85->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label85->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label85->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label85->Location = System::Drawing::Point(787, 237);
            this->label85->Name = L"label85";
            this->label85->Size = System::Drawing::Size(87, 15);
            this->label85->TabIndex = 80;
            this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label86
            // 
            this->label86->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label86->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label86->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label86->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label86->Location = System::Drawing::Point(787, 222);
            this->label86->Name = L"label86";
            this->label86->Size = System::Drawing::Size(87, 15);
            this->label86->TabIndex = 79;
            this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label87
            // 
            this->label87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label87->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label87->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label87->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label87->Location = System::Drawing::Point(787, 207);
            this->label87->Name = L"label87";
            this->label87->Size = System::Drawing::Size(87, 15);
            this->label87->TabIndex = 78;
            this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label88
            // 
            this->label88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label88->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label88->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label88->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label88->Location = System::Drawing::Point(787, 192);
            this->label88->Name = L"label88";
            this->label88->Size = System::Drawing::Size(87, 15);
            this->label88->TabIndex = 77;
            this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label89
            // 
            this->label89->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label89->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label89->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label89->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label89->Location = System::Drawing::Point(787, 177);
            this->label89->Name = L"label89";
            this->label89->Size = System::Drawing::Size(87, 15);
            this->label89->TabIndex = 76;
            this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label90
            // 
            this->label90->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label90->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label90->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label90->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label90->Location = System::Drawing::Point(787, 162);
            this->label90->Name = L"label90";
            this->label90->Size = System::Drawing::Size(87, 15);
            this->label90->TabIndex = 75;
            this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label91
            // 
            this->label91->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label91->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label91->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label91->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label91->Location = System::Drawing::Point(787, 147);
            this->label91->Name = L"label91";
            this->label91->Size = System::Drawing::Size(87, 15);
            this->label91->TabIndex = 74;
            this->label91->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label92
            // 
            this->label92->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label92->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label92->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label92->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label92->Location = System::Drawing::Point(787, 132);
            this->label92->Name = L"label92";
            this->label92->Size = System::Drawing::Size(87, 15);
            this->label92->TabIndex = 73;
            this->label92->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label93
            // 
            this->label93->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label93->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label93->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label93->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label93->Location = System::Drawing::Point(787, 117);
            this->label93->Name = L"label93";
            this->label93->Size = System::Drawing::Size(87, 15);
            this->label93->TabIndex = 72;
            this->label93->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label94
            // 
            this->label94->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label94->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label94->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label94->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label94->Location = System::Drawing::Point(787, 102);
            this->label94->Name = L"label94";
            this->label94->Size = System::Drawing::Size(87, 15);
            this->label94->TabIndex = 71;
            this->label94->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label95
            // 
            this->label95->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label95->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label95->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label95->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label95->Location = System::Drawing::Point(787, 87);
            this->label95->Name = L"label95";
            this->label95->Size = System::Drawing::Size(87, 15);
            this->label95->TabIndex = 70;
            this->label95->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label96
            // 
            this->label96->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label96->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label96->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label96->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label96->Location = System::Drawing::Point(787, 72);
            this->label96->Name = L"label96";
            this->label96->Size = System::Drawing::Size(87, 15);
            this->label96->TabIndex = 69;
            this->label96->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label97
            // 
            this->label97->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label97->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label97->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label97->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label97->Location = System::Drawing::Point(787, 57);
            this->label97->Name = L"label97";
            this->label97->Size = System::Drawing::Size(87, 15);
            this->label97->TabIndex = 68;
            this->label97->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label98
            // 
            this->label98->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label98->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label98->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label98->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label98->Location = System::Drawing::Point(787, 42);
            this->label98->Name = L"label98";
            this->label98->Size = System::Drawing::Size(87, 15);
            this->label98->TabIndex = 67;
            this->label98->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label99
            // 
            this->label99->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label99->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label99->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label99->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label99->Location = System::Drawing::Point(787, 27);
            this->label99->Name = L"label99";
            this->label99->Size = System::Drawing::Size(87, 15);
            this->label99->TabIndex = 66;
            this->label99->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label100
            // 
            this->label100->BackColor = System::Drawing::Color::Black;
            this->label100->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label100->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label100->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label100->Location = System::Drawing::Point(26, 507);
            this->label100->Name = L"label100";
            this->label100->Size = System::Drawing::Size(57, 15);
            this->label100->TabIndex = 99;
            this->label100->Text = L"40";
            this->label100->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label101
            // 
            this->label101->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label101->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label101->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label101->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label101->Location = System::Drawing::Point(79, 507);
            this->label101->Name = L"label101";
            this->label101->Size = System::Drawing::Size(57, 15);
            this->label101->TabIndex = 100;
            this->label101->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label102
            // 
            this->label102->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label102->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label102->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label102->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label102->Location = System::Drawing::Point(188, 507);
            this->label102->Name = L"label102";
            this->label102->Size = System::Drawing::Size(57, 15);
            this->label102->TabIndex = 102;
            this->label102->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label103
            // 
            this->label103->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label103->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label103->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label103->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label103->Location = System::Drawing::Point(135, 507);
            this->label103->Name = L"label103";
            this->label103->Size = System::Drawing::Size(57, 15);
            this->label103->TabIndex = 101;
            this->label103->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label104
            // 
            this->label104->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label104->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label104->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label104->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label104->Location = System::Drawing::Point(406, 507);
            this->label104->Name = L"label104";
            this->label104->Size = System::Drawing::Size(57, 15);
            this->label104->TabIndex = 106;
            this->label104->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label105
            // 
            this->label105->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label105->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label105->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label105->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label105->Location = System::Drawing::Point(353, 507);
            this->label105->Name = L"label105";
            this->label105->Size = System::Drawing::Size(57, 15);
            this->label105->TabIndex = 105;
            this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label106
            // 
            this->label106->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label106->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label106->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label106->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label106->Location = System::Drawing::Point(297, 507);
            this->label106->Name = L"label106";
            this->label106->Size = System::Drawing::Size(57, 15);
            this->label106->TabIndex = 104;
            this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label107
            // 
            this->label107->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label107->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label107->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label107->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label107->Location = System::Drawing::Point(244, 507);
            this->label107->Name = L"label107";
            this->label107->Size = System::Drawing::Size(57, 15);
            this->label107->TabIndex = 103;
            this->label107->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label108
            // 
            this->label108->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label108->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label108->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label108->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label108->Location = System::Drawing::Point(571, 507);
            this->label108->Name = L"label108";
            this->label108->Size = System::Drawing::Size(57, 15);
            this->label108->TabIndex = 109;
            this->label108->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label109
            // 
            this->label109->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label109->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label109->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label109->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label109->Location = System::Drawing::Point(515, 507);
            this->label109->Name = L"label109";
            this->label109->Size = System::Drawing::Size(57, 15);
            this->label109->TabIndex = 108;
            this->label109->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label110
            // 
            this->label110->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label110->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label110->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label110->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label110->Location = System::Drawing::Point(462, 507);
            this->label110->Name = L"label110";
            this->label110->Size = System::Drawing::Size(57, 15);
            this->label110->TabIndex = 107;
            this->label110->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label111
            // 
            this->label111->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label111->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label111->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label111->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label111->Location = System::Drawing::Point(571, 492);
            this->label111->Name = L"label111";
            this->label111->Size = System::Drawing::Size(57, 15);
            this->label111->TabIndex = 120;
            this->label111->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label112
            // 
            this->label112->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label112->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label112->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label112->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label112->Location = System::Drawing::Point(515, 492);
            this->label112->Name = L"label112";
            this->label112->Size = System::Drawing::Size(57, 15);
            this->label112->TabIndex = 119;
            this->label112->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label113
            // 
            this->label113->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label113->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label113->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label113->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label113->Location = System::Drawing::Point(462, 492);
            this->label113->Name = L"label113";
            this->label113->Size = System::Drawing::Size(57, 15);
            this->label113->TabIndex = 118;
            this->label113->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label114
            // 
            this->label114->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label114->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label114->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label114->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label114->Location = System::Drawing::Point(406, 492);
            this->label114->Name = L"label114";
            this->label114->Size = System::Drawing::Size(57, 15);
            this->label114->TabIndex = 117;
            this->label114->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label115
            // 
            this->label115->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label115->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label115->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label115->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label115->Location = System::Drawing::Point(353, 492);
            this->label115->Name = L"label115";
            this->label115->Size = System::Drawing::Size(57, 15);
            this->label115->TabIndex = 116;
            this->label115->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label116
            // 
            this->label116->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label116->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label116->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label116->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label116->Location = System::Drawing::Point(297, 492);
            this->label116->Name = L"label116";
            this->label116->Size = System::Drawing::Size(57, 15);
            this->label116->TabIndex = 115;
            this->label116->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label117
            // 
            this->label117->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label117->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label117->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label117->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label117->Location = System::Drawing::Point(244, 492);
            this->label117->Name = L"label117";
            this->label117->Size = System::Drawing::Size(57, 15);
            this->label117->TabIndex = 114;
            this->label117->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label118
            // 
            this->label118->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label118->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label118->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label118->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label118->Location = System::Drawing::Point(188, 492);
            this->label118->Name = L"label118";
            this->label118->Size = System::Drawing::Size(57, 15);
            this->label118->TabIndex = 113;
            this->label118->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label119
            // 
            this->label119->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label119->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label119->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label119->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label119->Location = System::Drawing::Point(135, 492);
            this->label119->Name = L"label119";
            this->label119->Size = System::Drawing::Size(57, 15);
            this->label119->TabIndex = 112;
            this->label119->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label120
            // 
            this->label120->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label120->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label120->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label120->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label120->Location = System::Drawing::Point(79, 492);
            this->label120->Name = L"label120";
            this->label120->Size = System::Drawing::Size(57, 15);
            this->label120->TabIndex = 111;
            this->label120->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label121
            // 
            this->label121->BackColor = System::Drawing::Color::Black;
            this->label121->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label121->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label121->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label121->Location = System::Drawing::Point(26, 492);
            this->label121->Name = L"label121";
            this->label121->Size = System::Drawing::Size(57, 15);
            this->label121->TabIndex = 110;
            this->label121->Text = L"30";
            this->label121->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label122
            // 
            this->label122->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label122->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label122->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label122->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label122->Location = System::Drawing::Point(571, 462);
            this->label122->Name = L"label122";
            this->label122->Size = System::Drawing::Size(57, 15);
            this->label122->TabIndex = 142;
            this->label122->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label123
            // 
            this->label123->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label123->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label123->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label123->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label123->Location = System::Drawing::Point(515, 462);
            this->label123->Name = L"label123";
            this->label123->Size = System::Drawing::Size(57, 15);
            this->label123->TabIndex = 141;
            this->label123->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label124
            // 
            this->label124->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label124->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label124->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label124->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label124->Location = System::Drawing::Point(462, 462);
            this->label124->Name = L"label124";
            this->label124->Size = System::Drawing::Size(57, 15);
            this->label124->TabIndex = 140;
            this->label124->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label125
            // 
            this->label125->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label125->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label125->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label125->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label125->Location = System::Drawing::Point(406, 462);
            this->label125->Name = L"label125";
            this->label125->Size = System::Drawing::Size(57, 15);
            this->label125->TabIndex = 139;
            this->label125->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label126
            // 
            this->label126->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label126->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label126->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label126->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label126->Location = System::Drawing::Point(353, 462);
            this->label126->Name = L"label126";
            this->label126->Size = System::Drawing::Size(57, 15);
            this->label126->TabIndex = 138;
            this->label126->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label127
            // 
            this->label127->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label127->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label127->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label127->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label127->Location = System::Drawing::Point(297, 462);
            this->label127->Name = L"label127";
            this->label127->Size = System::Drawing::Size(57, 15);
            this->label127->TabIndex = 137;
            this->label127->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label128
            // 
            this->label128->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label128->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label128->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label128->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label128->Location = System::Drawing::Point(244, 462);
            this->label128->Name = L"label128";
            this->label128->Size = System::Drawing::Size(57, 15);
            this->label128->TabIndex = 136;
            this->label128->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label129
            // 
            this->label129->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label129->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label129->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label129->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label129->Location = System::Drawing::Point(188, 462);
            this->label129->Name = L"label129";
            this->label129->Size = System::Drawing::Size(57, 15);
            this->label129->TabIndex = 135;
            this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label130
            // 
            this->label130->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label130->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label130->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label130->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label130->Location = System::Drawing::Point(135, 462);
            this->label130->Name = L"label130";
            this->label130->Size = System::Drawing::Size(57, 15);
            this->label130->TabIndex = 134;
            this->label130->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label131
            // 
            this->label131->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label131->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label131->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label131->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label131->Location = System::Drawing::Point(79, 462);
            this->label131->Name = L"label131";
            this->label131->Size = System::Drawing::Size(57, 15);
            this->label131->TabIndex = 133;
            this->label131->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label132
            // 
            this->label132->BackColor = System::Drawing::Color::Black;
            this->label132->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label132->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label132->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label132->Location = System::Drawing::Point(26, 462);
            this->label132->Name = L"label132";
            this->label132->Size = System::Drawing::Size(57, 15);
            this->label132->TabIndex = 132;
            this->label132->Text = L"10";
            this->label132->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label133
            // 
            this->label133->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label133->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label133->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label133->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label133->Location = System::Drawing::Point(571, 477);
            this->label133->Name = L"label133";
            this->label133->Size = System::Drawing::Size(57, 15);
            this->label133->TabIndex = 131;
            this->label133->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label134
            // 
            this->label134->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label134->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label134->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label134->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label134->Location = System::Drawing::Point(515, 477);
            this->label134->Name = L"label134";
            this->label134->Size = System::Drawing::Size(57, 15);
            this->label134->TabIndex = 130;
            this->label134->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label135
            // 
            this->label135->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label135->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label135->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label135->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label135->Location = System::Drawing::Point(462, 477);
            this->label135->Name = L"label135";
            this->label135->Size = System::Drawing::Size(57, 15);
            this->label135->TabIndex = 129;
            this->label135->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label136
            // 
            this->label136->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label136->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label136->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label136->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label136->Location = System::Drawing::Point(406, 477);
            this->label136->Name = L"label136";
            this->label136->Size = System::Drawing::Size(57, 15);
            this->label136->TabIndex = 128;
            this->label136->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label137
            // 
            this->label137->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label137->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label137->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label137->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label137->Location = System::Drawing::Point(353, 477);
            this->label137->Name = L"label137";
            this->label137->Size = System::Drawing::Size(57, 15);
            this->label137->TabIndex = 127;
            this->label137->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label138
            // 
            this->label138->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label138->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label138->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label138->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label138->Location = System::Drawing::Point(297, 477);
            this->label138->Name = L"label138";
            this->label138->Size = System::Drawing::Size(57, 15);
            this->label138->TabIndex = 126;
            this->label138->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label139
            // 
            this->label139->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label139->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label139->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label139->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label139->Location = System::Drawing::Point(244, 477);
            this->label139->Name = L"label139";
            this->label139->Size = System::Drawing::Size(57, 15);
            this->label139->TabIndex = 125;
            this->label139->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label140
            // 
            this->label140->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label140->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label140->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label140->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label140->Location = System::Drawing::Point(188, 477);
            this->label140->Name = L"label140";
            this->label140->Size = System::Drawing::Size(57, 15);
            this->label140->TabIndex = 124;
            this->label140->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label141
            // 
            this->label141->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label141->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label141->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label141->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label141->Location = System::Drawing::Point(135, 477);
            this->label141->Name = L"label141";
            this->label141->Size = System::Drawing::Size(57, 15);
            this->label141->TabIndex = 123;
            this->label141->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label142
            // 
            this->label142->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label142->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label142->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label142->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label142->Location = System::Drawing::Point(79, 477);
            this->label142->Name = L"label142";
            this->label142->Size = System::Drawing::Size(57, 15);
            this->label142->TabIndex = 122;
            this->label142->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label143
            // 
            this->label143->BackColor = System::Drawing::Color::Black;
            this->label143->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label143->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label143->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label143->Location = System::Drawing::Point(26, 477);
            this->label143->Name = L"label143";
            this->label143->Size = System::Drawing::Size(57, 15);
            this->label143->TabIndex = 121;
            this->label143->Text = L"20";
            this->label143->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label144
            // 
            this->label144->BackColor = System::Drawing::Color::Black;
            this->label144->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label144->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label144->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label144->Location = System::Drawing::Point(571, 432);
            this->label144->Name = L"label144";
            this->label144->Size = System::Drawing::Size(57, 15);
            this->label144->TabIndex = 164;
            this->label144->Text = L"+10";
            this->label144->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label145
            // 
            this->label145->BackColor = System::Drawing::Color::Black;
            this->label145->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label145->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label145->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label145->Location = System::Drawing::Point(515, 432);
            this->label145->Name = L"label145";
            this->label145->Size = System::Drawing::Size(57, 15);
            this->label145->TabIndex = 163;
            this->label145->Text = L"+9";
            this->label145->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label146
            // 
            this->label146->BackColor = System::Drawing::Color::Black;
            this->label146->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label146->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label146->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label146->Location = System::Drawing::Point(462, 432);
            this->label146->Name = L"label146";
            this->label146->Size = System::Drawing::Size(57, 15);
            this->label146->TabIndex = 162;
            this->label146->Text = L"+8";
            this->label146->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label147
            // 
            this->label147->BackColor = System::Drawing::Color::Black;
            this->label147->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label147->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label147->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label147->Location = System::Drawing::Point(406, 432);
            this->label147->Name = L"label147";
            this->label147->Size = System::Drawing::Size(57, 15);
            this->label147->TabIndex = 161;
            this->label147->Text = L"+7";
            this->label147->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label148
            // 
            this->label148->BackColor = System::Drawing::Color::Black;
            this->label148->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label148->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label148->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label148->Location = System::Drawing::Point(353, 432);
            this->label148->Name = L"label148";
            this->label148->Size = System::Drawing::Size(57, 15);
            this->label148->TabIndex = 160;
            this->label148->Text = L"+6";
            this->label148->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label149
            // 
            this->label149->BackColor = System::Drawing::Color::Black;
            this->label149->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label149->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label149->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label149->Location = System::Drawing::Point(297, 432);
            this->label149->Name = L"label149";
            this->label149->Size = System::Drawing::Size(57, 15);
            this->label149->TabIndex = 159;
            this->label149->Text = L"+5";
            this->label149->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label150
            // 
            this->label150->BackColor = System::Drawing::Color::Black;
            this->label150->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label150->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label150->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label150->Location = System::Drawing::Point(244, 432);
            this->label150->Name = L"label150";
            this->label150->Size = System::Drawing::Size(57, 15);
            this->label150->TabIndex = 158;
            this->label150->Text = L"+4";
            this->label150->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label151
            // 
            this->label151->BackColor = System::Drawing::Color::Black;
            this->label151->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label151->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label151->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label151->Location = System::Drawing::Point(188, 432);
            this->label151->Name = L"label151";
            this->label151->Size = System::Drawing::Size(57, 15);
            this->label151->TabIndex = 157;
            this->label151->Text = L"+3";
            this->label151->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label152
            // 
            this->label152->BackColor = System::Drawing::Color::Black;
            this->label152->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label152->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label152->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label152->Location = System::Drawing::Point(135, 432);
            this->label152->Name = L"label152";
            this->label152->Size = System::Drawing::Size(57, 15);
            this->label152->TabIndex = 156;
            this->label152->Text = L"+2";
            this->label152->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label153
            // 
            this->label153->BackColor = System::Drawing::Color::Black;
            this->label153->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label153->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label153->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label153->Location = System::Drawing::Point(79, 432);
            this->label153->Name = L"label153";
            this->label153->Size = System::Drawing::Size(57, 15);
            this->label153->TabIndex = 155;
            this->label153->Text = L"+1";
            this->label153->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label154
            // 
            this->label154->BackColor = System::Drawing::Color::Black;
            this->label154->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label154->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label154->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label154->Location = System::Drawing::Point(26, 432);
            this->label154->Name = L"label154";
            this->label154->Size = System::Drawing::Size(57, 15);
            this->label154->TabIndex = 154;
            this->label154->Text = L"Memory";
            this->label154->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label155
            // 
            this->label155->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label155->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label155->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label155->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label155->Location = System::Drawing::Point(571, 447);
            this->label155->Name = L"label155";
            this->label155->Size = System::Drawing::Size(57, 15);
            this->label155->TabIndex = 153;
            this->label155->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label156
            // 
            this->label156->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label156->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label156->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label156->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label156->Location = System::Drawing::Point(515, 447);
            this->label156->Name = L"label156";
            this->label156->Size = System::Drawing::Size(57, 15);
            this->label156->TabIndex = 152;
            this->label156->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label157
            // 
            this->label157->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label157->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label157->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label157->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label157->Location = System::Drawing::Point(462, 447);
            this->label157->Name = L"label157";
            this->label157->Size = System::Drawing::Size(57, 15);
            this->label157->TabIndex = 151;
            this->label157->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label158
            // 
            this->label158->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label158->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label158->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label158->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label158->Location = System::Drawing::Point(406, 447);
            this->label158->Name = L"label158";
            this->label158->Size = System::Drawing::Size(57, 15);
            this->label158->TabIndex = 150;
            this->label158->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label159
            // 
            this->label159->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label159->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label159->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label159->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label159->Location = System::Drawing::Point(353, 447);
            this->label159->Name = L"label159";
            this->label159->Size = System::Drawing::Size(57, 15);
            this->label159->TabIndex = 149;
            this->label159->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label160
            // 
            this->label160->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label160->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label160->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label160->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label160->Location = System::Drawing::Point(297, 447);
            this->label160->Name = L"label160";
            this->label160->Size = System::Drawing::Size(57, 15);
            this->label160->TabIndex = 148;
            this->label160->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label161
            // 
            this->label161->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label161->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label161->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label161->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label161->Location = System::Drawing::Point(244, 447);
            this->label161->Name = L"label161";
            this->label161->Size = System::Drawing::Size(57, 15);
            this->label161->TabIndex = 147;
            this->label161->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label162
            // 
            this->label162->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label162->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label162->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label162->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label162->Location = System::Drawing::Point(188, 447);
            this->label162->Name = L"label162";
            this->label162->Size = System::Drawing::Size(57, 15);
            this->label162->TabIndex = 146;
            this->label162->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label163
            // 
            this->label163->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label163->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label163->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label163->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label163->Location = System::Drawing::Point(135, 447);
            this->label163->Name = L"label163";
            this->label163->Size = System::Drawing::Size(57, 15);
            this->label163->TabIndex = 145;
            this->label163->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label164
            // 
            this->label164->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label164->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label164->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label164->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label164->Location = System::Drawing::Point(79, 447);
            this->label164->Name = L"label164";
            this->label164->Size = System::Drawing::Size(57, 15);
            this->label164->TabIndex = 144;
            this->label164->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label165
            // 
            this->label165->BackColor = System::Drawing::Color::Black;
            this->label165->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label165->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label165->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label165->Location = System::Drawing::Point(26, 447);
            this->label165->Name = L"label165";
            this->label165->Size = System::Drawing::Size(57, 15);
            this->label165->TabIndex = 143;
            this->label165->Text = L"0";
            this->label165->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label166
            // 
            this->label166->BackColor = System::Drawing::Color::Black;
            this->label166->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label166->Font = (gcnew System::Drawing::Font(L"Algerian", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label166->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label166->Location = System::Drawing::Point(26, 27);
            this->label166->Name = L"label166";
            this->label166->Size = System::Drawing::Size(602, 60);
            this->label166->TabIndex = 165;
            this->label166->Text = L"MIPS SIMULATOR";
            this->label166->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label167
            // 
            this->label167->BackColor = System::Drawing::Color::Black;
            this->label167->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label167->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label167->ForeColor = System::Drawing::SystemColors::AppWorkspace;
            this->label167->Location = System::Drawing::Point(26, 87);
            this->label167->Name = L"label167";
            this->label167->Size = System::Drawing::Size(602, 30);
            this->label167->TabIndex = 166;
            this->label167->Text = L"Created By: Shehryar Kashif, Syed Suleman Ali, Ibraheem Nayyar, Muhammad Abdullah"
                L"";
            this->label167->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox1
            // 
            this->textBox1->AllowDrop = true;
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(26, 123);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(602, 306);
            this->textBox1->TabIndex = 167;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->Location = System::Drawing::Point(553, 124);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 38);
            this->button1->TabIndex = 168;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::DarkSeaGreen;
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->Location = System::Drawing::Point(553, 169);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 32);
            this->button2->TabIndex = 169;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(899, 538);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label167);
            this->Controls->Add(this->label166);
            this->Controls->Add(this->label144);
            this->Controls->Add(this->label145);
            this->Controls->Add(this->label146);
            this->Controls->Add(this->label147);
            this->Controls->Add(this->label148);
            this->Controls->Add(this->label149);
            this->Controls->Add(this->label150);
            this->Controls->Add(this->label151);
            this->Controls->Add(this->label152);
            this->Controls->Add(this->label153);
            this->Controls->Add(this->label154);
            this->Controls->Add(this->label155);
            this->Controls->Add(this->label156);
            this->Controls->Add(this->label157);
            this->Controls->Add(this->label158);
            this->Controls->Add(this->label159);
            this->Controls->Add(this->label160);
            this->Controls->Add(this->label161);
            this->Controls->Add(this->label162);
            this->Controls->Add(this->label163);
            this->Controls->Add(this->label164);
            this->Controls->Add(this->label165);
            this->Controls->Add(this->label122);
            this->Controls->Add(this->label123);
            this->Controls->Add(this->label124);
            this->Controls->Add(this->label125);
            this->Controls->Add(this->label126);
            this->Controls->Add(this->label127);
            this->Controls->Add(this->label128);
            this->Controls->Add(this->label129);
            this->Controls->Add(this->label130);
            this->Controls->Add(this->label131);
            this->Controls->Add(this->label132);
            this->Controls->Add(this->label133);
            this->Controls->Add(this->label134);
            this->Controls->Add(this->label135);
            this->Controls->Add(this->label136);
            this->Controls->Add(this->label137);
            this->Controls->Add(this->label138);
            this->Controls->Add(this->label139);
            this->Controls->Add(this->label140);
            this->Controls->Add(this->label141);
            this->Controls->Add(this->label142);
            this->Controls->Add(this->label143);
            this->Controls->Add(this->label111);
            this->Controls->Add(this->label112);
            this->Controls->Add(this->label113);
            this->Controls->Add(this->label114);
            this->Controls->Add(this->label115);
            this->Controls->Add(this->label116);
            this->Controls->Add(this->label117);
            this->Controls->Add(this->label118);
            this->Controls->Add(this->label119);
            this->Controls->Add(this->label120);
            this->Controls->Add(this->label121);
            this->Controls->Add(this->label108);
            this->Controls->Add(this->label109);
            this->Controls->Add(this->label110);
            this->Controls->Add(this->label104);
            this->Controls->Add(this->label105);
            this->Controls->Add(this->label106);
            this->Controls->Add(this->label107);
            this->Controls->Add(this->label102);
            this->Controls->Add(this->label103);
            this->Controls->Add(this->label101);
            this->Controls->Add(this->label100);
            this->Controls->Add(this->label67);
            this->Controls->Add(this->label68);
            this->Controls->Add(this->label69);
            this->Controls->Add(this->label70);
            this->Controls->Add(this->label71);
            this->Controls->Add(this->label72);
            this->Controls->Add(this->label73);
            this->Controls->Add(this->label74);
            this->Controls->Add(this->label75);
            this->Controls->Add(this->label76);
            this->Controls->Add(this->label77);
            this->Controls->Add(this->label78);
            this->Controls->Add(this->label79);
            this->Controls->Add(this->label80);
            this->Controls->Add(this->label81);
            this->Controls->Add(this->label82);
            this->Controls->Add(this->label83);
            this->Controls->Add(this->label84);
            this->Controls->Add(this->label85);
            this->Controls->Add(this->label86);
            this->Controls->Add(this->label87);
            this->Controls->Add(this->label88);
            this->Controls->Add(this->label89);
            this->Controls->Add(this->label90);
            this->Controls->Add(this->label91);
            this->Controls->Add(this->label92);
            this->Controls->Add(this->label93);
            this->Controls->Add(this->label94);
            this->Controls->Add(this->label95);
            this->Controls->Add(this->label96);
            this->Controls->Add(this->label97);
            this->Controls->Add(this->label98);
            this->Controls->Add(this->label99);
            this->Controls->Add(this->label34);
            this->Controls->Add(this->label35);
            this->Controls->Add(this->label36);
            this->Controls->Add(this->label37);
            this->Controls->Add(this->label38);
            this->Controls->Add(this->label39);
            this->Controls->Add(this->label40);
            this->Controls->Add(this->label41);
            this->Controls->Add(this->label42);
            this->Controls->Add(this->label43);
            this->Controls->Add(this->label44);
            this->Controls->Add(this->label45);
            this->Controls->Add(this->label46);
            this->Controls->Add(this->label47);
            this->Controls->Add(this->label48);
            this->Controls->Add(this->label49);
            this->Controls->Add(this->label50);
            this->Controls->Add(this->label51);
            this->Controls->Add(this->label52);
            this->Controls->Add(this->label53);
            this->Controls->Add(this->label54);
            this->Controls->Add(this->label55);
            this->Controls->Add(this->label56);
            this->Controls->Add(this->label57);
            this->Controls->Add(this->label58);
            this->Controls->Add(this->label59);
            this->Controls->Add(this->label60);
            this->Controls->Add(this->label61);
            this->Controls->Add(this->label62);
            this->Controls->Add(this->label63);
            this->Controls->Add(this->label64);
            this->Controls->Add(this->label65);
            this->Controls->Add(this->label66);
            this->Controls->Add(this->label33);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label29);
            this->Controls->Add(this->label30);
            this->Controls->Add(this->label31);
            this->Controls->Add(this->label32);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {}
       void displayReg(MIPS_Sim* simulator) {
           label99->Text = simulator->getRegVal(0).ToString();
           label98->Text = simulator->getRegVal(1).ToString();
           label97->Text = simulator->getRegVal(2).ToString();
           label96->Text = simulator->getRegVal(3).ToString();
           label95->Text = simulator->getRegVal(4).ToString();
           label94->Text = simulator->getRegVal(5).ToString();
           label93->Text = simulator->getRegVal(6).ToString();
           label92->Text = simulator->getRegVal(7).ToString();
           label91->Text = simulator->getRegVal(8).ToString();
           label90->Text = simulator->getRegVal(9).ToString();
           label89->Text = simulator->getRegVal(10).ToString();
           label88->Text = simulator->getRegVal(11).ToString();
           label87->Text = simulator->getRegVal(12).ToString();
           label86->Text = simulator->getRegVal(13).ToString();
           label85->Text = simulator->getRegVal(14).ToString();
           label84->Text = simulator->getRegVal(15).ToString();
           label83->Text = simulator->getRegVal(16).ToString();
           label82->Text = simulator->getRegVal(17).ToString();
           label81->Text = simulator->getRegVal(18).ToString();
           label80->Text = simulator->getRegVal(19).ToString();
           label79->Text = simulator->getRegVal(20).ToString();
           label78->Text = simulator->getRegVal(21).ToString();
           label77->Text = simulator->getRegVal(22).ToString();
           label76->Text = simulator->getRegVal(23).ToString();
           label75->Text = simulator->getRegVal(24).ToString();
           label74->Text = simulator->getRegVal(25).ToString();
           label73->Text = simulator->getRegVal(26).ToString();
           label72->Text = simulator->getRegVal(27).ToString();
           label71->Text = simulator->getRegVal(28).ToString();
           label70->Text = simulator->getRegVal(29).ToString();
           label69->Text = simulator->getRegVal(30).ToString();
           label68->Text = simulator->getRegVal(31).ToString();
           label67->Text = simulator->getRegVal(32).ToString();
         }

       void displayMem(MIPS_Sim* simulator) {
           label164->Text = simulator->getMemVal(0).ToString();
           label163->Text = simulator->getMemVal(1).ToString();
           label162->Text = simulator->getMemVal(2).ToString();
           label161->Text = simulator->getMemVal(3).ToString();
           label160->Text = simulator->getMemVal(4).ToString();
           label159->Text = simulator->getMemVal(5).ToString();
           label158->Text = simulator->getMemVal(6).ToString();
           label157->Text = simulator->getMemVal(7).ToString();
           label156->Text = simulator->getMemVal(8).ToString();
           label155->Text = simulator->getMemVal(9).ToString();
           label131->Text = simulator->getMemVal(10).ToString();
           label130->Text = simulator->getMemVal(11).ToString();
           label129->Text = simulator->getMemVal(12).ToString();
           label128->Text = simulator->getMemVal(13).ToString();
           label127->Text = simulator->getMemVal(14).ToString();
           label126->Text = simulator->getMemVal(15).ToString();
           label125->Text = simulator->getMemVal(16).ToString();
           label124->Text = simulator->getMemVal(17).ToString();
           label123->Text = simulator->getMemVal(18).ToString();
           label122->Text = simulator->getMemVal(19).ToString();
           label142->Text = simulator->getMemVal(20).ToString();
           label141->Text = simulator->getMemVal(21).ToString();
           label140->Text = simulator->getMemVal(22).ToString();
           label139->Text = simulator->getMemVal(23).ToString();
           label138->Text = simulator->getMemVal(24).ToString();
           label137->Text = simulator->getMemVal(25).ToString();
           label136->Text = simulator->getMemVal(26).ToString();
           label135->Text = simulator->getMemVal(27).ToString();
           label134->Text = simulator->getMemVal(28).ToString();
           label133->Text = simulator->getMemVal(29).ToString();
           label120->Text = simulator->getMemVal(30).ToString();
           label119->Text = simulator->getMemVal(31).ToString();
           label118->Text = simulator->getMemVal(32).ToString();
           label117->Text = simulator->getMemVal(33).ToString();
           label116->Text = simulator->getMemVal(34).ToString();
           label115->Text = simulator->getMemVal(35).ToString();
           label114->Text = simulator->getMemVal(36).ToString();
           label113->Text = simulator->getMemVal(37).ToString();
           label112->Text = simulator->getMemVal(38).ToString();
           label111->Text = simulator->getMemVal(39).ToString();
           label101->Text = simulator->getMemVal(40).ToString();
           label103->Text = simulator->getMemVal(41).ToString();
           label102->Text = simulator->getMemVal(42).ToString();
           label107->Text = simulator->getMemVal(43).ToString();
           label106->Text = simulator->getMemVal(44).ToString();
           label105->Text = simulator->getMemVal(45).ToString();
           label104->Text = simulator->getMemVal(46).ToString();
           label110->Text = simulator->getMemVal(47).ToString();
           label109->Text = simulator->getMemVal(48).ToString();
           label108->Text = simulator->getMemVal(49).ToString();
       }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!isUpdated) {
        String^ s = textBox1->Text;
        simulator->input(s);
        isUpdated = true;
    }
    simulator->run();

    displayReg(simulator);
    displayMem(simulator);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    sStepCount++;
    //To check if btn is pressed for first time or not
    if (sStepCount == 1) {
        if (!isUpdated) {
            String^ s = textBox1->Text;
            simulator->input(s);
            isUpdated = true;
        }
    }
    simulator->singleStep();

    displayReg(simulator);
    displayMem(simulator);
}
};
}
