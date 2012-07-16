
/* ***************************************************************************

Programmer: Todd Pickell

Filename: Form1.h

Requirements: 

Includes: "Race.h" "Car.h" <string> <msclr/marshal_cppstd.h> <Windows.h>

Course: CISS 241 Introduction to Programming I

Date: Feb 12, 2012

Assignment: C++ Programming MidTerm Project

Description: A drag race simulator using C++ and forms fo user interface and simple animation

************************************************************************* */
#include <Windows.h>
#include <msclr/marshal_cppstd.h>	//	for marshal_as needed for stinrg to String^
#include <string>
#include "Car.h"	// Car class header
#include "Race.h"	//	 Race class header


#pragma once

namespace testing {

	//	 vv for windows forms *******************
	using namespace System;		
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	//	^^ for windows forms ********************

	//	for marshal_as needed for stinrg to String^ 
	using namespace msclr::interop;	
	// (I probably would have been better init variables as String^ instead of string but was unsure how that would work)

	// all the code I wasn't sure where to put working with forms ****************************************
	// it doesnt work well with the timers
	std::string myArray[4] = {"THREE", "TWO", "ONE", "GO"};
	int i =0;		//	cant create inside timer
	int tick1 = 0;	//	cant create inside timer
	int tick2 = 0;	//	cant create inside timer
	static bool wannaRace = true;
	bool raceRunning = false;
	//	creating objects using defaults and pointers V V
	Race *thisRace = new Race;
	Car *car1 = new Car;
	Car *car2 = new Car;
	// all the code I wasn't sure where to put working with forms *****************************************

	//	Form1 code V****************************************************************************************
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Timer^  timer2;



	private: System::Windows::Forms::Label^  GoLabel;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer3;



	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;



	



	private: System::ComponentModel::IContainer^  components;

	private:

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->GoLabel = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(390, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"RACE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(79, 41);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 74);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(78, 42);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {this->lineShape2, 
				this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(921, 390);
			this->shapeContainer1->TabIndex = 3;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::Color::Red;
			this->lineShape2->BorderWidth = 5;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 906;
			this->lineShape2->X2 = 906;
			this->lineShape2->Y1 = 11;
			this->lineShape2->Y2 = 132;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::Color::Lime;
			this->lineShape1->BorderWidth = 5;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 731;
			this->lineShape1->X2 = 731;
			this->lineShape1->Y1 = 11;
			this->lineShape1->Y2 = 132;
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// GoLabel
			// 
			this->GoLabel->AutoSize = true;
			this->GoLabel->BackColor = System::Drawing::Color::Transparent;
			this->GoLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GoLabel->Location = System::Drawing::Point(355, 147);
			this->GoLabel->Name = L"GoLabel";
			this->GoLabel->Size = System::Drawing::Size(0, 67);
			this->GoLabel->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(809, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Show Results";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown4->Location = System::Drawing::Point(675, 361);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(44, 20);
			this->numericUpDown4->TabIndex = 14;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(675, 334);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(44, 20);
			this->numericUpDown5->TabIndex = 13;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown6->Location = System::Drawing::Point(675, 307);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {35, 0, 0, 0});
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(44, 20);
			this->numericUpDown6->TabIndex = 12;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {25, 0, 0, 0});
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(580, 364);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Acceleration Rate";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(595, 337);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Braking Speed";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(612, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Top Speed";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"short", L"long"});
			this->comboBox1->Location = System::Drawing::Point(367, 306);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->Text = L"track length";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"short", L"long"});
			this->comboBox2->Location = System::Drawing::Point(367, 333);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 22;
			this->comboBox2->Text = L"slow lane length";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(367, 272);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 23;
			this->textBox1->Text = L"New Track";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 269);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 24;
			this->textBox2->Text = L"Green";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(613, 272);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 25;
			this->textBox3->Text = L"Red";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(393, 239);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Track Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(177, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Car Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(640, 239);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Car Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 263);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Green Car";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 287);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Good";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(806, 287);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Good";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(806, 263);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Red Car";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(127, 364);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 13);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Acceleration Rate";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(142, 337);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Braking Speed";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(159, 310);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Top Speed";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown7->Location = System::Drawing::Point(222, 361);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(44, 20);
			this->numericUpDown7->TabIndex = 35;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(222, 334);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(44, 20);
			this->numericUpDown8->TabIndex = 34;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown9->Location = System::Drawing::Point(222, 307);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {35, 0, 0, 0});
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(44, 20);
			this->numericUpDown9->TabIndex = 33;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {25, 0, 0, 0});
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 43);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Race Again\?";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(508, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 43);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 310);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(806, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 42;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->InterceptArrowKeys = false;
			this->numericUpDown1->Location = System::Drawing::Point(15, 314);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(75, 20);
			this->numericUpDown1->TabIndex = 45;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->InterceptArrowKeys = false;
			this->numericUpDown2->Location = System::Drawing::Point(809, 314);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(75, 20);
			this->numericUpDown2->TabIndex = 46;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 390);
			this->ControlBox = false;
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->GoLabel);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->shapeContainer1);
			this->Name = L"Form1";
			this->Text = L"Todd\'s Awesome Race Sim";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//	Form1 code ^ *************************************************************************************************
