#pragma once
#include "AccountHistory.h"
#include "AllTransactionHistory.h"
namespace BankMsVersionOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for TransactionHistory
	/// </summary>
	public ref class TransactionHistory : public System::Windows::Forms::Form
	{
	public:
		String^ AccountType;
		String^ custName;
		TransactionHistory(void)
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
		~TransactionHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panelInput;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textAccountNo;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButtonStudent;
	private: System::Windows::Forms::RadioButton^ radioButtonCurrent;
	private: System::Windows::Forms::RadioButton^ radioButtonSavings;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TransactionHistory::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelInput = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textAccountNo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonStudent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCurrent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSavings = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelInput->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->label3->Location = System::Drawing::Point(613, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(321, 40);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Transaction History";
			// 
			// panelInput
			// 
			this->panelInput->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelInput->Controls->Add(this->label4);
			this->panelInput->Controls->Add(this->button4);
			this->panelInput->Controls->Add(this->label1);
			this->panelInput->Controls->Add(this->textAccountNo);
			this->panelInput->Controls->Add(this->groupBox2);
			this->panelInput->Controls->Add(this->label2);
			this->panelInput->Location = System::Drawing::Point(109, 135);
			this->panelInput->Name = L"panelInput";
			this->panelInput->Size = System::Drawing::Size(615, 265);
			this->panelInput->TabIndex = 71;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(122, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(375, 40);
			this->label4->TabIndex = 72;
			this->label4->Text = L"Search For an Account";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(62, 214);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 37);
			this->button4->TabIndex = 64;
			this->button4->Text = L"Next";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TransactionHistory::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Account Number";
			// 
			// textAccountNo
			// 
			this->textAccountNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAccountNo->Location = System::Drawing::Point(329, 83);
			this->textAccountNo->Name = L"textAccountNo";
			this->textAccountNo->Size = System::Drawing::Size(224, 27);
			this->textAccountNo->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox2->Controls->Add(this->radioButtonStudent);
			this->groupBox2->Controls->Add(this->radioButtonCurrent);
			this->groupBox2->Controls->Add(this->radioButtonSavings);
			this->groupBox2->Location = System::Drawing::Point(332, 140);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(224, 100);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Account Type";
			// 
			// radioButtonStudent
			// 
			this->radioButtonStudent->AutoSize = true;
			this->radioButtonStudent->Location = System::Drawing::Point(107, 75);
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
			this->radioButtonCurrent->Location = System::Drawing::Point(107, 50);
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
			this->radioButtonSavings->Location = System::Drawing::Point(107, 23);
			this->radioButtonSavings->Name = L"radioButtonSavings";
			this->radioButtonSavings->Size = System::Drawing::Size(79, 21);
			this->radioButtonSavings->TabIndex = 0;
			this->radioButtonSavings->TabStop = true;
			this->radioButtonSavings->Text = L"Savings";
			this->radioButtonSavings->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Select Account Type";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(786, 135);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(630, 100);
			this->panel1->TabIndex = 72;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(141, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(373, 37);
			this->button1->TabIndex = 73;
			this->button1->Text = L"All Transaction\'s History";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TransactionHistory::button1_Click);
			// 
			// TransactionHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1518, 665);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelInput);
			this->Controls->Add(this->label3);
			this->DoubleBuffered = true;
			this->Name = L"TransactionHistory";
			this->Text = L"TransactionHistory";
			this->Load += gcnew System::EventHandler(this, &TransactionHistory::TransactionHistory_Load);
			this->panelInput->ResumeLayout(false);
			this->panelInput->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TransactionHistory_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	bool secondFlag = false;
	bool thirdFlag = false;
	String^ subfinalPath;
	String^ finalPath;

	int i;
	if (radioButtonSavings->Checked)
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
	if (textAccountNo->Text->Length == 0)
	{
		MessageBox::Show("Please Enter Account Number");

	}
	if (textAccountNo->Text->Length != 0 && (radioButtonCurrent->Checked || radioButtonSavings->Checked || radioButtonStudent))
	{
		try {
			String^ accountNo = textAccountNo->Text;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			bool flag = false;
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select accountNo,accountType,name from Customers", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (accountNo == dr->GetString(0) && dr->GetString(1)->Contains(AccountType))
				{

					flag = true;
					custName = dr->GetString(2);
					break;
				}
			}
			if (flag)
			{

				secondFlag = true;
			}
			else
			{
				secondFlag = false;
				
				MessageBox::Show("The " + AccountType + " Account With Account Number=" + accountNo + " \n Does Not Exists");


			}
			con->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	if (secondFlag)
	{
		//labelCustName->Text = CustName;
		BankMsVersionOne::AccountHistory^ ah = gcnew BankMsVersionOne::AccountHistory();
		ah->custName = custName;
		ah->accountNo =Int64::Parse( textAccountNo -> Text);
		ah->ShowDialog();

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::AllTransactionHistory^ ah = gcnew BankMsVersionOne::AllTransactionHistory();
	ah->ShowDialog();
}
};
}
