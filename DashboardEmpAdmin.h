#pragma once
#include "AddCustomerForm.h"
#include "ListOfCustomers.h"
#include "MoneyWithdrawForm.h"
#include "DepositMoney.h"
#include "TransactionHistory.h"
#include "BalanceEnquiryForm.h"
#include "AmountTransferForm.h"
namespace BankMsVersionOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for DashboardEmpAdmin
	/// </summary>
	public ref class DashboardEmpAdmin : public System::Windows::Forms::Form
	{
	public:
		String^ EmpName;
	private: System::Windows::Forms::Label^ labelEmpId;
	private: System::Windows::Forms::Label^ labelEmpName;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;
	public:

	public:

		   int EmpId;
		DashboardEmpAdmin(void)
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
		~DashboardEmpAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Label^ labelCustCount;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lTime;
	private: System::Windows::Forms::Label^ lDate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelBalance;

	private: System::Windows::Forms::Panel^ panelManageCustomers;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBoxCustImage;


	private: System::Windows::Forms::TextBox^ textJDate;
	private: System::Windows::Forms::Label^ label8;
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
	private: System::Windows::Forms::TextBox^ textCustAccountNo;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ labelTotalAmount;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textSearchCust;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textDateOfBirth;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textAccountType;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textCustAge;

	private: System::Windows::Forms::Label^ label12;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardEmpAdmin::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelCustCount = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lTime = (gcnew System::Windows::Forms::Label());
			this->lDate = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelBalance = (gcnew System::Windows::Forms::Label());
			this->panelManageCustomers = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textCustAge = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textAccountType = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCustImage = (gcnew System::Windows::Forms::PictureBox());
			this->textJDate = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->textCustAccountNo = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTotalAmount = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textSearchCust = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->labelEmpId = (gcnew System::Windows::Forms::Label());
			this->labelEmpName = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelManageCustomers->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCustImage))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(826, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 37);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Total Amount In Bank";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button2_Click);
			// 
			// labelCustCount
			// 
			this->labelCustCount->AutoSize = true;
			this->labelCustCount->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelCustCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustCount->ForeColor = System::Drawing::Color::White;
			this->labelCustCount->Location = System::Drawing::Point(1042, 90);
			this->labelCustCount->Name = L"labelCustCount";
			this->labelCustCount->Size = System::Drawing::Size(60, 25);
			this->labelCustCount->TabIndex = 12;
			this->labelCustCount->Text = L"count";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(826, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Total Customers";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button1_Click);
			// 
			// lTime
			// 
			this->lTime->AutoSize = true;
			this->lTime->BackColor = System::Drawing::Color::Transparent;
			this->lTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTime->ForeColor = System::Drawing::Color::White;
			this->lTime->Location = System::Drawing::Point(1294, 72);
			this->lTime->Name = L"lTime";
			this->lTime->Size = System::Drawing::Size(97, 17);
			this->lTime->TabIndex = 10;
			this->lTime->Text = L"Current time";
			// 
			// lDate
			// 
			this->lDate->AutoSize = true;
			this->lDate->BackColor = System::Drawing::Color::Transparent;
			this->lDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lDate->ForeColor = System::Drawing::Color::White;
			this->lDate->Location = System::Drawing::Point(1272, 43);
			this->lDate->Name = L"lDate";
			this->lDate->Size = System::Drawing::Size(104, 18);
			this->lDate->TabIndex = 9;
			this->lDate->Text = L"Current Date";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(105, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 38);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Admin Dashboard";
			// 
			// labelBalance
			// 
			this->labelBalance->AutoSize = true;
			this->labelBalance->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBalance->ForeColor = System::Drawing::Color::White;
			this->labelBalance->Location = System::Drawing::Point(1042, 36);
			this->labelBalance->Name = L"labelBalance";
			this->labelBalance->Size = System::Drawing::Size(129, 25);
			this->labelBalance->TabIndex = 14;
			this->labelBalance->Text = L"Total Amount";
			// 
			// panelManageCustomers
			// 
			this->panelManageCustomers->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelManageCustomers->Controls->Add(this->button12);
			this->panelManageCustomers->Controls->Add(this->groupBox1);
			this->panelManageCustomers->Controls->Add(this->button8);
			this->panelManageCustomers->Controls->Add(this->label9);
			this->panelManageCustomers->Controls->Add(this->textSearchCust);
			this->panelManageCustomers->Controls->Add(this->button7);
			this->panelManageCustomers->Location = System::Drawing::Point(457, 144);
			this->panelManageCustomers->Name = L"panelManageCustomers";
			this->panelManageCustomers->Size = System::Drawing::Size(901, 644);
			this->panelManageCustomers->TabIndex = 15;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(416, 64);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(229, 37);
			this->button12->TabIndex = 18;
			this->button12->Text = L"List Of All Customers";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button12_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textCustAge);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textDateOfBirth);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textAccountType);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->pictureBoxCustImage);
			this->groupBox1->Controls->Add(this->textJDate);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textCustAdhar);
			this->groupBox1->Controls->Add(this->textCustEmail);
			this->groupBox1->Controls->Add(this->textCustContact);
			this->groupBox1->Controls->Add(this->textCustAddress);
			this->groupBox1->Controls->Add(this->textCustName);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textCustAccountNo);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->labelTotalAmount);
			this->groupBox1->Location = System::Drawing::Point(12, 98);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(872, 542);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Employee Details";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DashboardEmpAdmin::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(615, 375);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 20);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Customer\'s Image";
			// 
			// textCustAge
			// 
			this->textCustAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAge->Location = System::Drawing::Point(225, 265);
			this->textCustAge->Name = L"textCustAge";
			this->textCustAge->Size = System::Drawing::Size(274, 27);
			this->textCustAge->TabIndex = 35;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(77, 265);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 20);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Age";
			// 
			// textDateOfBirth
			// 
			this->textDateOfBirth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDateOfBirth->Location = System::Drawing::Point(225, 165);
			this->textDateOfBirth->Name = L"textDateOfBirth";
			this->textDateOfBirth->Size = System::Drawing::Size(274, 27);
			this->textDateOfBirth->TabIndex = 33;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(75, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 20);
			this->label11->TabIndex = 32;
			this->label11->Text = L"DateOfBirth";
			// 
			// textAccountType
			// 
			this->textAccountType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAccountType->Location = System::Drawing::Point(225, 84);
			this->textAccountType->Name = L"textAccountType";
			this->textAccountType->ReadOnly = true;
			this->textAccountType->Size = System::Drawing::Size(274, 27);
			this->textAccountType->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(76, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 20);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Account Type";
			// 
			// pictureBoxCustImage
			// 
			this->pictureBoxCustImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxCustImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxCustImage->Location = System::Drawing::Point(546, 56);
			this->pictureBoxCustImage->Name = L"pictureBoxCustImage";
			this->pictureBoxCustImage->Size = System::Drawing::Size(297, 316);
			this->pictureBoxCustImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxCustImage->TabIndex = 29;
			this->pictureBoxCustImage->TabStop = false;
			// 
			// textJDate
			// 
			this->textJDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textJDate->Location = System::Drawing::Point(239, 449);
			this->textJDate->Name = L"textJDate";
			this->textJDate->ReadOnly = true;
			this->textJDate->Size = System::Drawing::Size(260, 27);
			this->textJDate->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(76, 449);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 20);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Registration Date";
			this->label8->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::label8_Click);
			// 
			// textCustAdhar
			// 
			this->textCustAdhar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAdhar->Location = System::Drawing::Point(225, 404);
			this->textCustAdhar->Name = L"textCustAdhar";
			this->textCustAdhar->Size = System::Drawing::Size(274, 27);
			this->textCustAdhar->TabIndex = 26;
			// 
			// textCustEmail
			// 
			this->textCustEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustEmail->Location = System::Drawing::Point(225, 354);
			this->textCustEmail->Name = L"textCustEmail";
			this->textCustEmail->Size = System::Drawing::Size(274, 27);
			this->textCustEmail->TabIndex = 25;
			// 
			// textCustContact
			// 
			this->textCustContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustContact->Location = System::Drawing::Point(225, 311);
			this->textCustContact->Name = L"textCustContact";
			this->textCustContact->Size = System::Drawing::Size(274, 27);
			this->textCustContact->TabIndex = 24;
			// 
			// textCustAddress
			// 
			this->textCustAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAddress->Location = System::Drawing::Point(225, 213);
			this->textCustAddress->Name = L"textCustAddress";
			this->textCustAddress->Size = System::Drawing::Size(274, 27);
			this->textCustAddress->TabIndex = 23;
			// 
			// textCustName
			// 
			this->textCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustName->Location = System::Drawing::Point(225, 127);
			this->textCustName->Name = L"textCustName";
			this->textCustName->Size = System::Drawing::Size(274, 27);
			this->textCustName->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(77, 404);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Adhar No";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(77, 354);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(75, 311);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Contact No";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(76, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(77, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Name";
			// 
			// textCustAccountNo
			// 
			this->textCustAccountNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCustAccountNo->Location = System::Drawing::Point(225, 40);
			this->textCustAccountNo->Name = L"textCustAccountNo";
			this->textCustAccountNo->ReadOnly = true;
			this->textCustAccountNo->Size = System::Drawing::Size(274, 27);
			this->textCustAccountNo->TabIndex = 16;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(278, 499);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(191, 37);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Update Details";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(492, 499);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(191, 37);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Delete Account";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button10_Click);
			// 
			// labelTotalAmount
			// 
			this->labelTotalAmount->AutoSize = true;
			this->labelTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotalAmount->ForeColor = System::Drawing::Color::Black;
			this->labelTotalAmount->Location = System::Drawing::Point(76, 40);
			this->labelTotalAmount->Name = L"labelTotalAmount";
			this->labelTotalAmount->Size = System::Drawing::Size(106, 20);
			this->labelTotalAmount->TabIndex = 8;
			this->labelTotalAmount->Text = L"Account No";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(166, 64);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(191, 37);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Add Customer";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(190, 2);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(384, 17);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Enter Account Number of Customer To be Searched";
			// 
			// textSearchCust
			// 
			this->textSearchCust->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textSearchCust->Location = System::Drawing::Point(166, 22);
			this->textSearchCust->Name = L"textSearchCust";
			this->textSearchCust->Size = System::Drawing::Size(431, 27);
			this->textSearchCust->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(652, 17);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(191, 37);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Search Customer";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button7_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(136, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 37);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Manage Customers";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(136, 332);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(191, 37);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Deposit Money";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(136, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(191, 37);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Withdraw Money";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(136, 464);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(191, 37);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Balance Enquiry";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button6_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(136, 527);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(191, 37);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Transaction History";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button11_Click);
			// 
			// labelEmpId
			// 
			this->labelEmpId->AutoSize = true;
			this->labelEmpId->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelEmpId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmpId->ForeColor = System::Drawing::Color::White;
			this->labelEmpId->Location = System::Drawing::Point(472, 43);
			this->labelEmpId->Name = L"labelEmpId";
			this->labelEmpId->Size = System::Drawing::Size(88, 25);
			this->labelEmpId->TabIndex = 21;
			this->labelEmpId->Text = L"Emp ID=";
			// 
			// labelEmpName
			// 
			this->labelEmpName->AutoSize = true;
			this->labelEmpName->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelEmpName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmpName->ForeColor = System::Drawing::Color::White;
			this->labelEmpName->Location = System::Drawing::Point(472, 102);
			this->labelEmpName->Name = L"labelEmpName";
			this->labelEmpName->Size = System::Drawing::Size(115, 25);
			this->labelEmpName->TabIndex = 22;
			this->labelEmpName->Text = L"Emp Name:";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(136, 399);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(191, 37);
			this->button13->TabIndex = 23;
			this->button13->Text = L"Transfer Money";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &DashboardEmpAdmin::button13_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &DashboardEmpAdmin::timer1_Tick);
			// 
			// DashboardEmpAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1453, 851);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->labelEmpName);
			this->Controls->Add(this->labelEmpId);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panelManageCustomers);
			this->Controls->Add(this->labelBalance);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelCustCount);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lTime);
			this->Controls->Add(this->lDate);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"DashboardEmpAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardEmpAdmin";
			this->Load += gcnew System::EventHandler(this, &DashboardEmpAdmin::DashboardEmpAdmin_Load);
			this->panelManageCustomers->ResumeLayout(false);
			this->panelManageCustomers->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCustImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		BankMsVersionOne::AddCustomerForm^ obj = gcnew BankMsVersionOne::AddCustomerForm();
		obj->ShowDialog();
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textSearchCust->Text->Length != 0)
	{
		String^ ipath;
		String^ imagepath;
		String^ finalpath;
		int l;
		try {
			bool flag = false;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from customers WHERE accountNo=" + textSearchCust->Text, con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (textSearchCust->Text == dr->GetString(0))
				{
					flag = true;
					textCustAccountNo->Text = "" + dr->GetInt32(0);
					textCustName->Text = dr->GetString(1);
					textCustAddress->Text = dr->GetString(2);
					textCustContact->Text = dr->GetString(3);
					textCustEmail->Text = dr->GetString(4);
					textCustAdhar->Text = dr->GetString(5);
					textJDate->Text = dr->GetString(6);
					textDateOfBirth->Text = dr->GetString(8);
					textAccountType->Text = dr->GetString(13);
					textCustAge->Text = dr->GetString(14);
					ipath = dr->GetString(12);
					l = ipath->IndexOf('-');
					imagepath = ipath->Substring(l + 1);
					finalpath = "E:\\images-\\" + imagepath;
				    pictureBoxCustImage->ImageLocation = finalpath;
					break;


				}
			}

			if (!flag)
			{

				MessageBox::Show("This Account Does not exists");
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
		MessageBox::Show("Please Enter Account Number to search");
	}
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::ListOfCustomers^ obj = gcnew BankMsVersionOne::ListOfCustomers();
	obj->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int accountNo = Int32::Parse(textCustAccountNo->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("update customers set name='" + textCustName->Text + "',address='" + textCustAddress->Text + "',contact='" + textCustContact->Text+"',age="+Int32::Parse( textCustAge->Text )+ ",email='" + textCustEmail->Text + "',adharNo='" + textCustAdhar->Text + "' WHERE accountNo=" + accountNo, con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Account details are Updated");
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);

	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int accountNo = Int32::Parse(textCustAccountNo->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from customers WHERE accountNo=" + accountNo + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Customer With Account Number=" + accountNo + " is deleted");
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	BankMsVersionOne::MoneyWithdrawForm^ obj = gcnew 	BankMsVersionOne::MoneyWithdrawForm();
	obj->ShowDialog();
}
private: System::Void DashboardEmpAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	
	labelEmpId->Text ="Your ID: " +EmpId + "";
	labelEmpName->Text = "Your Name: "+EmpName;

	

	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::DepositMoney^ dm = gcnew BankMsVersionOne::DepositMoney();
	dm->ShowDialog();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::TransactionHistory^ th = gcnew BankMsVersionOne::TransactionHistory();
	th->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::BalanceEnquiryForm^ bf = gcnew BankMsVersionOne::BalanceEnquiryForm();
	bf->ShowDialog();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::AmountTransferForm^ at = gcnew BankMsVersionOne::AmountTransferForm();
	at->ShowDialog();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ dt = DateTime::Now;
	DateTime^ da = DateTime::Now;
	lDate->Text = dt->ToLongDateString();
	lTime->Text = da->ToLongTimeString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	long int balance;
	try
	{
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlCommand^ cmd = gcnew MySqlCommand("select SUM(accountBalance) as balance from customers " , con);
	MySqlDataReader^ dr;
	con->Open();
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		balance = dr->GetInt64(0);
		labelBalance->Text = balance+".00 Rs";
	}

	con->Close();
}
	   catch (Exception^ x)
	   {
		   MessageBox::Show(x->Message);
	   }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int count=0;
	try{
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlCommand^ cmd = gcnew MySqlCommand("select COUNT(*) as count_cust from customers", con);
	MySqlDataReader^ dr;
	con->Open();
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		
		count = dr->GetInt32(0);
		
	}

	con->Close();
   }
	   catch (Exception^ x)
	   {
		   MessageBox::Show(x->Message);
	   }


	   labelCustCount->Text = count + "";
	
}
};
}