#pragma endregion

// Buttons ***************************************************************************************************
			/*	Race Button that starts race processes*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 button1->Enabled = false;	//so user cant start process more than once causing user error hell
				 setUpMenu();	//	saves settings to objects 
				 numericUpDown9->Enabled = false;
				 numericUpDown8->Enabled = false;
				 numericUpDown7->Enabled = false;
				 numericUpDown6->Enabled = false;
				 numericUpDown5->Enabled = false;
				 numericUpDown4->Enabled = false;
				 comboBox1->Enabled = false;
				 comboBox2->Enabled = false;
				 textBox1->Enabled = false;
				 textBox2->Enabled = false;
				 textBox3->Enabled = false;
				 timer3->Enabled = true;	//	starts 3 2 1 GO animation				 
			 }
			 /* Display Results button ( wish this could be better, like activated w/ out button after race is over flag is tripped )*/
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					button2->Enabled = false;
					displayResults();
			 }
			/* Race Again Button, visible after race is finished */
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 /*iv++;*/
				 this->Close();	//	closes form1 so new race / form1 is created on race again
			 }
			 /*Exit Button, visible after race is finished */
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 wannaRace = false;	//	flipped exit switch
				 this->Close();	//	closes form1
			 }

// Animation Timers ****************************************************************************************
			/* Timer for car1 animation*/
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 tick1++;	//	used for tie comparison
				car1->setEndPoint(pictureBox1->Right);	//	gets current distance from start
				numericUpDown1->Value = car1->getDistance();	//	displays distance in form1
				//	test for accel condition then calls accel method of car object
				 if(car1->getCurrentSpeed() < car1->getTopSpeed() && car1->getStatus() == false)	
				 {
					 car1->accel();
					 pictureBox1->Left += car1->getCurrentSpeed();	//	moves car graphic to new location
					 //	test for cross finish line condition
					 if(pictureBox1->Right >= lineShape1->X1)
					 {
						 car1->setStatus(true);	//	crossed finish line
						 //	 test if other car crossed finish line first
						 if(car2->getStatus() == false)
						 {
							 thisRace->setWinner(car1->getCarName());	//	set this car as winner
						 }
					 }
				 }
				 else if(car1->getStatus() == false)	//	if car has reached top speed but hasn't crossed finish line
				 {
					 pictureBox1->Left += car1->getCurrentSpeed();	//	cruise at top speed
					 //	test for cross finish line condition
					 if(pictureBox1->Right >= lineShape1->X1)
					 {
						 car1->setStatus(true);	//	crossed finish line
						 //	 test if other car crossed finish line first
						 if(car2->getStatus() == false)
						 {
							 thisRace->setWinner(car1->getCarName());	//	set this car as winner
						 }
					 }
				 }
				 else if(car1->getCurrentSpeed() > 0)	//	after crossing finish line check for car still moving
				 {
					 car1->brake();
					 pictureBox1->Left += car1->getCurrentSpeed();	//	moves car graphic to new location
					 if(pictureBox1->Right >= lineShape2->X1)	// test if hit wall
					 {
						 car1->setCurrentSpeed(0);	//	stop car @ wall
						 car1->setHealth(false);	//	car crashed
						 //	change pic to crashed (couldn't figure out how to do this with the crash car pics)
						 label11->Text = "Crashed";	//	change label on form to show health status change
					 }
				 }
				 //	test if car is stopped
				 if(car1->getCurrentSpeed() == 0)
				 {
					 if(timer2->Enabled == false && raceRunning == true)	//	check other cars timer and race running flag
					 {
						 raceRunning = false;	//	set flag to indicate race is over
					 }
				 }
				 
			 }
			/* Timer for car2 animation*/
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 tick2++;	//	used for tie comparison
				car2->setEndPoint(pictureBox2->Right);	//	gets current distance from start
				numericUpDown2->Value = car2->getDistance();	//	displays distance in form1
				//	test for accel condition then calls accel method of car object
				 if(car2->getCurrentSpeed() < car2->getTopSpeed() && car2->getStatus() == false)
				 {
					 car2->accel();
					 pictureBox2->Left += car2->getCurrentSpeed();	//	moves car graphic to new location
					 //	test for cross finish line condition
					 if(pictureBox2->Right >= lineShape1->X1)
					 {
						 car2->setStatus(true);	//	crossed finish line
						 //	 test if other car crossed finish line first
						 if(car1->getStatus() == false)
						 {
							 thisRace->setWinner(car2->getCarName());	//	set this car as winner
						 }
					 }
				 }
				 else if(car2->getStatus() == false)	//	if car has reached top speed but hasn't crossed finish line
				 {
					 pictureBox2->Left += car2->getCurrentSpeed();	//	cruise at top speed
					 //	test for cross finish line condition
					 if(pictureBox2->Right >= lineShape1->X1)
					 {
						 car2->setStatus(true);	//	crossed finish line
						  if(car1->getStatus() == false)
						 {
							 thisRace->setWinner(car2->getCarName());	//	set this car as winner
						 }
					 }
				 }
				 else if(car2->getCurrentSpeed() > 0)	//	after crossing finish line check for car still moving
				 {
					 car2->brake();
					 pictureBox2->Left += car2->getCurrentSpeed();	//	moves car graphic to new location
					
					 if(pictureBox2->Right >= lineShape2->X1)	//	test if car hit wal
					 {
						 car2->setCurrentSpeed(0);	//	stop car @ wall
						 car2->setHealth(false);	//	car crashed
						 //	change pic to crashed (couldn't figure out how to do this with the crash car pics)
						 label12->Text = "Crashed";	//	change label on form to show health status change
					 }
				 }
				 //	test if car is stopped
				 if(car2->getCurrentSpeed() == 0)
				 {					 
					 if(timer1->Enabled == false && raceRunning == true)	//	check other cars timer and race running flag
					 {
						 raceRunning = false;	//	set flag to indicate race is over
					 }
				 }
			 }
	
			/* Timer for 3 2 1 GO animation*/
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(i < 4)	//	iterates thru my array of strings to change label / for didn't work well bc inside of timer
				 {
					 // had to convert string to String^
					 String^ labelString;	//	create String^
					 labelString = marshal_as<String^>(myArray[i]); 
					 GoLabel->Text = labelString;	//	update display on form
					 i++;
				 }
				 else	
				 {
					 GoLabel->Text = " ";		//	sets label back to an empty space ( could have set label->Enabled = false; )
					 timer3->Enabled = false;	//	kills timer
					 i = 0;						//	resets iteration variable
					 raceStart();				//	calls function to start racing
				 }
			 
			 }

