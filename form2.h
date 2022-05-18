#pragma once
#include "form31.h"
#include "form3.h"

namespace HallBooking1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		Form^f;
		form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		form2(Form^f1)
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
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  know;
	private: System::Windows::Forms::Button^  book;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  back;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->know = (gcnew System::Windows::Forms::Button());
			this->book = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// know
			// 
			this->know->BackColor = System::Drawing::Color::DarkRed;
			this->know->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"know.BackgroundImage")));
			this->know->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->know->Location = System::Drawing::Point(22, 12);
			this->know->Name = L"know";
			this->know->Size = System::Drawing::Size(291, 304);
			this->know->TabIndex = 1;
			this->know->Text = L"Identify the hall";
			this->know->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->know->UseVisualStyleBackColor = false;
			this->know->Click += gcnew System::EventHandler(this, &form2::know_Click);
			// 
			// book
			// 
			this->book->BackColor = System::Drawing::Color::DarkRed;
			this->book->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"book.BackgroundImage")));
			this->book->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->book->Location = System::Drawing::Point(333, 12);
			this->book->Name = L"book";
			this->book->Size = System::Drawing::Size(268, 304);
			this->book->TabIndex = 2;
			this->book->Text = L"Reservations";
			this->book->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->book->UseVisualStyleBackColor = false;
			this->book->Click += gcnew System::EventHandler(this, &form2::book_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkRed;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(478, 323);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 33);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &form2::button5_Click);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::DarkRed;
			this->back->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->back->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"back.Image")));
			this->back->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->back->Location = System::Drawing::Point(347, 323);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(113, 34);
			this->back->TabIndex = 6;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &form2::back_Click);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(625, 368);
			this->Controls->Add(this->back);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->book);
			this->Controls->Add(this->know);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form2";
			this->Text = L"The Hall of the Pearl";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void book_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				
			 form31^ frm=gcnew form31();

			 frm->ShowDialog();
			 }
private: System::Void know_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
				
			 form3^ frm=gcnew form3(this);

			 frm->ShowDialog();
		 }
private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
if(	 MessageBox::Show("Are you sure you want to get out? ", "warningMessage",MessageBoxButtons::YesNo,MessageBoxIcon::Question)== System :: Windows :: Forms ::DialogResult :: Yes)
			Application::Exit();			
		 }
private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->Hide();
			  f->Show();
		 }
};
}
