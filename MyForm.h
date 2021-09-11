#pragma once
#include "AdminDetails.h"
#include "DashboardAdmin.h"
#include "DashboardEmpAdmin.h"
#include "MoneyWithdrawForm.h"
#include "PasswordForgotAdminForm.h"
#include "MainAdminPasswordForgot.h"
namespace BankMsVersionOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textusername;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textPass;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textEmpUsername;
	private: System::Windows::Forms::TextBox^ textEpmPass;
	private: System::Windows::Forms::Label^ label5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textusername = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textPass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textEmpUsername = (gcnew System::Windows::Forms::TextBox());
			this->textEpmPass = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textusername
			// 
			this->textusername->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textusername->Location = System::Drawing::Point(1112, 204);
			this->textusername->Name = L"textusername";
			this->textusername->Size = System::Drawing::Size(175, 24);
			this->textusername->TabIndex = 0;
			this->textusername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(962, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(965, 266);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textPass
			// 
			this->textPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPass->Location = System::Drawing::Point(1112, 264);
			this->textPass->Name = L"textPass";
			this->textPass->PasswordChar = '*';
			this->textPass->Size = System::Drawing::Size(175, 24);
			this->textPass->TabIndex = 3;
			this->textPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(966, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1050, 727);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Admin Details";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(1112, 314);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(220, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Forgot Password \?";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(966, 631);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 30);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Login";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(1112, 631);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(190, 30);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Forgot Password \?";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(965, 581);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(962, 525);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Username";
			// 
			// textEmpUsername
			// 
			this->textEmpUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmpUsername->Location = System::Drawing::Point(1112, 521);
			this->textEmpUsername->Name = L"textEmpUsername";
			this->textEmpUsername->Size = System::Drawing::Size(145, 24);
			this->textEmpUsername->TabIndex = 9;
			this->textEmpUsername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textEpmPass
			// 
			this->textEpmPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEpmPass->Location = System::Drawing::Point(1112, 577);
			this->textEpmPass->Name = L"textEpmPass";
			this->textEpmPass->PasswordChar = '*';
			this->textEpmPass->Size = System::Drawing::Size(145, 24);
			this->textEpmPass->TabIndex = 12;
			this->textEpmPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(93, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(607, 27);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Project Name: Bank Management System using visual C++";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1462, 809);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textEpmPass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textEmpUsername);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textPass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textusername);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home Page";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			bool flag = true;
			MySqlCommand^ cmd = gcnew MySqlCommand("select username,password from admin", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (textusername->Text == dr->GetString(0) && textPass->Text==dr->GetString(1))
				{

					MessageBox::Show("Login Successfull");
					BankMsVersionOne::DashboardAdmin^ dashboardObj = gcnew BankMsVersionOne::DashboardAdmin();
					this->Hide();
					dashboardObj->ShowDialog();
					flag = false;
				}
			}
			if (flag)
			{
				MessageBox::Show("Please check Username or Password");
				
			}
		
			con->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::AdminDetails^ adminDeatailsObj = gcnew  BankMsVersionOne::AdminDetails();
	adminDeatailsObj->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		bool flag = true;
		String^ ldate;
		String^ ltime;
		//String^ status;
		MySqlCommand^ cmd = gcnew MySqlCommand("select username,password,status,id,name from emp_admin", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			if (textEmpUsername->Text == dr->GetString(0) && textEpmPass->Text == dr->GetString(1) && dr->GetString(2)->Contains("Active"))
			{

				MessageBox::Show("Login Successfull");
				try {
					DateTime^ dt = DateTime::Now;
					DateTime^ da = DateTime::Now;
					ldate = dt->ToLongDateString();
					ltime= da->ToLongTimeString();
					String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
					MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
					MySqlCommand^ cmd1 = gcnew MySqlCommand("update emp_admin set lastLoginTime='" + ltime + "',lastLoginDate='" + ldate +"' WHERE username='" + textEmpUsername->Text+"'", con1);
					con1->Open();
					MySqlDataReader^ dr1 = cmd1->ExecuteReader();
					con1->Close();
					
				}
				catch (Exception^ e)
				{
					MessageBox::Show(e->Message);

				}
				BankMsVersionOne::MoneyWithdrawForm^ mobj = gcnew BankMsVersionOne::MoneyWithdrawForm();
				mobj->Eid = dr->GetInt32(3);
				mobj->Ename = dr->GetString(4);


				BankMsVersionOne::DashboardEmpAdmin^ dashboardObj = gcnew BankMsVersionOne::DashboardEmpAdmin();
				
				this->Hide();
				dashboardObj->EmpId = dr->GetInt32(3);
				dashboardObj->EmpName = dr->GetString(4);
				

				dashboardObj->ShowDialog();
				flag = false;
			}
			
		}
		if (flag)
		{
			MessageBox::Show("Please check Username or Password");

		}

		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

      

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::PasswordForgotAdminForm^ fs = gcnew    BankMsVersionOne::PasswordForgotAdminForm();
	fs->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::MainAdminPasswordForgot^ ms = gcnew BankMsVersionOne::MainAdminPasswordForgot();
	ms->ShowDialog();


}
};
}