// Functions ***************************************************************************************************************

		/*	calls init functions and changes labels*/
	void setUpMenu()	// Race->initSettings()
	{
		//	stores settings to car and race objects
		initCar1();
		initCar2();
		initRace();
		//	changes race and car name labels,  setFormLabels();
		label8->Text = textBox2->Text;
		label7->Text = textBox1->Text;
		label9->Text = textBox3->Text;
	}
	void initCar1()	//	initialize car settings 
	{
		string tBox2string;
		tBox2string = marshal_as<string>(textBox2->Text);	// needed for stinrg to String^ conversion
		car1->setupNewCar(tBox2string, (int)numericUpDown9->Value, (int)numericUpDown8->Value, (int)numericUpDown7->Value, 13);
	}
	void initCar2()	//	initialize car settings 
	{
		string tBox3string;
		tBox3string = marshal_as<string>(textBox3->Text);	// needed for stinrg to String^ conversion
		car2->setupNewCar(tBox3string, (int)numericUpDown6->Value, (int)numericUpDown5->Value, (int)numericUpDown4->Value, 13);
	}
	void initRace()	//	initialize race settings
	{
		string tBox1string;
		tBox1string = marshal_as<string>(textBox1->Text);	// needed for stinrg to String^ conversion
		thisRace->setTrackName(tBox1string);
		if(comboBox1->SelectedItem)	// if something is selected
		{
			//	Getting crazy with the converting datatype's cheeze wiz!
			string cBox1string;
			Object^ selectedItem1 = comboBox1->SelectedItem;
			cBox1string = marshal_as<string>(selectedItem1->ToString());
			//	Getting crazy with the converting datatype's cheeze wiz!
			thisRace->setTrackLength(cBox1string);
			if(comboBox1->SelectedItem == "short")	//	this changes the finish line location
			{
				lineShape1->X1 -= 150;
				lineShape1->X2 -= 150;
			}
		}
		if(comboBox2->SelectedItem)	// if something is selected
		{
			//	Getting crazy with the converting datatype's cheeze wiz!
			string cBox2string;
			Object^ selectedItem2 = comboBox2->SelectedItem;
			cBox2string = marshal_as<string>(selectedItem2->ToString());
			//	Getting crazy with the converting datatype's cheeze wiz!
			thisRace->setSlowLength(cBox2string);
			if(comboBox2->SelectedItem == "short")	//	this changes the wall location
			{
				lineShape2->X1 -= 75;
				lineShape2->X2 -= 75;
			}
		}
	}

				/*Starts the race animation then waits for race to end*/
	void raceStart()
	{
		raceRunning = true;	//	bool flag for race in progress
		/*music();*/	
		car1->setStartPoint(pictureBox1->Right);	// sets start point to cars graphic x location
		car2->setStartPoint(pictureBox2->Right);
		timer1->Enabled = true;	//	starts timers for cars begining race animation
		timer2->Enabled = true;
		// doesnt run VV
		//	test for race over tried to return program flow to here
		if(raceRunning == false)
		{
			int diff;
			if(tick1 == tick2)	//	checks times to calculate wether tied or error
			{
				diff = 0;
			}
			switch(diff)
			{
				case '0':
					thisRace->setWinner("Tied");
					break;
				default:
					thisRace->setWinner("ERROR!");
			}
		}
		
	}

	void displayResults()	//	displays race results in a message box
	{
		 //	string conversion madness
		string myString = "Track Name: " + thisRace->getTrackName() + "\nTrack Length: " + thisRace->getTrackLength() + "\nSlow Length: " + thisRace->getSlowLength() + "\nWinner: " + thisRace->getWinner();
		String^ message = marshal_as<String^>(myString);
		//	String^ conversion madness
		String^ caption = "Race Stats";
		MessageBox::Show(message, caption, MessageBoxButtons::OK);	//	displays end of race stats
		//	makes exit and race again buttons visible
		button3->Visible = true;	//	starts over with new form1
		button4->Visible = true;	//	exits program cleanly
	}

	//void music()	couldn't get this to work properly, didn't want to load another library to enable sound, cool but not that neccassary.
	//{
	//	basic_string myString = "play Orion-Nero6.3.0.2.mp3";
	//	while(raceRunning == true)
	//	{
	//		mciSendString(myString, NULL, 0, NULL);
	//	}
	//}
};
}

