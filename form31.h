#pragma once

namespace HallBooking1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// Summary for form31
	/// </summary>
	public ref class form31 : public System::Windows::Forms::Form
	{
	public:
		form31(void)
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
		~form31()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;


	private: System::Windows::Forms::TextBox^  pric;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  code;
	private: System::Windows::Forms::Button^  add1;



	private: System::Windows::Forms::Button^  exit;

	private: System::Windows::Forms::DateTimePicker^  date1;

	private: System::Windows::Forms::TextBox^  pri;






	private: System::Windows::Forms::TextBox^  phone;

	private: System::Windows::Forms::TextBox^  address;


	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  load1;
	private: System::Windows::Forms::Button^  exit1;


	private: System::Windows::Forms::Button^  delet1;

	private: System::Windows::Forms::Button^  exch;

	private: System::Windows::Forms::ListBox^  listBox1;



	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button2;



	private: System::ComponentModel::IContainer^  components;




	protected: 



























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form31::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pric = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->code = (gcnew System::Windows::Forms::TextBox());
			this->add1 = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->date1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pri = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->load1 = (gcnew System::Windows::Forms::Button());
			this->exit1 = (gcnew System::Windows::Forms::Button());
			this->delet1 = (gcnew System::Windows::Forms::Button());
			this->exch = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(616, 362);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Maroon;
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->pric);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->code);
			this->tabPage1->Controls->Add(this->add1);
			this->tabPage1->Controls->Add(this->exit);
			this->tabPage1->Controls->Add(this->date1);
			this->tabPage1->Controls->Add(this->pri);
			this->tabPage1->Controls->Add(this->phone);
			this->tabPage1->Controls->Add(this->address);
			this->tabPage1->Controls->Add(this->name);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(608, 336);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client Inf";
			this->tabPage1->Click += gcnew System::EventHandler(this, &form31::tabPage1_Click);
			// 
			// label12
			// 
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label12->Location = System::Drawing::Point(32, 237);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(147, 24);
			this->label12->TabIndex = 51;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(35, 21);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(149, 157);
			this->panel3->TabIndex = 50;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(51, 196);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(36, 30);
			this->panel2->TabIndex = 49;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(134, 196);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(36, 30);
			this->panel1->TabIndex = 48;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(315, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 47;
			this->label8->Text = L" 8:12";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(35, 311);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(149, 20);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Date Now";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label11->Click += gcnew System::EventHandler(this, &form31::label11_Click);
			// 
			// pric
			// 
			this->pric->Location = System::Drawing::Point(286, 309);
			this->pric->Name = L"pric";
			this->pric->ReadOnly = true;
			this->pric->Size = System::Drawing::Size(149, 20);
			this->pric->TabIndex = 44;
			this->pric->TextChanged += gcnew System::EventHandler(this, &form31::pric_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(441, 312);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Remaining";
			// 
			// code
			// 
			this->code->Location = System::Drawing::Point(286, 18);
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(148, 20);
			this->code->TabIndex = 42;
			this->code->TextChanged += gcnew System::EventHandler(this, &form31::code_TextChanged);
			// 
			// add1
			// 
			this->add1->BackColor = System::Drawing::Color::DarkRed;
			this->add1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->add1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"add1.Image")));
			this->add1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->add1->Location = System::Drawing::Point(229, 262);
			this->add1->Name = L"add1";
			this->add1->Size = System::Drawing::Size(115, 31);
			this->add1->TabIndex = 41;
			this->add1->Text = L"Add";
			this->add1->UseVisualStyleBackColor = false;
			this->add1->Click += gcnew System::EventHandler(this, &form31::button2_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::DarkRed;
			this->exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->exit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exit.Image")));
			this->exit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->exit->Location = System::Drawing::Point(375, 262);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(121, 31);
			this->exit->TabIndex = 40;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &form31::exit_Click);
			// 
			// date1
			// 
			this->date1->CustomFormat = L"dd/MM/yyyy";
			this->date1->Location = System::Drawing::Point(267, 191);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(186, 20);
			this->date1->TabIndex = 39;
			this->date1->ValueChanged += gcnew System::EventHandler(this, &form31::date1_ValueChanged);
			// 
			// pri
			// 
			this->pri->Location = System::Drawing::Point(286, 156);
			this->pri->Name = L"pri";
			this->pri->Size = System::Drawing::Size(149, 20);
			this->pri->TabIndex = 38;
			// 
			// phone
			// 
			this->phone->Location = System::Drawing::Point(286, 121);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(149, 20);
			this->phone->TabIndex = 35;
			this->phone->TextChanged += gcnew System::EventHandler(this, &form31::textBox3_TextChanged);
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(286, 84);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(149, 20);
			this->address->TabIndex = 34;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(286, 48);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(149, 20);
			this->name->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(552, 227);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Period";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(545, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Address";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(507, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Paid-up payment";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(552, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Phone";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(524, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Booking date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(530, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Client name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(171, -15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(530, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Client code";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Click += gcnew System::EventHandler(this, &form31::label1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Maroon;
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(608, 336);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"File";
			this->tabPage2->Click += gcnew System::EventHandler(this, &form31::tabPage2_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->label13);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->load1);
			this->splitContainer1->Panel1->Controls->Add(this->exit1);
			this->splitContainer1->Panel1->Controls->Add(this->delet1);
			this->splitContainer1->Panel1->Controls->Add(this->exch);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &form31::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->listBox1);
			this->splitContainer1->Size = System::Drawing::Size(602, 330);
			this->splitContainer1->SplitterDistance = 214;
			this->splitContainer1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkRed;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(70, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form31::button2_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(78, 11);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Code Search";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(70, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Search";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form31::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form31::textBox1_TextChanged_1);
			// 
			// load1
			// 
			this->load1->BackColor = System::Drawing::Color::DarkRed;
			this->load1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->load1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"load1.Image")));
			this->load1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->load1->Location = System::Drawing::Point(69, 116);
			this->load1->Name = L"load1";
			this->load1->Size = System::Drawing::Size(75, 23);
			this->load1->TabIndex = 4;
			this->load1->Text = L"Load";
			this->load1->UseVisualStyleBackColor = false;
			this->load1->Click += gcnew System::EventHandler(this, &form31::load1_Click);
			// 
			// exit1
			// 
			this->exit1->BackColor = System::Drawing::Color::DarkRed;
			this->exit1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->exit1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exit1.Image")));
			this->exit1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->exit1->Location = System::Drawing::Point(69, 275);
			this->exit1->Name = L"exit1";
			this->exit1->Size = System::Drawing::Size(75, 23);
			this->exit1->TabIndex = 3;
			this->exit1->Text = L"Exit";
			this->exit1->UseVisualStyleBackColor = false;
			this->exit1->Click += gcnew System::EventHandler(this, &form31::exit1_Click);
			// 
			// delet1
			// 
			this->delet1->BackColor = System::Drawing::Color::DarkRed;
			this->delet1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->delet1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"delet1.Image")));
			this->delet1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->delet1->Location = System::Drawing::Point(69, 202);
			this->delet1->Name = L"delet1";
			this->delet1->Size = System::Drawing::Size(75, 23);
			this->delet1->TabIndex = 1;
			this->delet1->Text = L"Remove";
			this->delet1->UseVisualStyleBackColor = false;
			this->delet1->Click += gcnew System::EventHandler(this, &form31::delet1_Click);
			// 
			// exch
			// 
			this->exch->BackColor = System::Drawing::Color::DarkRed;
			this->exch->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->exch->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exch.Image")));
			this->exch->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->exch->Location = System::Drawing::Point(69, 160);
			this->exch->Name = L"exch";
			this->exch->Size = System::Drawing::Size(75, 23);
			this->exch->TabIndex = 0;
			this->exch->Text = L"Update";
			this->exch->UseVisualStyleBackColor = false;
			this->exch->Click += gcnew System::EventHandler(this, &form31::exch_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Maroon;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(384, 330);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &form31::listBox1_SelectedIndexChanged);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"64408.png");
			this->imageList1->Images->SetKeyName(1, L"13382210944.png");
			this->imageList1->Images->SetKeyName(2, L"13613797106.jpg");
			this->imageList1->Images->SetKeyName(3, L"b81ca257785.jpg");
			this->imageList1->Images->SetKeyName(4, L"WeddingStagesandBackdropsImage1.jpg");
			this->imageList1->Images->SetKeyName(5, L"696cbf6ddea3f77adbb07c84e72bd134.jpg");
			// 
			// form31
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 362);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form31";
			this->Text = L"Client Data";
			this->Load += gcnew System::EventHandler(this, &form31::form31_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregiond
		
		private: void  add2(){
					 
			 listBox1->Items->Clear();
			 label8->Text="8:12";
		     String^prio =	 label8->Text ;
			 DateTime time=DateTime::Now;
			 label11->Text=Convert::ToString(time);
			 String ^ time_now =label11->Text ;
			 String ^ CustomerInfo = "";
			 String ^ Customernum = code->Text;
			 String ^ CustomerName = name->Text ;
			 String ^ CustomerAddress = address->Text;
			 String ^ CustomerPhone = phone->Text;
			 String ^ CustomerPaid = pri->Text ;
			 double pr= Convert::ToDouble(pri->Text);
			 double re;
			 re=10000-pr;
			 pric->Text =Convert::ToString(re);
			 date1->Text= Convert::ToString(date1->Text);
			 String^dat=date1->Text;
			 CustomerInfo =   Customernum +"\t"+ CustomerName + "\t" + CustomerAddress + "\t" + CustomerPhone + "\t" + date1->Text +"\t"+time_now+"\t"+pri->Text+"\t"+ pric->Text  ;
			 listBox1->Items->Add(CustomerInfo);
			 System::IO::StreamWriter^ savefile= gcnew System::IO::StreamWriter("Information.txt",true);
			 for(int i=0;i< listBox1->Items->Count;i++)
			 {
				 savefile->WriteLine(listBox1->Items[i]);
			 }
			 savefile->Close();
				 } 
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(code->Text==""||name->Text==""||address->Text==""||phone->Text==""||pri->Text==""){
			 
			 MessageBox::Show(" please,Add Information! "," Error ",MessageBoxButtons::OK,MessageBoxIcon::Error);

			 }
			 else{
				 
		bool flag=false;
		bool flag2=false;
			 for(int i=0;i<listBox1->Items->Count;i++)
			   {
				    String^ CustomerInfo=Convert::ToString(listBox1->Items[i]);
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=CustomerInfo->Split(splitter);
				    if(code->Text==arr[0])
				    {
						flag2=true;
								
				    }
			   }
			 for(int i=0;i<listBox1->Items->Count;i++)
			   {
				    String^ CustomerInfo=Convert::ToString(listBox1->Items[i]);
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=CustomerInfo->Split(splitter);
				    if(date1->Text==arr[4])
				    {
						flag=true;
								
				    }
			   }
			 if(flag==true)
			 {
				MessageBox::Show("date Exists","warning",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 else if(flag2==true)
			 {
				 MessageBox::Show("code Exists","warning",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }else
			 {
				 add2();
			 }
	
			 
			 }
		
		 }
private: System::Void exit1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(	 MessageBox::Show("Are you sure you want to get out? ", "warningMessage",MessageBoxButtons::YesNo,MessageBoxIcon::Question)== System :: Windows :: Forms ::DialogResult :: Yes)
			Application::Exit();  
		 }
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
		if(	 MessageBox::Show("Are you sure you want to get out? ", "warningMessage",MessageBoxButtons::YesNo,MessageBoxIcon::Question)== System :: Windows :: Forms ::DialogResult :: Yes)
			Application::Exit();
		 }
private: System::Void code_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void load1_Click(System::Object^  sender, System::EventArgs^  e) {
			  listBox1->Items->Clear();
			 System::IO::StreamReader^ loadfile=gcnew System::IO::StreamReader("Information.txt");
			
			 while(! loadfile->EndOfStream)
				 {
					 listBox1->Items->Add(loadfile->ReadLine());
				 }
				 loadfile->Close();
			 }
	private: System::Void exch_Click(System::Object^  sender, System::EventArgs^  e) {
				
				if(listBox1->SelectedIndex == -1)
				 {
				 MessageBox::Show(" Error : Select item ","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }else{
				
			   String ^ CustomerInfo = "";
			    String ^ time_now =label11->Text ;
			 String ^ Customernum = code->Text;
			 String ^ CustomerName = name->Text ;
			 String ^ CustomerAddress = address->Text;
			 String ^ CustomerPhone = phone->Text;
			 String ^ CustomerPaid = pri->Text ;
			 String^dat=date1->Text ;
			 date1->Text= Convert::ToString(date1->Text);
			 CustomerInfo =   Customernum +"\t"+ CustomerName + "\t" + CustomerAddress + "\t" + CustomerPhone + "\t" + date1->Text +"\t"+time_now+"\t"+pri->Text+"\t"+ pric->Text  ;
				int index=listBox1->SelectedIndex;
				listBox1->Items[index]=CustomerInfo;
				}
			 
		 }
private: System::Void delet1_Click(System::Object^  sender, System::EventArgs^  e) {

			 listBox1->Items->Remove(listBox1->SelectedItem);
			
		 }

private: System::Void pric_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }

private: System::Void test_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void date1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 date1->ShowUpDown =true;//لتعديل التاريخ بزياده لو نقصان الشهر او اليوم او السنه 
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void form31_Load(System::Object^  sender, System::EventArgs^  e) {
 	 
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if(listBox1->SelectedIndex!=-1){
			    String^ CustomerInfo=Convert::ToString(listBox1->SelectedItem);
				array<Char>^ splitter={'\t'};
				array<String^>^ arr=CustomerInfo->Split(splitter);

				code->Text=arr[0];
				name->Text=arr[1];
				address->Text=arr[2];
				phone->Text=arr[3];
				date1->Text=arr[4];
				label11->Text=arr[5];
				pri->Text=arr[6];
				
				
				
				}

		 }
private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 for(int i=0;i<listBox1->Items->Count;i++)
			   {
				   String^ CustomerInfo=Convert::ToString(listBox1->Items[i]);
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=CustomerInfo->Split(splitter);
				    if(textBox1->Text==arr[0])
				    {
						code->Text=arr[0];
						name->Text=arr[1];
						address->Text=arr[2];
						phone->Text=arr[3];
						date1->Text=arr[4];
						label11->Text=arr[5];
						pri->Text=arr[6];		
				    }
				    
			   }
			  
			   
			 
				StreamReader^ sr=gcnew StreamReader("Information.txt");
				while(!sr->EndOfStream)
				{
					String^ CustomerInfo=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=CustomerInfo->Split(splitter);
				    if(textBox1->Text==arr[0])
				    {
						CustomerInfo =   arr[0]+"\t"+ arr[1] + "\t" + arr[2] + "\t" + arr[3] + "\t" + date1->Text +"\t"+arr[6]+"\t"+ pric->Text  ;					
						listBox1->Items->Add(CustomerInfo);
					 System::IO::StreamWriter^ savfile= gcnew System::IO::StreamWriter("search.txt");
						 savfile->WriteLine(CustomerInfo);
				
						 savfile->Close();
						    }
				   
				}
				sr->Close();
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

			   StreamWriter^ sr=gcnew StreamWriter("Information.txt");
				int c=listBox1->Items->Count;
				for(int i=0;i<c;i++)
				{
					sr->WriteLine(listBox1->Items[i]);
				}
				sr->Close();
		 }
};
}
