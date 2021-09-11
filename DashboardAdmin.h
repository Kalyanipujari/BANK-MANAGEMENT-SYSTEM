#pragma once
#include "RegisterEmployee.h"
#include "EmpRegisterAsAdminask.h"
#include "ListOfAllEmpAdmins.h"
#include "TransactionHistory.h"
namespace BankMsVersionOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for DashboardAdmin
	/// </summary>
	public ref class DashboardAdmin : public System::Windows::Forms::Form
	{
	public:
		DashboardAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//timer1->Start();
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labeldate;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lDate;
	private: System::Windows::Forms::Label^ lTime;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelCustCount;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ labelTotalAmount;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Panel^ panelManageEmployees;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textSearchEmp;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textEmpId;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textJDate;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textEmpAdhar;

	private: System::Windows::Forms::TextBox^ textEmpEmail;

	private: System::Windows::Forms::TextBox^ textEmpContact;

	private: System::Windows::Forms::TextBox^ textEmpAddress;

	private: System::Windows::Forms::TextBox^ textEmpName;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBoxEmpImage;
	private: System::Windows::Forms::Panel^ panelShowAllEmployees;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panelManageAdminEmployees;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textStatusAdminEmp;

	private: System::Windows::Forms::TextBox^ textLastLoginTimeAdminEmp;

	private: System::Windows::Forms::TextBox^ textLastLoginDateAdminEmp;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBoxAdminEmpImage;

	private: System::Windows::Forms::TextBox^ textJDateAdminEmp;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textAdharAdminEmp;

	private: System::Windows::Forms::TextBox^ textEmailAdminEmp;

	private: System::Windows::Forms::TextBox^ textContactAdminEmp;

	private: System::Windows::Forms::TextBox^ textAddressAdminEmp;

	private: System::Windows::Forms::TextBox^ textNameAdminEmp;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textIDAdminEmp;


	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textSearchAdminEmp;

	private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::TextBox^ textRetiredDate;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ labelBalance;


	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardAdmin::typeid));
			this->labeldate = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lDate = (gcnew System::Windows::Forms::Label());
			this->lTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelCustCount = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTotalAmount = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panelManageEmployees = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxEmpImage = (gcnew System::Windows::Forms::PictureBox());
			this->textJDate = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textEmpAdhar = (gcnew System::Windows::Forms::TextBox());
			this->textEmpEmail = (gcnew System::Windows::Forms::TextBox());
			this->textEmpContact = (gcnew System::Windows::Forms::TextBox());
			this->textEmpAddress = (gcnew System::Windows::Forms::TextBox());
			this->textEmpName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textEmpId = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textSearchEmp = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panelShowAllEmployees = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panelManageAdminEmployees = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textRetiredDate = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textStatusAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->textLastLoginTimeAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->textLastLoginDateAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxAdminEmpImage = (gcnew System::Windows::Forms::PictureBox());
			this->textJDateAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textAdharAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->textEmailAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->textContactAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->textAddressAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->textNameAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textIDAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textSearchAdminEmp = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->labelBalance = (gcnew System::Windows::Forms::Label());
			this->panelManageEmployees->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxEmpImage))->BeginInit();
			this->panelShowAllEmployees->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panelManageAdminEmployees->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminEmpImage))->BeginInit();
			this->SuspendLayout();
			// 
			// labeldate
			// 
			this->labeldate->AutoSize = true;
			this->labeldate->Location = System::Drawing::Point(1663, 56);
			this->labeldate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labeldate->Name = L"labeldate";
			this->labeldate->Size = System::Drawing::Size(114, 20);
			this->labeldate->TabIndex = 0;
			this->labeldate->Text = L"Current date";
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Location = System::Drawing::Point(1697, 94);
			this->labelTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(45, 20);
			this->labelTime->TabIndex = 1;
			this->labelTime->Text = L"time";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(110, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Admin Dashboard";
			// 
			// lDate
			// 
			this->lDate->AutoSize = true;
			this->lDate->BackColor = System::Drawing::Color::Transparent;
			this->lDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lDate->ForeColor = System::Drawing::Color::White;
			this->lDate->Location = System::Drawing::Point(1284, 40);
			this->lDate->Name = L"lDate";
			this->lDate->Size = System::Drawing::Size(104, 18);
			this->lDate->TabIndex = 3;
			this->lDate->Text = L"Current Date";
			// 
			// lTime
			// 
			this->lTime->AutoSize = true;
			this->lTime->BackColor = System::Drawing::Color::Transparent;
			this->lTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTime->ForeColor = System::Drawing::Color::White;
			this->lTime->Location = System::Drawing::Point(1284, 69);
			this->lTime->Name = L"lTime";
			this->lTime->Size = System::Drawing::Size(97, 17);
			this->lTime->TabIndex = 4;
			this->lTime->Text = L"Current time";
			this->lTime->Click += gcnew System::EventHandler(this, &DashboardAdmin::label3_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &DashboardAdmin::timer1_Tick_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(480, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Total Customers";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardAdmin::button1_Click);
			// 
			// labelCustCount
			// 
			this->labelCustCount->AutoSize = true;
			this->labelCustCount->Location = System::Drawing::Point(687, 59);
			this->labelCustCount->Name = L"labelCustCount";
			this->labelCustCount->Size = System::Drawing::Size(55, 20);
			this->labelCustCount->TabIndex = 6;
			this->labelCustCount->Text = L"count";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(831, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 37);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Total Amount In Bank";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardAdmin::button2_Click);
			// 
			// labelTotalAmount
			// 
			this->labelTotalAmount->AutoSize = true;
			this->labelTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotalAmount->ForeColor = System::Drawing::Color::Black;
			this->labelTotalAmount->Location = System::Drawing::Point(76, 56);
			this->labelTotalAmount->Name = L"labelTotalAmount";
			this->labelTotalAmount->Size = System::Drawing::Size(82, 25);
			this->labelTotalAmount->TabIndex = 8;
			this->labelTotalAmount->Text = L"Emp ID";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(165, 202);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 37);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Manage Employees";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DashboardAdmin::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(165, 320);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 37);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Show All Employees";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DashboardAdmin::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(165, 378);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 37);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Transaction History";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DashboardAdmin::button5_Click);
			// 
			// panelManageEmployees
			// 
			this->panelManageEmployees->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelManageEmployees->Controls->Add(this->groupBox1);
			this->panelManageEmployees->Controls->Add(this->button8);
			this->panelManageEmployees->Controls->Add(this->label2);
			this->panelManageEmployees->Controls->Add(this->textSearchEmp);
			this->panelManageEmployees->Controls->Add(this->button7);
			this->panelManageEmployees->Location = System::Drawing::Point(468, 145);
			this->panelManageEmployees->Name = L"panelManageEmployees";
			this->panelManageEmployees->Size = System::Drawing::Size(901, 603);
			this->panelManageEmployees->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBoxEmpImage);
			this->groupBox1->Controls->Add(this->textJDate);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textEmpAdhar);
			this->groupBox1->Controls->Add(this->textEmpEmail);
			this->groupBox1->Controls->Add(this->textEmpContact);
			this->groupBox1->Controls->Add(this->textEmpAddress);
			this->groupBox1->Controls->Add(this->textEmpName);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textEmpId);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->labelTotalAmount);
			this->groupBox1->Location = System::Drawing::Point(12, 124);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(872, 466);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Employee Details";
			// 
			// pictureBoxEmpImage
			// 
			this->pictureBoxEmpImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxEmpImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxEmpImage->Location = System::Drawing::Point(546, 56);
			this->pictureBoxEmpImage->Name = L"pictureBoxEmpImage";
			this->pictureBoxEmpImage->Size = System::Drawing::Size(297, 316);
			this->pictureBoxEmpImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxEmpImage->TabIndex = 29;
			this->pictureBoxEmpImage->TabStop = false;
			// 
			// textJDate
			// 
			this->textJDate->Location = System::Drawing::Point(225, 361);
			this->textJDate->Name = L"textJDate";
			this->textJDate->ReadOnly = true;
			this->textJDate->Size = System::Drawing::Size(274, 27);
			this->textJDate->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(76, 363);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 25);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Joining Date";
			// 
			// textEmpAdhar
			// 
			this->textEmpAdhar->Location = System::Drawing::Point(225, 305);
			this->textEmpAdhar->Name = L"textEmpAdhar";
			this->textEmpAdhar->Size = System::Drawing::Size(274, 27);
			this->textEmpAdhar->TabIndex = 26;
			// 
			// textEmpEmail
			// 
			this->textEmpEmail->Location = System::Drawing::Point(225, 264);
			this->textEmpEmail->Name = L"textEmpEmail";
			this->textEmpEmail->Size = System::Drawing::Size(274, 27);
			this->textEmpEmail->TabIndex = 25;
			// 
			// textEmpContact
			// 
			this->textEmpContact->Location = System::Drawing::Point(225, 211);
			this->textEmpContact->Name = L"textEmpContact";
			this->textEmpContact->Size = System::Drawing::Size(274, 27);
			this->textEmpContact->TabIndex = 24;
			// 
			// textEmpAddress
			// 
			this->textEmpAddress->Location = System::Drawing::Point(225, 162);
			this->textEmpAddress->Name = L"textEmpAddress";
			this->textEmpAddress->Size = System::Drawing::Size(274, 27);
			this->textEmpAddress->TabIndex = 23;
			// 
			// textEmpName
			// 
			this->textEmpName->Location = System::Drawing::Point(225, 114);
			this->textEmpName->Name = L"textEmpName";
			this->textEmpName->Size = System::Drawing::Size(274, 27);
			this->textEmpName->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(76, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 25);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Adhar No";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(76, 266);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 25);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(76, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Contact No";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(76, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 25);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(76, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Name";
			// 
			// textEmpId
			// 
			this->textEmpId->Location = System::Drawing::Point(225, 56);
			this->textEmpId->Name = L"textEmpId";
			this->textEmpId->ReadOnly = true;
			this->textEmpId->Size = System::Drawing::Size(274, 27);
			this->textEmpId->TabIndex = 16;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(278, 410);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(191, 37);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Update Details";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &DashboardAdmin::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(493, 410);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(191, 37);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Delete Employee";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &DashboardAdmin::button10_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(290, 81);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(191, 37);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Add Employee";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &DashboardAdmin::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(234, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Enter ID No Of Employee To be Searched";
			// 
			// textSearchEmp
			// 
			this->textSearchEmp->Location = System::Drawing::Point(166, 22);
			this->textSearchEmp->Name = L"textSearchEmp";
			this->textSearchEmp->Size = System::Drawing::Size(431, 27);
			this->textSearchEmp->TabIndex = 11;
			this->textSearchEmp->TextChanged += gcnew System::EventHandler(this, &DashboardAdmin::textSearchEmp_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(652, 17);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(191, 37);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Search Employee ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DashboardAdmin::button7_Click);
			// 
			// panelShowAllEmployees
			// 
			this->panelShowAllEmployees->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->panelShowAllEmployees->Controls->Add(this->dataGridView1);
			this->panelShowAllEmployees->Location = System::Drawing::Point(465, 132);
			this->panelShowAllEmployees->Name = L"panelShowAllEmployees";
			this->panelShowAllEmployees->Size = System::Drawing::Size(901, 603);
			this->panelShowAllEmployees->TabIndex = 18;
			this->panelShowAllEmployees->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(10, 17);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(872, 567);
			this->dataGridView1->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(165, 256);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(226, 37);
			this->button11->TabIndex = 19;
			this->button11->Text = L"Manage Admin Employees";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &DashboardAdmin::button11_Click);
			// 
			// panelManageAdminEmployees
			// 
			this->panelManageAdminEmployees->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelManageAdminEmployees->Controls->Add(this->button16);
			this->panelManageAdminEmployees->Controls->Add(this->panel3);
			this->panelManageAdminEmployees->Controls->Add(this->panel2);
			this->panelManageAdminEmployees->Controls->Add(this->button14);
			this->panelManageAdminEmployees->Controls->Add(this->label16);
			this->panelManageAdminEmployees->Controls->Add(this->textSearchAdminEmp);
			this->panelManageAdminEmployees->Controls->Add(this->button15);
			this->panelManageAdminEmployees->Location = System::Drawing::Point(471, 132);
			this->panelManageAdminEmployees->Name = L"panelManageAdminEmployees";
			this->panelManageAdminEmployees->Size = System::Drawing::Size(901, 623);
			this->panelManageAdminEmployees->TabIndex = 14;
			this->panelManageAdminEmployees->Visible = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Location = System::Drawing::Point(416, 63);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(330, 37);
			this->button16->TabIndex = 19;
			this->button16->Text = L"Show List Of All Admin Employees";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &DashboardAdmin::button16_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->Controls->Add(this->groupBox2);
			this->panel3->Location = System::Drawing::Point(3, 106);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(898, 611);
			this->panel3->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->textRetiredDate);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->textStatusAdminEmp);
			this->groupBox2->Controls->Add(this->textLastLoginTimeAdminEmp);
			this->groupBox2->Controls->Add(this->textLastLoginDateAdminEmp);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->pictureBoxAdminEmpImage);
			this->groupBox2->Controls->Add(this->textJDateAdminEmp);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textAdharAdminEmp);
			this->groupBox2->Controls->Add(this->textEmailAdminEmp);
			this->groupBox2->Controls->Add(this->textContactAdminEmp);
			this->groupBox2->Controls->Add(this->textAddressAdminEmp);
			this->groupBox2->Controls->Add(this->textNameAdminEmp);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textIDAdminEmp);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Location = System::Drawing::Point(6, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(906, 509);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Employee Details";
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(684, 466);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(191, 37);
			this->button17->TabIndex = 38;
			this->button17->Text = L"Delete";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &DashboardAdmin::button17_Click);
			// 
			// textRetiredDate
			// 
			this->textRetiredDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRetiredDate->Location = System::Drawing::Point(234, 402);
			this->textRetiredDate->Name = L"textRetiredDate";
			this->textRetiredDate->ReadOnly = true;
			this->textRetiredDate->Size = System::Drawing::Size(98, 24);
			this->textRetiredDate->TabIndex = 37;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(102, 402);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(116, 20);
			this->label20->TabIndex = 36;
			this->label20->Text = L"Retired Date";
			// 
			// textStatusAdminEmp
			// 
			this->textStatusAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textStatusAdminEmp->Location = System::Drawing::Point(234, 437);
			this->textStatusAdminEmp->Name = L"textStatusAdminEmp";
			this->textStatusAdminEmp->ReadOnly = true;
			this->textStatusAdminEmp->Size = System::Drawing::Size(98, 24);
			this->textStatusAdminEmp->TabIndex = 35;
			// 
			// textLastLoginTimeAdminEmp
			// 
			this->textLastLoginTimeAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textLastLoginTimeAdminEmp->Location = System::Drawing::Point(234, 354);
			this->textLastLoginTimeAdminEmp->Name = L"textLastLoginTimeAdminEmp";
			this->textLastLoginTimeAdminEmp->ReadOnly = true;
			this->textLastLoginTimeAdminEmp->Size = System::Drawing::Size(246, 24);
			this->textLastLoginTimeAdminEmp->TabIndex = 34;
			// 
			// textLastLoginDateAdminEmp
			// 
			this->textLastLoginDateAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textLastLoginDateAdminEmp->Location = System::Drawing::Point(234, 314);
			this->textLastLoginDateAdminEmp->Name = L"textLastLoginDateAdminEmp";
			this->textLastLoginDateAdminEmp->ReadOnly = true;
			this->textLastLoginDateAdminEmp->Size = System::Drawing::Size(246, 24);
			this->textLastLoginDateAdminEmp->TabIndex = 33;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(155, 432);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 20);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Status";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(87, 354);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(128, 18);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Last Login Time";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(87, 314);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(126, 18);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Last Login Date";
			// 
			// pictureBoxAdminEmpImage
			// 
			this->pictureBoxAdminEmpImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxAdminEmpImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxAdminEmpImage->Location = System::Drawing::Point(546, 56);
			this->pictureBoxAdminEmpImage->Name = L"pictureBoxAdminEmpImage";
			this->pictureBoxAdminEmpImage->Size = System::Drawing::Size(297, 316);
			this->pictureBoxAdminEmpImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxAdminEmpImage->TabIndex = 29;
			this->pictureBoxAdminEmpImage->TabStop = false;
			// 
			// textJDateAdminEmp
			// 
			this->textJDateAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textJDateAdminEmp->Location = System::Drawing::Point(204, 273);
			this->textJDateAdminEmp->Name = L"textJDateAdminEmp";
			this->textJDateAdminEmp->ReadOnly = true;
			this->textJDateAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textJDateAdminEmp->TabIndex = 28;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(87, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 18);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Joining Date";
			// 
			// textAdharAdminEmp
			// 
			this->textAdharAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAdharAdminEmp->Location = System::Drawing::Point(204, 225);
			this->textAdharAdminEmp->Name = L"textAdharAdminEmp";
			this->textAdharAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textAdharAdminEmp->TabIndex = 26;
			// 
			// textEmailAdminEmp
			// 
			this->textEmailAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmailAdminEmp->Location = System::Drawing::Point(204, 186);
			this->textEmailAdminEmp->Name = L"textEmailAdminEmp";
			this->textEmailAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textEmailAdminEmp->TabIndex = 25;
			// 
			// textContactAdminEmp
			// 
			this->textContactAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContactAdminEmp->Location = System::Drawing::Point(204, 147);
			this->textContactAdminEmp->Name = L"textContactAdminEmp";
			this->textContactAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textContactAdminEmp->TabIndex = 24;
			// 
			// textAddressAdminEmp
			// 
			this->textAddressAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAddressAdminEmp->Location = System::Drawing::Point(204, 113);
			this->textAddressAdminEmp->Name = L"textAddressAdminEmp";
			this->textAddressAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textAddressAdminEmp->TabIndex = 23;
			// 
			// textNameAdminEmp
			// 
			this->textNameAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textNameAdminEmp->Location = System::Drawing::Point(204, 70);
			this->textNameAdminEmp->Name = L"textNameAdminEmp";
			this->textNameAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textNameAdminEmp->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(85, 225);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 18);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Adhar No";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(87, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 18);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Email";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(87, 147);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 18);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Contact No";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(87, 113);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 18);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Address";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(87, 76);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 18);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Name";
			// 
			// textIDAdminEmp
			// 
			this->textIDAdminEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textIDAdminEmp->Location = System::Drawing::Point(206, 31);
			this->textIDAdminEmp->Name = L"textIDAdminEmp";
			this->textIDAdminEmp->ReadOnly = true;
			this->textIDAdminEmp->Size = System::Drawing::Size(274, 24);
			this->textIDAdminEmp->TabIndex = 16;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Location = System::Drawing::Point(234, 467);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(191, 37);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Update Details";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &DashboardAdmin::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Location = System::Drawing::Point(441, 466);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(230, 37);
			this->button13->TabIndex = 15;
			this->button13->Text = L"Retire  This Employee";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &DashboardAdmin::button13_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(85, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 18);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Emp ID";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(3, 131);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(901, 553);
			this->panel2->TabIndex = 18;
			this->panel2->Visible = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(168, 63);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(216, 37);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Add Admin Employee";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &DashboardAdmin::button14_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(234, 2);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(310, 17);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Enter ID No Of Employee To be Searched";
			// 
			// textSearchAdminEmp
			// 
			this->textSearchAdminEmp->Location = System::Drawing::Point(166, 22);
			this->textSearchAdminEmp->Name = L"textSearchAdminEmp";
			this->textSearchAdminEmp->Size = System::Drawing::Size(431, 27);
			this->textSearchAdminEmp->TabIndex = 11;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(640, 17);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(233, 37);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Search Admin Employee ";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &DashboardAdmin::button15_Click);
			// 
			// labelBalance
			// 
			this->labelBalance->AutoSize = true;
			this->labelBalance->Location = System::Drawing::Point(1063, 59);
			this->labelBalance->Name = L"labelBalance";
			this->labelBalance->Size = System::Drawing::Size(55, 20);
			this->labelBalance->TabIndex = 20;
			this->labelBalance->Text = L"count";
			// 
			// DashboardAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1462, 809);
			this->Controls->Add(this->labelBalance);
			this->Controls->Add(this->panelManageAdminEmployees);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->panelShowAllEmployees);
			this->Controls->Add(this->panelManageEmployees);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelCustCount);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lTime);
			this->Controls->Add(this->lDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->labeldate);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DashboardAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardAdmin";
			this->Load += gcnew System::EventHandler(this, &DashboardAdmin::DashboardAdmin_Load);
			this->panelManageEmployees->ResumeLayout(false);
			this->panelManageEmployees->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxEmpImage))->EndInit();
			this->panelShowAllEmployees->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panelManageAdminEmployees->ResumeLayout(false);
			this->panelManageAdminEmployees->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdminEmpImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime^ dt = DateTime::Now;
		DateTime^ da = DateTime::Now;
		labeldate->Text = dt->ToLongDateString();
		labelTime->Text = da->ToLongTimeString();
	}
	private: System::Void DashboardAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ dt = DateTime::Now;
	DateTime^ da = DateTime::Now;
	lDate->Text = dt->ToLongDateString();
	lTime->Text = da->ToLongTimeString();
}
private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textSearchEmp->Text->Length != 0)
	{
		String^ ipath;
		String^ imagepath;
		String^ finalpath;
		int l;
		try {
			bool flag = false;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from employees WHERE id="+textSearchEmp->Text, con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (textSearchEmp->Text == dr->GetString(0))
				{
					flag = true;
					textEmpId->Text =""+dr->GetInt32(0);
					textEmpName->Text = dr->GetString(1);
					textEmpAddress->Text= dr->GetString(2);
					textEmpContact->Text= dr->GetString(3);
					textEmpEmail->Text= dr->GetString(4);
					textEmpAdhar->Text= dr->GetString(5);
					textJDate->Text= dr->GetString(6);
				    ipath=dr->GetString(7);
					l = ipath->IndexOf('-');
					imagepath = ipath->Substring(l+1);
					finalpath = "E:\\images-\\" + imagepath;
					pictureBoxEmpImage->ImageLocation = finalpath;
					break;


				}
			}

			if (!flag)
			{
				
				MessageBox::Show("Employee With this id does not exist");
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
		MessageBox::Show("Please Enter Id Of Employee");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panelManageEmployees->Visible = true;
	panelShowAllEmployees->Visible = false;
	panelManageAdminEmployees->Visible = false;
}
private: System::Void textSearchEmp_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}



