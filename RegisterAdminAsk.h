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
	/// Summary for RegisterAdminAsk
	/// </summary>
	public ref class RegisterAdminAsk : public System::Windows::Forms::Form
	{
	public:
		RegisterAdminAsk(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterAdminAsk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textAddress;
	private: System::Windows::Forms::TextBox^ textAdhar;
	private: System::Windows::Forms::TextBox^ textContact;
	private: System::Windows::Forms::TextBox^ textGmail;
	private: System::Windows::Forms::TextBox^ textUsername;
	private: System::Windows::Forms::TextBox^ textPass;
	private: System::Windows::Forms::TextBox^ textConfPass;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ regDate;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textFavWord;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterAdminAsk::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textAddress = (gcnew System::Windows::Forms::TextBox());
			this->textAdhar = (gcnew System::Windows::Forms::TextBox());
			this->textContact = (gcnew System::Windows::Forms::TextBox());
			this->textGmail = (gcnew System::Windows::Forms::TextBox());
			this->textUsername = (gcnew System::Windows::Forms::TextBox());
			this->textPass = (gcnew System::Windows::Forms::TextBox());
			this->textConfPass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->regDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textFavWord = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(657, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Admin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(516, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// textname
			// 
			this->textname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textname->Location = System::Drawing::Point(657, 141);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(244, 28);
			this->textname->TabIndex = 2;
			this->textname->TextChanged += gcnew System::EventHandler(this, &RegisterAdminAsk::textname_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(514, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(514, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Adhar No";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(514, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Gmail";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(514, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"contact";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(516, 360);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Username";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(516, 398);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 24);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Password";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(514, 438);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 24);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Confirm Pass";
			// 
			// textAddress
			// 
			this->textAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAddress->Location = System::Drawing::Point(657, 187);
			this->textAddress->Name = L"textAddress";
			this->textAddress->Size = System::Drawing::Size(244, 28);
			this->textAddress->TabIndex = 10;
			// 
			// textAdhar
			// 
			this->textAdhar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAdhar->Location = System::Drawing::Point(657, 232);
			this->textAdhar->Name = L"textAdhar";
			this->textAdhar->Size = System::Drawing::Size(244, 28);
			this->textAdhar->TabIndex = 11;
			// 
			// textContact
			// 
			this->textContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContact->Location = System::Drawing::Point(657, 275);
			this->textContact->Name = L"textContact";
			this->textContact->Size = System::Drawing::Size(244, 28);
			this->textContact->TabIndex = 12;
			// 
			// textGmail
			// 
			this->textGmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textGmail->Location = System::Drawing::Point(657, 317);
			this->textGmail->Name = L"textGmail";
			this->textGmail->Size = System::Drawing::Size(244, 28);
			this->textGmail->TabIndex = 13;
			// 
			// textUsername
			// 
			this->textUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsername->Location = System::Drawing::Point(657, 356);
			this->textUsername->Name = L"textUsername";
			this->textUsername->Size = System::Drawing::Size(244, 28);
			this->textUsername->TabIndex = 14;
			// 
			// textPass
			// 
			this->textPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPass->Location = System::Drawing::Point(657, 394);
			this->textPass->Name = L"textPass";
			this->textPass->PasswordChar = '*';
			this->textPass->Size = System::Drawing::Size(244, 28);
			this->textPass->TabIndex = 15;
			this->textPass->TextChanged += gcnew System::EventHandler(this, &RegisterAdminAsk::textPass_TextChanged);
			// 
			// textConfPass
			// 
			this->textConfPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textConfPass->Location = System::Drawing::Point(657, 434);
			this->textConfPass->Name = L"textConfPass";
			this->textConfPass->PasswordChar = '*';
			this->textConfPass->Size = System::Drawing::Size(244, 28);
			this->textConfPass->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(607, 527);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 29);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterAdminAsk::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->regDate);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Location = System::Drawing::Point(282, 562);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(840, 51);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Question 1";
			this->groupBox1->Visible = false;
			// 
			// regDate
			// 
			this->regDate->Location = System::Drawing::Point(393, 18);
			this->regDate->Name = L"regDate";
			this->regDate->Size = System::Drawing::Size(200, 22);
			this->regDate->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(84, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(273, 24);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Choose Your Favourite Date";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textFavWord);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(282, 634);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(840, 51);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Question 2";
			this->groupBox2->Visible = false;
			// 
			// textFavWord
			// 
			this->textFavWord->BackColor = System::Drawing::Color::White;
			this->textFavWord->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textFavWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textFavWord->Location = System::Drawing::Point(393, 15);
			this->textFavWord->Name = L"textFavWord";
			this->textFavWord->PasswordChar = '*';
			this->textFavWord->Size = System::Drawing::Size(244, 28);
			this->textFavWord->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(84, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(259, 24);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Enter Your Favourite Word";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(564, 712);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(284, 29);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterAdminAsk::button2_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate->ForeColor = System::Drawing::Color::White;
			this->labelDate->Location = System::Drawing::Point(1235, 41);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(118, 20);
			this->labelDate->TabIndex = 21;
			this->labelDate->Text = L"Current Date";
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->ForeColor = System::Drawing::Color::White;
			this->labelTime->Location = System::Drawing::Point(1269, 75);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(56, 20);
			this->labelTime->TabIndex = 22;
			this->labelTime->Text = L" Time";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &RegisterAdminAsk::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Location = System::Drawing::Point(487, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(461, 377);
			this->panel1->TabIndex = 23;
			// 
			// RegisterAdminAsk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1462, 809);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textConfPass);
			this->Controls->Add(this->textPass);
			this->Controls->Add(this->textUsername);
			this->Controls->Add(this->textGmail);
			this->Controls->Add(this->textContact);
			this->Controls->Add(this->textAdhar);
			this->Controls->Add(this->textAddress);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->Name = L"RegisterAdminAsk";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterAdminAsk";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textPass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool secondFlag = false;
	bool thirdFlag = false;
	if (textname->Text->Length != 0)
	{
		try {
			String^ uname = textUsername->Text;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			bool flag = false;
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select username from admin", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (uname == dr->GetString(0))
				{
			
					flag = true;
				}
			}
			if (flag)
			{
				MessageBox::Show("Username is not available");
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
	if (textname->TextLength == 0)
	{
		MessageBox::Show("Please Enter Name");
	}
	else if (textAddress->TextLength == 0)
	{
		MessageBox::Show("Please Enter Address");

	}
	else if (textAdhar->TextLength == 0)
	{
		MessageBox::Show("Please Enter Adhar Details ");

	}
	else if (textContact->TextLength == 0)
	{
		MessageBox::Show("Please Enter contact no");

	}
	else if (textGmail->TextLength == 0)
	{
		MessageBox::Show("Please Enter Email");

	}
	else if (textUsername->TextLength == 0)
	{
		MessageBox::Show("Please Enter Username");

	}
	else if (textPass->TextLength == 0)
	{
		MessageBox::Show("Please Enter Password");

	}
	else if (textConfPass->TextLength == 0)
	{
		MessageBox::Show("Please Confirm Password");

	} 
	else if (textPass->Text != textConfPass->Text)
	{
		MessageBox::Show("Password and Confirm Password does not match");

	}
	else if (!(textGmail->Text->Contains("@gmail.com")))
	{
		MessageBox::Show("Invalid Email");

	}
	else if (textAdhar->Text->Length<=11 || textAdhar->Text->Length>=13)
	{
		MessageBox::Show("Invalid Adhar no");

	}
	else if (textContact->Text->Length <=9 || textContact->Text->Length >= 11)
	{
		MessageBox::Show("Invalid contact number ");

	}
	else if (thirdFlag)
	{
		MessageBox::Show("Username is available");
		secondFlag = true;
	}
	if(secondFlag)
	{
		MessageBox::Show("Now Give answers of security questions");
		groupBox1->Visible = true;
		groupBox2->Visible = true;
		button2->Visible = true;
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if(textFavWord->Text->Length != 0)
	{
		try {
			DateTime^ dt = DateTime::Now;
			String^ date;
			date = dt->ToLongDateString();
			String^ sdate;
			sdate = regDate->Text;
			String^ Status;
			Status = "Active";
			String^ retdate;
			retdate = "not Retired";
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into admin (username,password,name,contact,adhar,gmail,sdate,sword,status,regdate,retdate)values('" + textUsername->Text + "','" + textPass->Text + "','" + textname->Text + "','" + textContact->Text + "','" + textAdhar->Text + "','" + textGmail->Text + "','" + sdate + "','" + textFavWord->Text + "','" + Status + "','" + date + "','" + retdate +"')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Registration Successful");
			con->Close();
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
		}
	}
	else
	{
		MessageBox::Show("Please Answer Security Question");

	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ dt = DateTime::Now;
	DateTime^ da = DateTime::Now;
	labelDate->Text = dt->ToLongDateString();
	labelTime->Text = da->ToLongTimeString();
	
}
};
}
