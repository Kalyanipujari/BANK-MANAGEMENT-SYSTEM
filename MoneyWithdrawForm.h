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
	/// Summary for MoneyWithdrawForm
	/// </summary>
	public ref class MoneyWithdrawForm : public System::Windows::Forms::Form
	{
	public:
		int Eid;
		String^ Ename;
		long int databalance;
	private: System::Windows::Forms::Label^ labelPin;
	public:
	private: System::Windows::Forms::TextBox^ textPin;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelPin;
	private: System::Windows::Forms::Panel^ panelInput;
	private: System::Windows::Forms::Panel^ panelImages;
	private: System::Windows::Forms::PictureBox^ pictureBoxSign;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBoxImage;
	private: System::Windows::Forms::Panel^ panelWithdraw;

	public:
		long int datapin;
		String^ custImage;
		String^ AccountType;
		String^ custName;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textAmount;
	private: System::Windows::Forms::Label^ labelCustName;
	private: System::Windows::Forms::Label^ label7;
	public:
		String^ CustSign;

		MoneyWithdrawForm(void)
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
		~MoneyWithdrawForm()
		{
			
			
			if (components)
			{
				delete components;
			}

		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textAccountNo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButtonStudent;
	private: System::Windows::Forms::RadioButton^ radioButtonCurrent;
	private: System::Windows::Forms::RadioButton^ radioButtonSavings;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MoneyWithdrawForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textAccountNo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonStudent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCurrent = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSavings = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->labelPin = (gcnew System::Windows::Forms::Label());
			this->textPin = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelPin = (gcnew System::Windows::Forms::Panel());
			this->panelInput = (gcnew System::Windows::Forms::Panel());
			this->panelImages = (gcnew System::Windows::Forms::Panel());
			this->labelCustName = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxSign = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxImage = (gcnew System::Windows::Forms::PictureBox());
			this->panelWithdraw = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textAmount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panelPin->SuspendLayout();
			this->panelInput->SuspendLayout();
			this->panelImages->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSign))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxImage))->BeginInit();
			this->panelWithdraw->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Account Number";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(93, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1313, 94);
			this->panel1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(504, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 40);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Withdraw Money";
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Select Account Type";
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
			this->button4->Text = L"Next";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MoneyWithdrawForm::button4_Click);
			// 
			// labelPin
			// 
			this->labelPin->AutoSize = true;
			this->labelPin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPin->Location = System::Drawing::Point(10, 15);
			this->labelPin->Name = L"labelPin";
			this->labelPin->Size = System::Drawing::Size(100, 25);
			this->labelPin->TabIndex = 65;
			this->labelPin->Text = L"Enter Pin";
			this->labelPin->Click += gcnew System::EventHandler(this, &MoneyWithdrawForm::label4_Click);
			// 
			// textPin
			// 
			this->textPin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPin->Location = System::Drawing::Point(141, 13);
			this->textPin->Name = L"textPin";
			this->textPin->Size = System::Drawing::Size(224, 27);
			this->textPin->TabIndex = 66;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(15, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 37);
			this->button1->TabIndex = 67;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MoneyWithdrawForm::button1_Click);
			// 
			// panelPin
			// 
			this->panelPin->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelPin->Controls->Add(this->button1);
			this->panelPin->Controls->Add(this->labelPin);
			this->panelPin->Controls->Add(this->textPin);
			this->panelPin->Location = System::Drawing::Point(106, 372);
			this->panelPin->Name = L"panelPin";
			this->panelPin->Size = System::Drawing::Size(526, 110);
			this->panelPin->TabIndex = 68;
			this->panelPin->Visible = false;
			// 
			// panelInput
			// 
			this->panelInput->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelInput->Controls->Add(this->button4);
			this->panelInput->Controls->Add(this->label1);
			this->panelInput->Controls->Add(this->textAccountNo);
			this->panelInput->Controls->Add(this->groupBox2);
			this->panelInput->Controls->Add(this->label2);
			this->panelInput->Location = System::Drawing::Point(106, 132);
			this->panelInput->Name = L"panelInput";
			this->panelInput->Size = System::Drawing::Size(526, 234);
			this->panelInput->TabIndex = 69;
			// 
			// panelImages
			// 
			this->panelImages->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelImages->Controls->Add(this->labelCustName);
			this->panelImages->Controls->Add(this->label7);
			this->panelImages->Controls->Add(this->pictureBoxSign);
			this->panelImages->Controls->Add(this->label5);
			this->panelImages->Controls->Add(this->label4);
			this->panelImages->Controls->Add(this->pictureBoxImage);
			this->panelImages->Location = System::Drawing::Point(638, 132);
			this->panelImages->Name = L"panelImages";
			this->panelImages->Size = System::Drawing::Size(758, 350);
			this->panelImages->TabIndex = 70;
			this->panelImages->Visible = false;
			// 
			// labelCustName
			// 
			this->labelCustName->AutoSize = true;
			this->labelCustName->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelCustName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustName->ForeColor = System::Drawing::Color::White;
			this->labelCustName->Location = System::Drawing::Point(189, 12);
			this->labelCustName->Name = L"labelCustName";
			this->labelCustName->Size = System::Drawing::Size(177, 26);
			this->labelCustName->TabIndex = 6;
			this->labelCustName->Text = L"Customer\'s Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(0, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 26);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Customer\'s Name:";
			// 
			// pictureBoxSign
			// 
			this->pictureBoxSign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxSign->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxSign->Location = System::Drawing::Point(440, 59);
			this->pictureBoxSign->Name = L"pictureBoxSign";
			this->pictureBoxSign->Size = System::Drawing::Size(247, 235);
			this->pictureBoxSign->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxSign->TabIndex = 4;
			this->pictureBoxSign->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(483, 314);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 26);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Customer\'s Sign";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(86, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 26);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Customer\'s Image";
			// 
			// pictureBoxImage
			// 
			this->pictureBoxImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxImage->Location = System::Drawing::Point(53, 59);
			this->pictureBoxImage->Name = L"pictureBoxImage";
			this->pictureBoxImage->Size = System::Drawing::Size(247, 235);
			this->pictureBoxImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxImage->TabIndex = 0;
			this->pictureBoxImage->TabStop = false;
			// 
			// panelWithdraw
			// 
			this->panelWithdraw->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelWithdraw->Controls->Add(this->button2);
			this->panelWithdraw->Controls->Add(this->textAmount);
			this->panelWithdraw->Controls->Add(this->label6);
			this->panelWithdraw->Location = System::Drawing::Point(106, 488);
			this->panelWithdraw->Name = L"panelWithdraw";
			this->panelWithdraw->Size = System::Drawing::Size(1290, 118);
			this->panelWithdraw->TabIndex = 71;
			this->panelWithdraw->Visible = false;
			this->panelWithdraw->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MoneyWithdrawForm::panelWithdraw_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(15, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 37);
			this->button2->TabIndex = 68;
			this->button2->Text = L"Withdraw Money";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MoneyWithdrawForm::button2_Click);
			// 
			// textAmount
			// 
			this->textAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAmount->Location = System::Drawing::Point(168, 27);
			this->textAmount->Name = L"textAmount";
			this->textAmount->Size = System::Drawing::Size(224, 27);
			this->textAmount->TabIndex = 68;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Enter Amount ";
			// 
			// MoneyWithdrawForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1490, 723);
			this->Controls->Add(this->panelWithdraw);
			this->Controls->Add(this->panelImages);
			this->Controls->Add(this->panelInput);
			this->Controls->Add(this->panelPin);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"MoneyWithdrawForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MoneyWithdrawForm";
			this->Load += gcnew System::EventHandler(this, &MoneyWithdrawForm::MoneyWithdrawForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panelPin->ResumeLayout(false);
			this->panelPin->PerformLayout();
			this->panelInput->ResumeLayout(false);
			this->panelInput->PerformLayout();
			this->panelImages->ResumeLayout(false);
			this->panelImages->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSign))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxImage))->EndInit();
			this->panelWithdraw->ResumeLayout(false);
			this->panelWithdraw->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MoneyWithdrawForm_Load(System::Object^ sender, System::EventArgs^ e) {

	
	}
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
	if (textAccountNo->Text->Length== 0)
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
			MySqlCommand^ cmd = gcnew MySqlCommand("select accountNo,accountType,accountBalance,pin,signimage,customerimage,name from Customers", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (accountNo == dr->GetString(0) && dr->GetString(1)->Contains(AccountType))
				{

					flag = true;
					databalance = dr->GetInt64(2);
					datapin = dr->GetInt64(3);
					CustSign = dr->GetString(4);
					custImage = dr->GetString(5);
					custName = dr->GetString(6);
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
				panelPin->Visible = false;
				MessageBox::Show("The "+AccountType+ " Account With Account Number="+accountNo+" \n Does Not Exists");

				
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
		panelPin->Visible = true;
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool flag = false;
	String^ subfinalPath;
	String^ finalPath;

	int i;
	int pin = Int64::Parse(textPin->Text);
	if (datapin==pin)
	{
		if (databalance < 500)
		{
			MessageBox::Show("Amount In This Account Is Below 500 Rs Therefore Withdrawl cannot be processed");
            panelImages->Visible = false;
			panelWithdraw->Visible = false;
		}
		else
		{
			flag = true;
			panelImages->Visible = true;
			panelWithdraw->Visible = true;
			i= custImage->IndexOf('-');
			subfinalPath = custImage->Substring(i + 1);
			finalPath = "E:\\images-\\" + subfinalPath;
			pictureBoxImage->ImageLocation = finalPath;

			i = CustSign->IndexOf('-');
			subfinalPath = CustSign->Substring(i + 1);
			finalPath = "E:\\images-\\" + subfinalPath;
			pictureBoxSign->ImageLocation = finalPath;
			labelCustName->Text = custName;

		}
	}
	else
	{
		MessageBox::Show("Invalid Pin");
		panelImages->Visible = false;
		panelWithdraw->Visible = false;
	}

}
private: System::Void panelWithdraw_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	bool flag=false;
	int amount;
	if (textAmount->Text->Length != 0)
	{
		amount = Int64::Parse(textAmount->Text);
		if (databalance<amount)
		{
			MessageBox::Show("Insufficient Balance");
			flag = false;
		}
		else
		{
			flag = true;
		}
	}
	else
	{
		MessageBox::Show("Enter Amount ");
	}
	if (flag)
	{
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			int accountNo = Int32::Parse(textAccountNo->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand("update customers set accountBalance="+(databalance-amount)+" WHERE accountNo=" + accountNo, con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			MessageBox::Show("Withdrawl Successful\nUpdated Balance="+(databalance-amount)+" Rs");
			dr->Close();


				DateTime^ dt = DateTime::Now;
			String^ date;
			String^ time;
			date = dt->ToLongDateString();
			time = dt->ToLongTimeString();
			String^ Ttype = "Withdrawl";
			String^ transfered_to="-";
			Eid = 309;
			Ename = "aadam";
			MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into transaction_history (account_no,account_type,transaction_type,amount,emp_id,emp_name,date,time,transfered_to)values('" + textAccountNo->Text + "','" + AccountType+ "','" + Ttype+ "','" + amount + "'," + Eid + ",'" + Ename + "','" + date+ "','" + time + "','" +transfered_to+"')", con);
			MySqlDataReader^ dr1;
			dr1 = cmd1->ExecuteReader();
			dr1->Close();
		
		    

			con->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);

		}
	
	}
	

}
};
}
