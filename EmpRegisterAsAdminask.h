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
	/// Summary for EmpRegisterAsAdminask
	/// </summary>
	public ref class EmpRegisterAsAdminask : public System::Windows::Forms::Form
	{
	public:
		EmpRegisterAsAdminask(void)
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
		~EmpRegisterAsAdminask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::TextBox^ textFavWord;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ regDate;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textConfPass;
	private: System::Windows::Forms::TextBox^ textPass;
	private: System::Windows::Forms::TextBox^ textUsername;
	private: System::Windows::Forms::TextBox^ textGmail;
	private: System::Windows::Forms::TextBox^ textContact;
	private: System::Windows::Forms::TextBox^ textAdhar;
	private: System::Windows::Forms::TextBox^ textAddress;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmpRegisterAsAdminask::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textFavWord = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->regDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textConfPass = (gcnew System::Windows::Forms::TextBox());
			this->textPass = (gcnew System::Windows::Forms::TextBox());
			this->textUsername = (gcnew System::Windows::Forms::TextBox());
			this->textGmail = (gcnew System::Windows::Forms::TextBox());
			this->textContact = (gcnew System::Windows::Forms::TextBox());
			this->textAdhar = (gcnew System::Windows::Forms::TextBox());
			this->textAddress = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textFavWord);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(243, 616);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(840, 51);
			this->groupBox2->TabIndex = 39;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->regDate);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Location = System::Drawing::Point(243, 544);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(840, 51);
			this->groupBox1->TabIndex = 38;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(548, 500);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 29);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EmpRegisterAsAdminask::button1_Click);
			// 
			// textConfPass
			// 
			this->textConfPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textConfPass->Location = System::Drawing::Point(407, 446);
			this->textConfPass->Name = L"textConfPass";
			this->textConfPass->PasswordChar = '*';
			this->textConfPass->Size = System::Drawing::Size(244, 27);
			this->textConfPass->TabIndex = 36;
			// 
			// textPass
			// 
			this->textPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPass->Location = System::Drawing::Point(407, 406);
			this->textPass->Name = L"textPass";
			this->textPass->PasswordChar = '*';
			this->textPass->Size = System::Drawing::Size(244, 27);
			this->textPass->TabIndex = 35;
			// 
			// textUsername
			// 
			this->textUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsername->Location = System::Drawing::Point(407, 368);
			this->textUsername->Name = L"textUsername";
			this->textUsername->Size = System::Drawing::Size(244, 27);
			this->textUsername->TabIndex = 34;
			// 
			// textGmail
			// 
			this->textGmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textGmail->Location = System::Drawing::Point(407, 329);
			this->textGmail->Name = L"textGmail";
			this->textGmail->Size = System::Drawing::Size(244, 27);
			this->textGmail->TabIndex = 33;
			// 
			// textContact
			// 
			this->textContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContact->Location = System::Drawing::Point(407, 287);
			this->textContact->Name = L"textContact";
			this->textContact->Size = System::Drawing::Size(244, 27);
			this->textContact->TabIndex = 32;
			// 
			// textAdhar
			// 
			this->textAdhar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAdhar->Location = System::Drawing::Point(407, 244);
			this->textAdhar->Name = L"textAdhar";
			this->textAdhar->Size = System::Drawing::Size(244, 27);
			this->textAdhar->TabIndex = 31;
			// 
			// textAddress
			// 
			this->textAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAddress->Location = System::Drawing::Point(407, 199);
			this->textAddress->Name = L"textAddress";
			this->textAddress->Size = System::Drawing::Size(244, 27);
			this->textAddress->TabIndex = 30;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(264, 450);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 20);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Confirm Pass";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(266, 410);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 20);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(266, 372);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 20);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(264, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 20);
			this->label6->TabIndex = 26;
			this->label6->Text = L"contact";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(264, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Gmail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(264, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Adhar No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(264, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Address";
			// 
			// textname
			// 
			this->textname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textname->Location = System::Drawing::Point(407, 153);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(244, 27);
			this->textname->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(266, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(504, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 29);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Add Employee As Admin";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(752, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 213);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(773, 388);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 29);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Browse Image";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EmpRegisterAsAdminask::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(548, 685);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 29);
			this->button3->TabIndex = 42;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &EmpRegisterAsAdminask::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(183, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 43;
			this->label12->Text = L"label12";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(822, 685);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 29);
			this->button4->TabIndex = 44;
			this->button4->Text = L"Get Employee ID";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &EmpRegisterAsAdminask::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Location = System::Drawing::Point(226, 126);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(877, 368);
			this->panel1->TabIndex = 45;
			// 
			// EmpRegisterAsAdminask
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1326, 768);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
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
			this->DoubleBuffered = true;
			this->Name = L"EmpRegisterAsAdminask";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EmpRegisterAsAdminask";
			this->Load += gcnew System::EventHandler(this, &EmpRegisterAsAdminask::EmpRegisterAsAdminask_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EmpRegisterAsAdminask_Load(System::Object^ sender, System::EventArgs^ e) {
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
				MySqlCommand^ cmd = gcnew MySqlCommand("select username from emp_admin", con);
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
		else if (textAdhar->Text->Length <= 11 || textAdhar->Text->Length >= 13)
		{
			MessageBox::Show("Invalid Adhar no");

		}
		else if (textContact->Text->Length <= 9 || textContact->Text->Length >= 11)
		{
			MessageBox::Show("Invalid contact number ");

		}
		else if (pictureBox1->ImageLocation == nullptr)
		{
			MessageBox::Show("Please Select Image of Employee");

		}
        else if (thirdFlag)
		{
			MessageBox::Show("Username is available");
			secondFlag = true;
		}
		if (secondFlag)
		{
			MessageBox::Show("Now Give answers of security questions");
			groupBox1->Visible = true;
			groupBox2->Visible = true;
			button3->Visible = true;
			button4->Visible = false;
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
			pictureBox1->ImageLocation = imgpath;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
  
	if (textFavWord->Text->Length != 0)
	{
		try {
			String^ imagepath;
			DateTime^ dt = DateTime::Now;
			String^ date;
			date = dt->ToLongDateString();
			String^ sdate;
			sdate = regDate->Text;
			String^ Status;
			Status = "Active";
			String^ retdate;
			retdate = "not Retired";
			String^ time;
			time = "No login";
			String^ lastLoginDate;
			lastLoginDate = "No login";
			imagepath = pictureBox1->ImageLocation->ToString();
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into emp_admin (username,password,name,contact,adharNo,email,sdate,sword,status,joiningDate,retdate,imagepath,lastLoginTime,lastLoginDate,address)values('" + textUsername->Text + "','" + textPass->Text + "','" + textname->Text + "','" + textContact->Text + "','" + textAdhar->Text + "','" + textGmail->Text + "','" + sdate + "','" + textFavWord->Text + "','" + Status + "','" + date + "','" + retdate + "','" + imagepath + "','" + time + "','" + lastLoginDate + "','" + textAddress->Text + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Registration Successful");
			button4->Visible = true;
			label12->Text = "1";
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label12->Text == "1")
	{
		try {

			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();
			int empid;
			MySqlCommand^ cmd = gcnew MySqlCommand("select id,adharNo from emp_admin WHERE adharNo=" + textAdhar->Text, con);
			MySqlDataReader^ dr;
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (textAdhar->Text == dr->GetString(1))
				{
					empid = dr->GetInt32(0);
					break;
				}
			}
			MessageBox::Show("Your Employee id is=" + empid);
			con->Close();
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
		}
	}
	else
	{
		MessageBox::Show("Please register Employee first");
	}
}
};
}
