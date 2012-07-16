#pragma once

//#include "MainClass.h"

namespace DragRace {

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click); // Tried to set it directly as event handler
			// This is the closest to doing what I want so far but this
			// still gives an error cannot convert DragRace::Form1 ^const to
			// MainClass ^   no user defined conversion operator available
			// marshal_as doest support ^const
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion


		//void go()
		//{
		//	mainInstance.raceStart();
		//	/* trying to call the raceStart method 
		//	of the object mainInstance that I created 
		//	from my MainClass. I created this object 
		//	in my DragRace.cpp int main() function.
		//	This should be quite simple and straight 
		//	forward but for some reason is not.
		//	This is the same issue I ran into that 
		//	forced me to create all of my objects
		//	from my Form1.h file and write most of 
		//	my code there that ran the program in
		//	the first version I submitted. I am
		//	trying to make this version much cleaner 
		//	and object oreinted in nature */
		//}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				/*	go();	 tried to call from local function*/
				 mainInstance.initSettings(); // tried to call directly from object
			 }
	};
}

