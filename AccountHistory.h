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
	/// Summary for AccountHistory
	/// </summary>
	public ref class AccountHistory : public System::Windows::Forms::Form
	{
	public:
		String^ custName;
		long int accountNo;
		AccountHistory(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ labelCustAccountNo;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelCustName;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
		 
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AccountHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AccountHistory::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCustAccountNo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelCustName = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(287, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(588, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Transaction History For Account Number : \r\n";
			// 
			// labelCustAccountNo
			// 
			this->labelCustAccountNo->AutoSize = true;
			this->labelCustAccountNo->BackColor = System::Drawing::Color::Black;
			this->labelCustAccountNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustAccountNo->ForeColor = System::Drawing::Color::White;
			this->labelCustAccountNo->Location = System::Drawing::Point(868, 44);
			this->labelCustAccountNo->Name = L"labelCustAccountNo";
			this->labelCustAccountNo->Size = System::Drawing::Size(171, 32);
			this->labelCustAccountNo->TabIndex = 1;
			this->labelCustAccountNo->Text = L"Account No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(454, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Customer Name";
			// 
			// labelCustName
			// 
			this->labelCustName->AutoSize = true;
			this->labelCustName->BackColor = System::Drawing::Color::Black;
			this->labelCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustName->ForeColor = System::Drawing::Color::White;
			this->labelCustName->Location = System::Drawing::Point(692, 115);
			this->labelCustName->Name = L"labelCustName";
			this->labelCustName->Size = System::Drawing::Size(232, 32);
			this->labelCustName->TabIndex = 3;
			this->labelCustName->Text = L"Customer Name";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(127, 177);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1274, 342);
			this->dataGridView1->TabIndex = 4;
			// 
			// AccountHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1498, 644);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelCustName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelCustAccountNo);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"AccountHistory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AccountHistory";
			this->Load += gcnew System::EventHandler(this, &AccountHistory::AccountHistory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AccountHistory_Load(System::Object^ sender, System::EventArgs^ e) {
		labelCustAccountNo->Text = accountNo+"";
		labelCustName->Text = custName;
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("select * from transaction_history WHERE account_no="+accountNo, con);
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
	};
}
