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
	/// Summary for BalanceEnquiryForm
	/// </summary>
	public ref class BalanceEnquiryForm : public System::Windows::Forms::Form
	{
	public:
		String^ AccountType;
		String^ custName;
	private: System::Windows::Forms::Panel^ panelBalance;
	public:

	public:
	private: System::Windows::Forms::TextBox^ textBalance;
	private: System::Windows::Forms::TextBox^ textCustName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
		   long int databalance;
	public:
		BalanceEnquiryForm(void)
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
		~BalanceEnquiryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelInput;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textAccountNo;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButtonStudent;
	private: System::Windows::Forms::RadioButton^ radioButtonCurrent;
	private: System::Windows::Forms::RadioButton^ radioButtonSavings;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BalanceEnquiryForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelInput = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textAccountNo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonStudent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCurrent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSavings = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelBalance = (gcnew System::Windows::Forms::Panel());
			this->textBalance = (gcnew System::Windows::Forms::TextBox());
			this->textCustName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelInput->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panelBalance->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(588, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Balance Enquiry";
			// 
			// panelInput
			// 
			this->panelInput->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelInput->Controls->Add(this->button4);
			this->panelInput->Controls->Add(this->label2);
			this->panelInput->Controls->Add(this->textAccountNo);
			this->panelInput->Controls->Add(this->groupBox2);
			this->panelInput->Controls->Add(this->label3);
			this->panelInput->Location = System::Drawing::Point(118, 129);
			this->panelInput->Name = L"panelInput";
			this->panelInput->Size = System::Drawing::Size(526, 234);
			this->panelInput->TabIndex = 70;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(18, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 37);
			this->button4->TabIndex = 64;
			this->button4->Text = L"Check Balance";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BalanceEnquiryForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(229, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter Account Number";
			// 
			// textAccountNo
			// 
			this->textAccountNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAccountNo->Location = System::Drawing::Point(285, 13);
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
			this->groupBox2->Location = System::Drawing::Point(288, 70);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Select Account Type";
			// 
			// panelBalance
			// 
			this->panelBalance->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelBalance->Controls->Add(this->textBalance);
			this->panelBalance->Controls->Add(this->textCustName);
			this->panelBalance->Controls->Add(this->label5);
			this->panelBalance->Controls->Add(this->label4);
			this->panelBalance->Location = System::Drawing::Point(722, 129);
			this->panelBalance->Name = L"panelBalance";
			this->panelBalance->Size = System::Drawing::Size(622, 234);
			this->panelBalance->TabIndex = 71;
			this->panelBalance->Visible = false;
			// 
			// textBalance
			// 
			this->textBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBalance->Location = System::Drawing::Point(265, 71);
			this->textBalance->Name = L"textBalance";
			this->textBalance->ReadOnly = true;
			this->textBalance->Size = System::Drawing::Size(330, 27);
			this->textBalance->TabIndex = 74;
			// 
			// textCustName
			// 
			this->textCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustName->Location = System::Drawing::Point(265, 13);
			this->textCustName->Name = L"textCustName";
			this->textCustName->ReadOnly = true;
			this->textCustName->Size = System::Drawing::Size(330, 27);
			this->textCustName->TabIndex = 65;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(19, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 29);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Balance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(19, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 29);
			this->label4->TabIndex = 72;
			this->label4->Text = L"Customer Name: ";
			// 
			// BalanceEnquiryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1527, 668);
			this->Controls->Add(this->panelBalance);
			this->Controls->Add(this->panelInput);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"BalanceEnquiryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BalanceEnquiryForm";
			this->panelInput->ResumeLayout(false);
			this->panelInput->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panelBalance->ResumeLayout(false);
			this->panelBalance->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		bool secondFlag = false;
		bool thirdFlag = false;
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
				MySqlCommand^ cmd = gcnew MySqlCommand("select accountNo,accountType,accountBalance,name from Customers", con);
				con->Open();
				MySqlDataReader^ dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					if (accountNo == dr->GetString(0) && dr->GetString(1)->Contains(AccountType))
					{

						flag = true;
						databalance = dr->GetInt64(2);
						custName = dr->GetString(3);
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
					panelBalance->Visible = false;

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
			textCustName->Text = custName;
			textBalance->Text = databalance+".00 Rs";
			panelBalance->Visible = true;
		}
	}
};
}
