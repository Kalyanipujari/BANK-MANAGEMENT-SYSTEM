#pragma once
#include "RegisterAdminAsk.h"
namespace BankMsVersionOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdminDetails
	/// </summary>
	public ref class AdminDetails : public System::Windows::Forms::Form
	{
	public:
		AdminDetails(void)
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
		~AdminDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSecurityKey;
	private: System::Windows::Forms::TextBox^ textSecurityKey;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDetails::typeid));
			this->buttonSecurityKey = (gcnew System::Windows::Forms::Button());
			this->textSecurityKey = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonSecurityKey
			// 
			this->buttonSecurityKey->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonSecurityKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSecurityKey->Location = System::Drawing::Point(861, 55);
			this->buttonSecurityKey->Name = L"buttonSecurityKey";
			this->buttonSecurityKey->Size = System::Drawing::Size(242, 38);
			this->buttonSecurityKey->TabIndex = 0;
			this->buttonSecurityKey->Text = L"Check";
			this->buttonSecurityKey->UseVisualStyleBackColor = false;
			this->buttonSecurityKey->Click += gcnew System::EventHandler(this, &AdminDetails::buttonSecurityKey_Click);
			// 
			// textSecurityKey
			// 
			this->textSecurityKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textSecurityKey->Location = System::Drawing::Point(478, 61);
			this->textSecurityKey->Name = L"textSecurityKey";
			this->textSecurityKey->Size = System::Drawing::Size(309, 27);
			this->textSecurityKey->TabIndex = 1;
			this->textSecurityKey->TextChanged += gcnew System::EventHandler(this, &AdminDetails::textSecurityKey_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(118, 162);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1201, 466);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Admin Details";
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &AdminDetails::groupBox1_Enter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(55, 393);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(242, 38);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Show Admin";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminDetails::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(18, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1177, 333);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminDetails::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(360, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add Admin";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminDetails::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(266, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter Security Key";
			// 
			// AdminDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1462, 809);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textSecurityKey);
			this->Controls->Add(this->buttonSecurityKey);
			this->DoubleBuffered = true;
			this->Name = L"AdminDetails";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminDetails";
			this->Load += gcnew System::EventHandler(this, &AdminDetails::AdminDetails_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSecurityKey_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
			bool flag=true;
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from skey WHERE id=1", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				if (textSecurityKey->Text == dr->GetString(1))
				{
					MessageBox::Show("Security Code is Correct");
					groupBox1->Visible = true;
					flag = false;
				}
			}
			if(flag)
			{
				MessageBox::Show("Invalid security key");
			}
			con->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e ->Message);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=bms";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ da = gcnew MySqlDataAdapter("select id,name,contact,adhar,gmail,status,regdate,retdate from admin", con);
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	BankMsVersionOne::RegisterAdminAsk^ regObj = gcnew 	BankMsVersionOne::RegisterAdminAsk();
	this->Hide();
	regObj->ShowDialog();
	
}
private: System::Void textSecurityKey_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AdminDetails_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