private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::RegisterEmployee^ EmpObj = gcnew BankMsVersionOne::RegisterEmployee();
	EmpObj->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textEmpId->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("update employees set name='" + textEmpName->Text + "',address='" + textEmpAddress->Text + "',contact='" + textEmpContact->Text + "',email='" + textEmpEmail->Text + "',adharNo='" + textEmpAdhar->Text + "' WHERE id="+id, con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Employee details are Updated");
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
		int id = Int32::Parse(textEmpId->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from employees WHERE id=" + id + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Employee with id=" + id + " is deleted");
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panelShowAllEmployees->Visible = true;
	panelManageEmployees->Visible = false;
	panelManageAdminEmployees->Visible = false;
	//this->dataGridView1->DefaultCellStyle->ForeColor->Set =Color->Blue;
	this->dataGridView1->RowsDefaultCellStyle->ForeColor =ForeColor.Black ;
	
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ da = gcnew MySqlDataAdapter("select * from employees", con);
		con->Open();
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
		con->Close();
	}
	catch (Exception^ e)
	{

		MessageBox::Show(e->Message);
	}

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	panelManageAdminEmployees->Visible = true;
	panelShowAllEmployees->Visible = false;
	panelManageEmployees->Visible = false;
	
	
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

	BankMsVersionOne::EmpRegisterAsAdminask^ empAdminObj = gcnew BankMsVersionOne::EmpRegisterAsAdminask();
	empAdminObj->ShowDialog();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::ListOfAllEmpAdmins^ liobj = gcnew BankMsVersionOne::ListOfAllEmpAdmins();
	liobj->ShowDialog();
    
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textSearchAdminEmp->Text->Length != 0)
	{
		String^ ipath;
		String^ imagepath;
		String^ finalpath;
		int l;
		try {
			bool flag = false;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from emp_admin WHERE id=" + textSearchAdminEmp->Text, con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (textSearchAdminEmp->Text == dr->GetString(0))
				{
					flag = true;
					textIDAdminEmp->Text = "" + dr->GetInt32(0);
					textNameAdminEmp->Text = dr->GetString(1);
					textAddressAdminEmp->Text = dr->GetString(2);
					textContactAdminEmp->Text = dr->GetString(3);
					textEmailAdminEmp->Text = dr->GetString(4);
					textAdharAdminEmp->Text = dr->GetString(5);
					textJDateAdminEmp->Text = dr->GetString(6);
					textLastLoginDateAdminEmp->Text= dr->GetString(12);
					textLastLoginTimeAdminEmp->Text= dr->GetString(15);
					textStatusAdminEmp->Text = dr->GetString(13);
					textRetiredDate->Text= dr->GetString(14);
					ipath = dr->GetString(7);
					l = ipath->IndexOf('-');
					imagepath = ipath->Substring(l + 1);
					finalpath = "E:\\images-\\" + imagepath;
					pictureBoxAdminEmpImage->ImageLocation = finalpath;
					break;


				}
			}

			if (!flag)
			{

				MessageBox::Show("Employee With this id does not exist");
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
		MessageBox::Show("Please Enter Id Of Employee");
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textIDAdminEmp->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("update emp_admin set name='" + textNameAdminEmp->Text + "',address='" +textAddressAdminEmp->Text + "',contact='" + textContactAdminEmp->Text + "',email='" + textEmailAdminEmp->Text + "',adharNo='" + textAdharAdminEmp->Text + "' WHERE id=" + id, con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Details Are Updated");
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);

	}

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		DateTime^ dt = DateTime::Now;
		String^ date;
		date = dt->ToLongDateString();
		String^ status = "Retired";
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textIDAdminEmp->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("update emp_admin set retdate='" + date+ "',status='" + status +"' WHERE id=" + id, con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Employee with ID="+id+" Retired");
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);

	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textIDAdminEmp->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from emp_admin WHERE id=" + id + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Employee with id=" + id + " is deleted");
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0;
	try {
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	long int balance;
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("select SUM(accountBalance) as balance from customers ", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			balance = dr->GetInt64(0);
			labelBalance->Text = balance + ".00 Rs";
		}

		con->Close();
	}
	catch (Exception^ x)
	{
		MessageBox::Show(x->Message);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::TransactionHistory^ th = gcnew BankMsVersionOne::TransactionHistory();
	th->ShowDialog();
}
};
}
