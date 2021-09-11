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
	/// Summary for PasswordForgotAdminForm
	/// </summary>
	public ref class PasswordForgotAdminForm : public System::Windows::Forms::Form
	{
	public:
		String^ sdate;
		int empId;
	private: System::Windows::Forms::Panel^ panelResetPassword;
	public:

	public:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textConfirmPass;
	private: System::Windows::Forms::TextBox^ textNewPass;
		   String^ sword;
	public:
		PasswordForgotAdminForm(void)
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
		~PasswordForgotAdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textUsename;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panelSecurityQuestions;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textFavWord;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PasswordForgotAdminForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textUsename = (gcnew System::Windows::Forms::TextBox());
			this->panelSecurityQuestions = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textFavWord = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelResetPassword = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textConfirmPass = (gcnew System::Windows::Forms::TextBox());
			this->textNewPass = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panelSecurityQuestions->SuspendLayout();
			this->panelResetPassword->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(574, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 40);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Reset Password";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textUsename);
			this->panel1->Location = System::Drawing::Point(386, 129);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(726, 97);
			this->panel1->TabIndex = 67;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(42, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 37);
			this->button3->TabIndex = 69;
			this->button3->Text = L"Next";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &PasswordForgotAdminForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(42, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 27);
			this->label1->TabIndex = 68;
			this->label1->Text = L"Enter Username";
			// 
			// textUsename
			// 
			this->textUsename->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsename->Location = System::Drawing::Point(278, 3);
			this->textUsename->Name = L"textUsename";
			this->textUsename->Size = System::Drawing::Size(233, 30);
			this->textUsename->TabIndex = 0;
			// 
			// panelSecurityQuestions
			// 
			this->panelSecurityQuestions->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelSecurityQuestions->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelSecurityQuestions->Controls->Add(this->button1);
			this->panelSecurityQuestions->Controls->Add(this->label5);
			this->panelSecurityQuestions->Controls->Add(this->dateTimePicker1);
			this->panelSecurityQuestions->Controls->Add(this->textFavWord);
			this->panelSecurityQuestions->Controls->Add(this->label4);
			this->panelSecurityQuestions->Controls->Add(this->label2);
			this->panelSecurityQuestions->Location = System::Drawing::Point(386, 232);
			this->panelSecurityQuestions->Name = L"panelSecurityQuestions";
			this->panelSecurityQuestions->Size = System::Drawing::Size(726, 146);
			this->panelSecurityQuestions->TabIndex = 68;
			this->panelSecurityQuestions->Visible = false;
			this->panelSecurityQuestions->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PasswordForgotAdminForm::panel2_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(574, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 37);
			this->button1->TabIndex = 70;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PasswordForgotAdminForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(12, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(270, 27);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Enter Your Favourite Word";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(327, 51);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 72;
			// 
			// textFavWord
			// 
			this->textFavWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textFavWord->Location = System::Drawing::Point(327, 102);
			this->textFavWord->Name = L"textFavWord";
			this->textFavWord->PasswordChar = '*';
			this->textFavWord->Size = System::Drawing::Size(200, 30);
			this->textFavWord->TabIndex = 71;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(12, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(273, 27);
			this->label4->TabIndex = 71;
			this->label4->Text = L"Select Your Favourite Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(235, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(275, 27);
			this->label2->TabIndex = 70;
			this->label2->Text = L"Answer Security Questions";
			// 
			// panelResetPassword
			// 
			this->panelResetPassword->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelResetPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelResetPassword->Controls->Add(this->button2);
			this->panelResetPassword->Controls->Add(this->textConfirmPass);
			this->panelResetPassword->Controls->Add(this->textNewPass);
			this->panelResetPassword->Controls->Add(this->label8);
			this->panelResetPassword->Controls->Add(this->label7);
			this->panelResetPassword->Controls->Add(this->label6);
			this->panelResetPassword->Location = System::Drawing::Point(386, 384);
			this->panelResetPassword->Name = L"panelResetPassword";
			this->panelResetPassword->Size = System::Drawing::Size(726, 208);
			this->panelResetPassword->TabIndex = 69;
			this->panelResetPassword->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(282, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 37);
			this->button2->TabIndex = 74;
			this->button2->Text = L"Reset Password";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PasswordForgotAdminForm::button2_Click);
			// 
			// textConfirmPass
			// 
			this->textConfirmPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textConfirmPass->Location = System::Drawing::Point(343, 111);
			this->textConfirmPass->Name = L"textConfirmPass";
			this->textConfirmPass->PasswordChar = '*';
			this->textConfirmPass->Size = System::Drawing::Size(233, 30);
			this->textConfirmPass->TabIndex = 77;
			// 
			// textNewPass
			// 
			this->textNewPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textNewPass->Location = System::Drawing::Point(343, 58);
			this->textNewPass->Name = L"textNewPass";
			this->textNewPass->PasswordChar = '*';
			this->textNewPass->Size = System::Drawing::Size(233, 30);
			this->textNewPass->TabIndex = 76;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(31, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(237, 27);
			this->label8->TabIndex = 75;
			this->label8->Text = L"Confirm New Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(31, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 27);
			this->label7->TabIndex = 74;
			this->label7->Text = L"Enter New Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(282, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 27);
			this->label6->TabIndex = 74;
			this->label6->Text = L"Reset Password";
			// 
			// PasswordForgotAdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1496, 713);
			this->Controls->Add(this->panelResetPassword);
			this->Controls->Add(this->panelSecurityQuestions);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->DoubleBuffered = true;
			this->Name = L"PasswordForgotAdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PasswordForgotAdminForm";
			this->Load += gcnew System::EventHandler(this, &PasswordForgotAdminForm::PasswordForgotAdminForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelSecurityQuestions->ResumeLayout(false);
			this->panelSecurityQuestions->PerformLayout();
			this->panelResetPassword->ResumeLayout(false);
			this->panelResetPassword->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		bool flag = false;


		if (textUsename->Text->Length != 0)
		{
		
			try {
				
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd = gcnew MySqlCommand("select username,status,sword,sdate,id from emp_admin", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					if (textUsename->Text == dr->GetString(0) && dr->GetString(1)->Contains("Active"))
					{
						flag = true;
						sdate = dr->GetString(3);
						sword = dr->GetString(2);
						empId = dr->GetInt32(4);
						break;


					}
				}

				if (!flag)
				{
					panelSecurityQuestions->Visible = false;

					MessageBox::Show("Please Enter Valid Username and Status is Active");
				}

				con->Close();
			}
			catch (Exception^ x)
			{
				MessageBox::Show(x->Message);
			}


		}
		else
		{
			MessageBox::Show("Please Enter Username");
		}
		if (flag)
		{
			panelSecurityQuestions->Visible = true;
			
		}
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textFavWord->Text->Length != 0)
	{
		if (!(dateTimePicker1->Text == sdate))
		{
			MessageBox::Show("Invalid Answer For Security Date");
		}
		else if (!(textFavWord->Text == sword))
		{
			MessageBox::Show("Invalid Answer For Security Word");
		}
		else
		{
			panelResetPassword->Visible = true;
		}
	}
	else
	{
		MessageBox::Show("Please Enter Security Word");
	}

}
private: System::Void PasswordForgotAdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textNewPass->Text == textConfirmPass->Text)
	{

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("update emp_admin set password='" +textNewPass->Text + "' WHERE id=" + empId, con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			MessageBox::Show("Password Updated");
			con->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);

		}
	}
	else
	{
		MessageBox::Show("Password And Confirm Password Does not match");
	}
}
};
}
