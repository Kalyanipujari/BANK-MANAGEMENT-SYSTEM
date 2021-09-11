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
	/// Summary for RegisterEmployee
	/// </summary>
	public ref class RegisterEmployee : public System::Windows::Forms::Form
	{
	public:
		RegisterEmployee(void)
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
		~RegisterEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textEmpName;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textAdhar;
	private: System::Windows::Forms::TextBox^ textContact;
	private: System::Windows::Forms::TextBox^ textEmpAddress;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ labelflag;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterEmployee::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textEmpName = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textAdhar = (gcnew System::Windows::Forms::TextBox());
			this->textContact = (gcnew System::Windows::Forms::TextBox());
			this->textEmpAddress = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelflag = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(489, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Employee";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(218, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(218, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(218, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Contact No";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterEmployee::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(218, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(218, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Adhar No";
			// 
			// textEmpName
			// 
			this->textEmpName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmpName->Location = System::Drawing::Point(398, 157);
			this->textEmpName->Name = L"textEmpName";
			this->textEmpName->Size = System::Drawing::Size(228, 30);
			this->textEmpName->TabIndex = 6;
			// 
			// textEmail
			// 
			this->textEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmail->Location = System::Drawing::Point(398, 322);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(228, 30);
			this->textEmail->TabIndex = 7;
			// 
			// textAdhar
			// 
			this->textAdhar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAdhar->Location = System::Drawing::Point(398, 369);
			this->textAdhar->Name = L"textAdhar";
			this->textAdhar->Size = System::Drawing::Size(228, 30);
			this->textAdhar->TabIndex = 8;
			// 
			// textContact
			// 
			this->textContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContact->Location = System::Drawing::Point(398, 274);
			this->textContact->Name = L"textContact";
			this->textContact->Size = System::Drawing::Size(228, 30);
			this->textContact->TabIndex = 9;
			// 
			// textEmpAddress
			// 
			this->textEmpAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmpAddress->Location = System::Drawing::Point(398, 219);
			this->textEmpAddress->Name = L"textEmpAddress";
			this->textEmpAddress->Size = System::Drawing::Size(228, 30);
			this->textEmpAddress->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(322, 493);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterEmployee::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(742, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(219, 209);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(791, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 30);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Browse Image";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterEmployee::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(495, 493);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 36);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Get Employee ID";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RegisterEmployee::button3_Click);
			// 
			// labelflag
			// 
			this->labelflag->AutoSize = true;
			this->labelflag->BackColor = System::Drawing::Color::Transparent;
			this->labelflag->Location = System::Drawing::Point(102, 41);
			this->labelflag->Name = L"labelflag";
			this->labelflag->Size = System::Drawing::Size(46, 17);
			this->labelflag->TabIndex = 15;
			this->labelflag->Text = L"label7";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(149, 116);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 356);
			this->panel1->TabIndex = 16;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Location = System::Drawing::Point(655, 116);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(379, 356);
			this->panel2->TabIndex = 17;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->Location = System::Drawing::Point(208, 362);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(379, 97);
			this->panel3->TabIndex = 18;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel4->Location = System::Drawing::Point(149, 478);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(885, 131);
			this->panel4->TabIndex = 18;
			// 
			// RegisterEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1178, 681);
			this->Controls->Add(this->labelflag);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textEmpAddress);
			this->Controls->Add(this->textContact);
			this->Controls->Add(this->textAdhar);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->textEmpName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->DoubleBuffered = true;
			this->Name = L"RegisterEmployee";
			this->Text = L"RegisterEmployee";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ imagepath = "";
		bool thirdflag = false;
		bool SecondFlag = false;
		

	    



		if (textAdhar->Text->Length != 0)
		{

			try {
				bool flag = false;

				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd = gcnew MySqlCommand("select adharNo from employees", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					if (textAdhar->Text == dr->GetString(0))
					{
						MessageBox::Show("Employee With This Adhar Number Already Exists");
						flag =true;
						break;
						

					}
				}
				
				if (flag)
				{
					SecondFlag = false;
					
				}
				else
				{
					thirdflag= true;
					
				}
				con->Close();
			}
			catch (Exception^ x)
			{
				MessageBox::Show(x->Message);
			}


		}
			if (textEmpName->Text->Length == 0)
			{
				MessageBox::Show("Please Enter Name");
			}
			else if (textAdhar->Text->Length == 0)
			{
				MessageBox::Show("Please Enter Adhar number");

			}
			else if (textContact->Text->Length == 0)
			{
				MessageBox::Show("Please Enter Contact No");

			}
			else if (textEmpAddress->Text->Length == 0)
			{
				MessageBox::Show("Please Enter Address");

			}
			else if (textEmail->Text->Length == 0)
			{
				MessageBox::Show("Please Enter Email");

			}
			else if (!(textEmail->Text->EndsWith("@gmail.com")))
			{
				MessageBox::Show("Invalid Email");

			}
			else if (textAdhar->Text->Length <= 11 || textAdhar->Text->Length >= 13)
			{
				MessageBox::Show("Invalid Adhar No");

			}
			else if (textContact->Text->Length <= 9 || textContact->Text->Length >= 11)
			{
				MessageBox::Show("Invalid Contact No");

			}
			else if (pictureBox1->ImageLocation == nullptr)
			{
				MessageBox::Show("Please Select Image of Employee");

			}
			else if (thirdflag)
			{
				SecondFlag = true;
			}
			if (SecondFlag)
			{

				try {
					DateTime^ dt = DateTime::Now;
					String^ date;
					date = dt->ToLongDateString();
					imagepath = pictureBox1->ImageLocation->ToString();
					String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
					MySqlConnection^ con = gcnew MySqlConnection(constr);
					MySqlCommand^ cmd = gcnew MySqlCommand("insert into employees (name,address,contact,email,adharNo,joiningDate,imgpath)values('" + textEmpName->Text + "','" + textEmpAddress->Text + "','" + textContact->Text + "','" + textEmail->Text + "','" + textAdhar->Text + "','" + date + "','" + imagepath + "')", con);
					MySqlDataReader^ dr;
					con->Open();
					dr = cmd->ExecuteReader();
					MessageBox::Show("Registration Successful");
					con->Close();
					labelflag->Text = "1";
				}
				catch (Exception^ x)
				{
					MessageBox::Show(x->Message);
				}
			}

		
		 
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//pictureBox1->ImageLocation = "C:UsersDellPicturesplace2.jpg";
	if (labelflag->Text == "1")
	{
		try {

			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();
			int empid;
			MySqlCommand^ cmd = gcnew MySqlCommand("select id,adharNo from employees WHERE adharNo=" + textAdhar->Text, con);
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
			MessageBox::Show("Registration Successful\n Your Employee id is=" + empid);
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
