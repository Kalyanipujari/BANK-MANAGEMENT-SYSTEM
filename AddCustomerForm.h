#pragma once

namespace BankMsVersionOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddCustomerForm
	/// </summary>
	public ref class AddCustomerForm : public System::Windows::Forms::Form
	{
	public:
		AddCustomerForm(void)
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
		~AddCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButtonCurrent;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButtonSavings;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButtonStudent;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textCustAdhar;
	private: System::Windows::Forms::TextBox^ textCustEmail;
	private: System::Windows::Forms::TextBox^ textCustContact;
	private: System::Windows::Forms::TextBox^ textCustAddress;
	private: System::Windows::Forms::TextBox^ textCustName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateOFBirthTimePicker;

	private: System::Windows::Forms::TextBox^ textCustPin;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBalance;
	private: System::Windows::Forms::PictureBox^ pictureBoxCudtImage;
	private: System::Windows::Forms::PictureBox^ pictureBoxSign;
	private: System::Windows::Forms::PictureBox^ pictureBoxAdharImage;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textCustAge;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddCustomerForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonStudent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCurrent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSavings = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textCustAdhar = (gcnew System::Windows::Forms::TextBox());
			this->textCustEmail = (gcnew System::Windows::Forms::TextBox());
			this->textCustContact = (gcnew System::Windows::Forms::TextBox());
			this->textCustAddress = (gcnew System::Windows::Forms::TextBox());
			this->textCustName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateOFBirthTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->textCustPin = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBalance = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxCudtImage = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxSign = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAdharImage = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textCustAge = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCudtImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSign))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdharImage))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonStudent);
			this->groupBox1->Controls->Add(this->radioButtonCurrent);
			this->groupBox1->Controls->Add(this->radioButtonSavings);
			this->groupBox1->Location = System::Drawing::Point(259, 532);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(274, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select Account Type";
			// 
			// radioButtonStudent
			// 
			this->radioButtonStudent->AutoSize = true;
			this->radioButtonStudent->Location = System::Drawing::Point(150, 73);
			this->radioButtonStudent->Name = L"radioButtonStudent";
			this->radioButtonStudent->Size = System::Drawing::Size(78, 21);
			this->radioButtonStudent->TabIndex = 2;
			this->radioButtonStudent->TabStop = true;
			this->radioButtonStudent->Text = L"Student";
			this->radioButtonStudent->UseVisualStyleBackColor = true;
			// 
			// radioButtonCurrent
			// 
			this->radioButtonCurrent->AutoSize = true;
			this->radioButtonCurrent->Location = System::Drawing::Point(150, 48);
			this->radioButtonCurrent->Name = L"radioButtonCurrent";
			this->radioButtonCurrent->Size = System::Drawing::Size(76, 21);
			this->radioButtonCurrent->TabIndex = 1;
			this->radioButtonCurrent->TabStop = true;
			this->radioButtonCurrent->Text = L"Current";
			this->radioButtonCurrent->UseVisualStyleBackColor = true;
			// 
			// radioButtonSavings
			// 
			this->radioButtonSavings->AutoSize = true;
			this->radioButtonSavings->Location = System::Drawing::Point(150, 21);
			this->radioButtonSavings->Name = L"radioButtonSavings";
			this->radioButtonSavings->Size = System::Drawing::Size(79, 21);
			this->radioButtonSavings->TabIndex = 0;
			this->radioButtonSavings->TabStop = true;
			this->radioButtonSavings->Text = L"Savings";
			this->radioButtonSavings->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(517, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(415, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Create Account For Customer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(109, 188);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 20);
			this->label11->TabIndex = 50;
			this->label11->Text = L"DateOfBirth";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(109, 532);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 20);
			this->label10->TabIndex = 48;
			this->label10->Text = L"Account Type";
			// 
			// textCustAdhar
			// 
			this->textCustAdhar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAdhar->Location = System::Drawing::Point(259, 374);
			this->textCustAdhar->Name = L"textCustAdhar";
			this->textCustAdhar->Size = System::Drawing::Size(274, 27);
			this->textCustAdhar->TabIndex = 45;
			// 
			// textCustEmail
			// 
			this->textCustEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustEmail->Location = System::Drawing::Point(259, 324);
			this->textCustEmail->Name = L"textCustEmail";
			this->textCustEmail->Size = System::Drawing::Size(274, 27);
			this->textCustEmail->TabIndex = 44;
			// 
			// textCustContact
			// 
			this->textCustContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustContact->Location = System::Drawing::Point(259, 281);
			this->textCustContact->Name = L"textCustContact";
			this->textCustContact->Size = System::Drawing::Size(274, 27);
			this->textCustContact->TabIndex = 43;
			// 
			// textCustAddress
			// 
			this->textCustAddress->BackColor = System::Drawing::Color::White;
			this->textCustAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAddress->Location = System::Drawing::Point(259, 236);
			this->textCustAddress->Name = L"textCustAddress";
			this->textCustAddress->Size = System::Drawing::Size(274, 27);
			this->textCustAddress->TabIndex = 42;
			// 
			// textCustName
			// 
			this->textCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustName->Location = System::Drawing::Point(259, 150);
			this->textCustName->Name = L"textCustName";
			this->textCustName->Size = System::Drawing::Size(274, 27);
			this->textCustName->TabIndex = 41;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(111, 374);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 20);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Adhar No";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(111, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 20);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(109, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Contact No";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(110, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 20);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(111, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(109, 473);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Assign Pin";
			// 
			// dateOFBirthTimePicker
			// 
			this->dateOFBirthTimePicker->Location = System::Drawing::Point(259, 188);
			this->dateOFBirthTimePicker->Name = L"dateOFBirthTimePicker";
			this->dateOFBirthTimePicker->Size = System::Drawing::Size(200, 22);
			this->dateOFBirthTimePicker->TabIndex = 53;
			// 
			// textCustPin
			// 
			this->textCustPin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustPin->Location = System::Drawing::Point(259, 466);
			this->textCustPin->Name = L"textCustPin";
			this->textCustPin->Size = System::Drawing::Size(274, 27);
			this->textCustPin->TabIndex = 54;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(109, 681);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(226, 20);
			this->label8->TabIndex = 55;
			this->label8->Text = L"Account Opening Balance";
			// 
			// textBalance
			// 
			this->textBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBalance->Location = System::Drawing::Point(367, 681);
			this->textBalance->Name = L"textBalance";
			this->textBalance->Size = System::Drawing::Size(166, 27);
			this->textBalance->TabIndex = 56;
			// 
			// pictureBoxCudtImage
			// 
			this->pictureBoxCudtImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxCudtImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxCudtImage->Location = System::Drawing::Point(603, 150);
			this->pictureBoxCudtImage->Name = L"pictureBoxCudtImage";
			this->pictureBoxCudtImage->Size = System::Drawing::Size(308, 244);
			this->pictureBoxCudtImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxCudtImage->TabIndex = 57;
			this->pictureBoxCudtImage->TabStop = false;
			// 
			// pictureBoxSign
			// 
			this->pictureBoxSign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxSign->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxSign->Location = System::Drawing::Point(1078, 443);
			this->pictureBoxSign->Name = L"pictureBoxSign";
			this->pictureBoxSign->Size = System::Drawing::Size(233, 244);
			this->pictureBoxSign->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxSign->TabIndex = 58;
			this->pictureBoxSign->TabStop = false;
			// 
			// pictureBoxAdharImage
			// 
			this->pictureBoxAdharImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxAdharImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxAdharImage->Location = System::Drawing::Point(991, 150);
			this->pictureBoxAdharImage->Name = L"pictureBoxAdharImage";
			this->pictureBoxAdharImage->Size = System::Drawing::Size(382, 244);
			this->pictureBoxAdharImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxAdharImage->TabIndex = 59;
			this->pictureBoxAdharImage->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(642, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 37);
			this->button1->TabIndex = 60;
			this->button1->Text = L"Browse Customer Image";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddCustomerForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1046, 400);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(293, 37);
			this->button2->TabIndex = 61;
			this->button2->Text = L"Browse Customer\'s Adhar Image";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddCustomerForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1102, 693);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 37);
			this->button3->TabIndex = 62;
			this->button3->Text = L"Browse Sign";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddCustomerForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(633, 742);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 37);
			this->button4->TabIndex = 63;
			this->button4->Text = L"Create Account";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AddCustomerForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::LightSteelBlue;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(111, 427);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 20);
			this->label9->TabIndex = 64;
			this->label9->Text = L"Age";
			// 
			// textCustAge
			// 
			this->textCustAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAge->Location = System::Drawing::Point(259, 420);
			this->textCustAge->Name = L"textCustAge";
			this->textCustAge->Size = System::Drawing::Size(274, 27);
			this->textCustAge->TabIndex = 65;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Location = System::Drawing::Point(92, 143);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(470, 587);
			this->panel1->TabIndex = 66;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Location = System::Drawing::Point(578, 143);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(822, 587);
			this->panel2->TabIndex = 67;
			// 
			// AddCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1478, 863);
			this->Controls->Add(this->textCustAge);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBoxAdharImage);
			this->Controls->Add(this->pictureBoxSign);
			this->Controls->Add(this->pictureBoxCudtImage);
			this->Controls->Add(this->textBalance);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textCustPin);
			this->Controls->Add(this->dateOFBirthTimePicker);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textCustAdhar);
			this->Controls->Add(this->textCustEmail);
			this->Controls->Add(this->textCustContact);
			this->Controls->Add(this->textCustAddress);
			this->Controls->Add(this->textCustName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->Name = L"AddCustomerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddCustomerForm";
			this->Load += gcnew System::EventHandler(this, &AddCustomerForm::AddCustomerForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCudtImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSign))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdharImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	bool secondFlag = false;
	bool thirdFlag = false;
	String^ AccountType;
	DateTime^ dt = DateTime::Now;
	String^ currentDate = dt->ToLongDateString();
	int age;
	int openingBalance;
	int pin;
	if (textCustAge->Text->Length != 0)
	{
		age = Int32::Parse(textCustAge->Text);
	}
	if (textBalance->Text->Length != 0)
	{
		openingBalance = Int32::Parse(textBalance->Text);
	}
	if (textCustPin->Text->Length != 0)
	{
		pin = Int32::Parse(textCustPin->Text);
	}
	if(radioButtonSavings->Checked)
	{ 
		AccountType = radioButtonSavings->Text;
	}
	else if (radioButtonCurrent->Checked)
	{
		AccountType = radioButtonCurrent->Text;
	}
	else if (radioButtonStudent->Checked)
	{
		AccountType = radioButtonStudent->Text;
	}
	else {
		MessageBox::Show("Please select Account Type");
	}
	if (textCustAdhar->Text->Length != 0 && (radioButtonCurrent->Checked || radioButtonSavings->Checked || radioButtonStudent))
	{
		try {
			String^ uname = textCustAdhar->Text;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			bool flag = false;
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select adharNo,accountType from Customers", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (uname == dr->GetString(0) && dr->GetString(1)->Contains(AccountType))
				{

					flag = true;
					break;
				}
			}
			if (flag)
			{
				MessageBox::Show("This Customer has Already has an "+AccountType+" Account");
				secondFlag = false;
			}
			else
			{
				thirdFlag = true;
			}
			con->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	if (textCustName->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Name");
	}
	else if (textCustAddress->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Address");

	}
	else if (textCustAdhar->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Adhar Details ");

	}
	else if (textCustContact->Text->Length == 0)
	{
		MessageBox::Show("Please Enter contact no");

	}
	else if (textCustEmail->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Email");

	}
	else if (textCustPin->Text->Length == 0)
	{
		MessageBox::Show("Please Assign Pin");

	}
	else if (textBalance->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Account Opening Balance");

	}
	else if (textCustAge->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Age");

	}
	else if (currentDate==dateOFBirthTimePicker->Text)
	{
		MessageBox::Show("Please Select Date Of Birth");

	}
	else if (!(textCustEmail->Text->Contains("@gmail.com")))
	{
		MessageBox::Show("Invalid Email");

	}
	else if (age<=17 && !(radioButtonStudent->Checked))
	{
		MessageBox::Show("For Savings and Current Accounts an Age should be 18 or above");

	}
	else if (openingBalance < 500 && !(radioButtonStudent->Checked))
	{
		MessageBox::Show("For Savings and Current Accounts , Opening balance should be above 500 Rs");

	}
	else if (textCustAdhar->Text->Length <= 11 || textCustAdhar->Text->Length >= 13)
	{
		MessageBox::Show("Invalid Adhar no");

	}
	else if (textCustContact->Text->Length <= 9 || textCustContact->Text->Length >= 11)
	{
		MessageBox::Show("Invalid contact number ");

	}
	else if (pictureBoxAdharImage->ImageLocation == nullptr)
	{
		MessageBox::Show("Please Upload an Image of Adhar Document");

	}
	else if (pictureBoxCudtImage->ImageLocation == nullptr)
	{
		MessageBox::Show("Please Upload Customer's Image ");

	}
	else if (pictureBoxSign->ImageLocation == nullptr)
	{
		MessageBox::Show("Please Upload Image of Customer's Sign ");

	}
	else if (thirdFlag)
	{
		secondFlag = true;
	}
	if (secondFlag)
	{
		try {

			String^ imgCust;
			String^ imgadhar;
			String^ imgsign;
			DateTime^ dt = DateTime::Now;
			String^ date;
			date = dt->ToLongDateString();
			imgCust = pictureBoxCudtImage->ImageLocation->ToString();
			imgadhar = pictureBoxAdharImage->ImageLocation->ToString();
			imgsign = pictureBoxSign->ImageLocation->ToString();
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into customers (name,address,contact,email,adharNo,regdate,pin,dateOfBirth,accountBalance,adharimage,signimage,customerimage,accountType,age)values('" + textCustName->Text + "','" + textCustAddress->Text + "','" + textCustContact->Text + "','" + textCustEmail->Text + "','" + textCustAdhar->Text + "','" + date + "'," + pin+ ",'" + dateOFBirthTimePicker->Text + "'," + openingBalance+ ",'" + imgadhar+ "','" + imgsign + "','" + imgCust + "','" + AccountType+ "'," + age+")", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			dr->Close();
			int accountNo;
			MySqlCommand^ cmd1 = gcnew MySqlCommand("select accountNo,adharNo,accountType from customers WHERE adharNo=" + textCustAdhar->Text, con);
			MySqlDataReader^ dr1;
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read())
			{
				if (textCustAdhar->Text == dr1->GetString(1) && AccountType==dr1->GetString(2))
				{
					accountNo = dr1->GetInt32(0);
					break;
				}
			}
			MessageBox::Show("Account Created For Customer="+textCustName->Text+"\nAccount Number="+accountNo);

			
			con->Close();
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
		}


	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ imgpath;

		FileDialog^ fd = gcnew OpenFileDialog();
		fd->Filter = "All supported graphics|*.jpg;*.jpeg;*.png|" +
			"JPEG (*.jpg;*.jpeg)|*.jpg;*.jpeg|" +
			"Portable Network Graphic (*.png)|*.png";
		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			imgpath = fd->FileName;
			pictureBoxCudtImage->ImageLocation = imgpath;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ imgpath;

		FileDialog^ fd = gcnew OpenFileDialog();
		fd->Filter = "All supported graphics|*.jpg;*.jpeg;*.png|" +
			"JPEG (*.jpg;*.jpeg)|*.jpg;*.jpeg|" +
			"Portable Network Graphic (*.png)|*.png";
		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			imgpath = fd->FileName;
			pictureBoxAdharImage->ImageLocation = imgpath;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ imgpath;

		FileDialog^ fd = gcnew OpenFileDialog();
		fd->Filter = "All supported graphics|*.jpg;*.jpeg;*.png|" +
			"JPEG (*.jpg;*.jpeg)|*.jpg;*.jpeg|" +
			"Portable Network Graphic (*.png)|*.png";
		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			imgpath = fd->FileName;
			pictureBoxSign->ImageLocation = imgpath;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
};
}
