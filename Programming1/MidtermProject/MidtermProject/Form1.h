/* ***************************************************************************

Programmer: Todd Pickell

Filename: Form1.h

Requirements: None

Includes: None

Course: CISS 241 Introduction to Programming I

Date: January 31, 2012

Assignment: C++ Programming MidTerm Project

Description: Description of the program and objectives met

************************************************************************* */
/*#include "Car.h"
#include "Track.h"*/

#pragma once

namespace MidtermProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::PictureBox^  bkgrndPictureBox1;
	private: System::Windows::Forms::PictureBox^  redCar;
	private: System::Windows::Forms::PictureBox^  greenCar;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  trackNameLabel;
	private: System::Windows::Forms::Label^  redCarLabel;
	private: System::Windows::Forms::Label^  greenCarLabel;
	private: System::Windows::Forms::NumericUpDown^  topSpeedUpDownCar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  brakingUpDownCar1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  accelerationUpDownCar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  healthLabelCar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  topSpeedUpDownCar2;
	private: System::Windows::Forms::NumericUpDown^  brakingSpeedUpDownCar2;
	private: System::Windows::Forms::NumericUpDown^  accelerationUpDownCar2;
	private: System::Windows::Forms::Label^  healthLabelCar2;
	private: System::Windows::Forms::TextBox^  trackNameTextBox1;
	private: System::Windows::Forms::ComboBox^  trackLengthComboBox1;
	private: System::Windows::Forms::ComboBox^  endTrackComboBox1;
	private: System::Windows::Forms::Label^  Golabel;
	private: System::Windows::Forms::Timer^  timerCar1;
	private: System::Windows::Forms::Timer^  timerCar2;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bkgrndPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->redCar = (gcnew System::Windows::Forms::PictureBox());
			this->greenCar = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->trackNameLabel = (gcnew System::Windows::Forms::Label());
			this->redCarLabel = (gcnew System::Windows::Forms::Label());
			this->greenCarLabel = (gcnew System::Windows::Forms::Label());
			this->topSpeedUpDownCar1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->brakingUpDownCar1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->accelerationUpDownCar1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->healthLabelCar1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->topSpeedUpDownCar2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->brakingSpeedUpDownCar2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->accelerationUpDownCar2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->healthLabelCar2 = (gcnew System::Windows::Forms::Label());
			this->trackNameTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackLengthComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->endTrackComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Golabel = (gcnew System::Windows::Forms::Label());
			this->timerCar1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerCar2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bkgrndPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->redCar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->greenCar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->topSpeedUpDownCar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->brakingUpDownCar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->accelerationUpDownCar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->topSpeedUpDownCar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->brakingSpeedUpDownCar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->accelerationUpDownCar2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(533, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start Race";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// bkgrndPictureBox1
			// 
			this->bkgrndPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bkgrndPictureBox1.Image")));
			this->bkgrndPictureBox1->Location = System::Drawing::Point(22, 12);
			this->bkgrndPictureBox1->Name = L"bkgrndPictureBox1";
			this->bkgrndPictureBox1->Size = System::Drawing::Size(200, 202);
			this->bkgrndPictureBox1->TabIndex = 1;
			this->bkgrndPictureBox1->TabStop = false;
			// 
			// redCar
			// 
			this->redCar->BackColor = System::Drawing::SystemColors::WindowText;
			this->redCar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"redCar.Image")));
			this->redCar->Location = System::Drawing::Point(44, 26);
			this->redCar->Name = L"redCar";
			this->redCar->Size = System::Drawing::Size(83, 42);
			this->redCar->TabIndex = 2;
			this->redCar->TabStop = false;
			// 
			// greenCar
			// 
			this->greenCar->BackColor = System::Drawing::SystemColors::MenuText;
			this->greenCar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"greenCar.Image")));
			this->greenCar->Location = System::Drawing::Point(37, 160);
			this->greenCar->Name = L"greenCar";
			this->greenCar->Size = System::Drawing::Size(90, 44);
			this->greenCar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->greenCar->TabIndex = 3;
			this->greenCar->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(218, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 202);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(412, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(200, 202);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(607, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(200, 202);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(797, 12);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(200, 202);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(993, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(200, 202);
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			// 
			// trackNameLabel
			// 
			this->trackNameLabel->AutoSize = true;
			this->trackNameLabel->Location = System::Drawing::Point(569, 236);
			this->trackNameLabel->Name = L"trackNameLabel";
			this->trackNameLabel->Size = System::Drawing::Size(83, 13);
			this->trackNameLabel->TabIndex = 9;
			this->trackNameLabel->Text = L"My Track Name";
			this->trackNameLabel->UseMnemonic = false;
			// 
			// redCarLabel
			// 
			this->redCarLabel->AutoSize = true;
			this->redCarLabel->Location = System::Drawing::Point(183, 255);
			this->redCarLabel->Name = L"redCarLabel";
			this->redCarLabel->Size = System::Drawing::Size(32, 13);
			this->redCarLabel->TabIndex = 10;
			this->redCarLabel->Text = L"Car 1";
			// 
			// greenCarLabel
			// 
			this->greenCarLabel->AutoSize = true;
			this->greenCarLabel->Location = System::Drawing::Point(961, 255);
			this->greenCarLabel->Name = L"greenCarLabel";
			this->greenCarLabel->Size = System::Drawing::Size(32, 13);
			this->greenCarLabel->TabIndex = 11;
			this->greenCarLabel->Text = L"Car 2";
			// 
			// topSpeedUpDownCar1
			// 
			this->topSpeedUpDownCar1->Location = System::Drawing::Point(201, 305);
			this->topSpeedUpDownCar1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {115, 0, 0, 0});
			this->topSpeedUpDownCar1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {85, 0, 0, 0});
			this->topSpeedUpDownCar1->Name = L"topSpeedUpDownCar1";
			this->topSpeedUpDownCar1->Size = System::Drawing::Size(120, 20);
			this->topSpeedUpDownCar1->TabIndex = 12;
			this->topSpeedUpDownCar1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {85, 0, 0, 0});
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 312);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Top Speed";
			// 
			// brakingUpDownCar1
			// 
			this->brakingUpDownCar1->Location = System::Drawing::Point(201, 355);
			this->brakingUpDownCar1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {35, 0, 0, 0});
			this->brakingUpDownCar1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->brakingUpDownCar1->Name = L"brakingUpDownCar1";
			this->brakingUpDownCar1->Size = System::Drawing::Size(120, 20);
			this->brakingUpDownCar1->TabIndex = 14;
			this->brakingUpDownCar1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 362);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Braking Speed";
			// 
			// accelerationUpDownCar1
			// 
			this->accelerationUpDownCar1->Location = System::Drawing::Point(201, 403);
			this->accelerationUpDownCar1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {75, 0, 0, 0});
			this->accelerationUpDownCar1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->accelerationUpDownCar1->Name = L"accelerationUpDownCar1";
			this->accelerationUpDownCar1->Size = System::Drawing::Size(120, 20);
			this->accelerationUpDownCar1->TabIndex = 16;
			this->accelerationUpDownCar1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 410);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Acceleration Rate";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(99, 460);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Car Health";
			// 
			// healthLabelCar1
			// 
			this->healthLabelCar1->AutoSize = true;
			this->healthLabelCar1->Location = System::Drawing::Point(201, 459);
			this->healthLabelCar1->Name = L"healthLabelCar1";
			this->healthLabelCar1->Size = System::Drawing::Size(33, 13);
			this->healthLabelCar1->TabIndex = 19;
			this->healthLabelCar1->Text = L"Good";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(851, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Top Speed";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(851, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Braking Speed";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(851, 410);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Acceleration Rate";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(851, 460);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Car Health";
			// 
			// topSpeedUpDownCar2
			// 
			this->topSpeedUpDownCar2->Location = System::Drawing::Point(978, 304);
			this->topSpeedUpDownCar2->Name = L"topSpeedUpDownCar2";
			this->topSpeedUpDownCar2->Size = System::Drawing::Size(120, 20);
			this->topSpeedUpDownCar2->TabIndex = 24;
			// 
			// brakingSpeedUpDownCar2
			// 
			this->brakingSpeedUpDownCar2->Location = System::Drawing::Point(978, 354);
			this->brakingSpeedUpDownCar2->Name = L"brakingSpeedUpDownCar2";
			this->brakingSpeedUpDownCar2->Size = System::Drawing::Size(120, 20);
			this->brakingSpeedUpDownCar2->TabIndex = 25;
			// 
			// accelerationUpDownCar2
			// 
			this->accelerationUpDownCar2->Location = System::Drawing::Point(978, 402);
			this->accelerationUpDownCar2->Name = L"accelerationUpDownCar2";
			this->accelerationUpDownCar2->Size = System::Drawing::Size(120, 20);
			this->accelerationUpDownCar2->TabIndex = 26;
			// 
			// healthLabelCar2
			// 
			this->healthLabelCar2->AutoSize = true;
			this->healthLabelCar2->Location = System::Drawing::Point(978, 459);
			this->healthLabelCar2->Name = L"healthLabelCar2";
			this->healthLabelCar2->Size = System::Drawing::Size(33, 13);
			this->healthLabelCar2->TabIndex = 27;
			this->healthLabelCar2->Text = L"Good";
			// 
			// trackNameTextBox1
			// 
			this->trackNameTextBox1->Location = System::Drawing::Point(555, 282);
			this->trackNameTextBox1->Name = L"trackNameTextBox1";
			this->trackNameTextBox1->Size = System::Drawing::Size(115, 20);
			this->trackNameTextBox1->TabIndex = 28;
			this->trackNameTextBox1->Text = L"Enter Track Name";
			// 
			// trackLengthComboBox1
			// 
			this->trackLengthComboBox1->FormattingEnabled = true;
			this->trackLengthComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Long", L"Short"});
			this->trackLengthComboBox1->Location = System::Drawing::Point(555, 329);
			this->trackLengthComboBox1->Name = L"trackLengthComboBox1";
			this->trackLengthComboBox1->Size = System::Drawing::Size(115, 21);
			this->trackLengthComboBox1->TabIndex = 29;
			this->trackLengthComboBox1->Text = L"Track Length";
			// 
			// endTrackComboBox1
			// 
			this->endTrackComboBox1->FormattingEnabled = true;
			this->endTrackComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Long", L"Short"});
			this->endTrackComboBox1->Location = System::Drawing::Point(555, 378);
			this->endTrackComboBox1->Name = L"endTrackComboBox1";
			this->endTrackComboBox1->Size = System::Drawing::Size(115, 21);
			this->endTrackComboBox1->TabIndex = 30;
			this->endTrackComboBox1->Text = L"Slow Down Lane";
			// 
			// Golabel
			// 
			this->Golabel->AutoSize = true;
			this->Golabel->BackColor = System::Drawing::SystemColors::MenuText;
			this->Golabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Golabel->ForeColor = System::Drawing::Color::Yellow;
			this->Golabel->Location = System::Drawing::Point(542, 76);
			this->Golabel->Name = L"Golabel";
			this->Golabel->Size = System::Drawing::Size(0, 73);
			this->Golabel->TabIndex = 31;
			this->Golabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timerCar1
			// 
			this->timerCar1->Tick += gcnew System::EventHandler(this, &Form1::timerCar1_Tick);
			// 
			// timerCar2
			// 
			this->timerCar2->Tick += gcnew System::EventHandler(this, &Form1::timerCar2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1217, 548);
			this->Controls->Add(this->Golabel);
			this->Controls->Add(this->endTrackComboBox1);
			this->Controls->Add(this->trackLengthComboBox1);
			this->Controls->Add(this->trackNameTextBox1);
			this->Controls->Add(this->healthLabelCar2);
			this->Controls->Add(this->accelerationUpDownCar2);
			this->Controls->Add(this->brakingSpeedUpDownCar2);
			this->Controls->Add(this->topSpeedUpDownCar2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->healthLabelCar1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->accelerationUpDownCar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->brakingUpDownCar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->topSpeedUpDownCar1);
			this->Controls->Add(this->greenCarLabel);
			this->Controls->Add(this->redCarLabel);
			this->Controls->Add(this->trackNameLabel);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->greenCar);
			this->Controls->Add(this->redCar);
			this->Controls->Add(this->bkgrndPictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Todd\'s Awesome Drag Race Sim";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bkgrndPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->redCar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->greenCar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->topSpeedUpDownCar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->brakingUpDownCar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->accelerationUpDownCar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->topSpeedUpDownCar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->brakingSpeedUpDownCar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->accelerationUpDownCar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				/*Car myCar1(name, TopSpeed, BrakingSpeed, AccelerationRate);		
				Car myCar2(name, TopSpeed, BrakingSpeed, AccelerationRate);*/
				this->timerCar1->Start();
				this->timerCar2->Start();
			 }
private: System::Void timerCar1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->redCar->Left +=2;
		 }
private: System::Void timerCar2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->greenCar->Left +=2;
		 }
};
}

