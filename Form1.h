#pragma once
#include "form2.h"
namespace HallBooking1 {

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
	private: System::Windows::Forms::Button^  start;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->start = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"start.BackgroundImage")));
			this->start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->start->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->start->ForeColor = System::Drawing::Color::GhostWhite;
			this->start->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"start.Image")));
			this->start->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->start->Location = System::Drawing::Point(213, 305);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(198, 48);
			this->start->TabIndex = 0;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(626, 365);
			this->Controls->Add(this->start);
			this->ForeColor = System::Drawing::Color::LightGoldenrodYellow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"The Hall of the Pearl";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Hide();
				
			 form2^ frm=gcnew form2(this);

			 frm->Show();
			 }
	};
}

