#pragma once
#include"form4.h"
#include"form5.h"

namespace HallBooking1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		Form^f;
		form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		form3(Form^f1)
		{
			f=f1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form3::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(330, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(283, 271);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Video";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form3::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkRed;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(361, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &form3::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkRed;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(500, 308);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &form3::button5_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(297, 271);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Dinner";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form3::button1_Click);
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(625, 353);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form3";
			this->Text = L"The Hall of the Pearl";
			this->Load += gcnew System::EventHandler(this, &form3::form3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				if(	 MessageBox::Show("Are you sure you want to get out? ", "warningMessage",MessageBoxButtons::YesNo,MessageBoxIcon::Question)== System :: Windows :: Forms ::DialogResult :: Yes)
			Application::Exit();
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Hide();
				f->Show();
			 				 
			 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				
			 form4^ frm=gcnew form4(this);

			 frm->Show();
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			form5^ frm=gcnew form5();

			frm->ShowDialog(); 
		 }
private: System::Void form3_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
