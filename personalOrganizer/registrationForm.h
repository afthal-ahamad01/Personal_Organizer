#pragma once
#include "User.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for registrationForm
	/// </summary>
	public ref class registrationForm : public System::Windows::Forms::Form
	{
	public:
		registrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbRegistration;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ lbPassword;

	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ lbUsername;
	private: System::Windows::Forms::TextBox^ tbConfirmPswd;
	private: System::Windows::Forms::Label^ lbconfirmPswd;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ lbLogin;
	private: System::Windows::Forms::Label^ lbLoginAsk;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationForm::typeid));
			this->lbRegistration = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPswd = (gcnew System::Windows::Forms::TextBox());
			this->lbconfirmPswd = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lbLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->lbLoginAsk = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbRegistration
			// 
			this->lbRegistration->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbRegistration->BackColor = System::Drawing::Color::Transparent;
			this->lbRegistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->lbRegistration->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbRegistration->Location = System::Drawing::Point(115, 18);
			this->lbRegistration->Name = L"lbRegistration";
			this->lbRegistration->Size = System::Drawing::Size(234, 52);
			this->lbRegistration->TabIndex = 0;
			this->lbRegistration->Text = L"Registration";
			this->lbRegistration->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbName->Location = System::Drawing::Point(122, 144);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(77, 26);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Name ";
			// 
			// tbName
			// 
			this->tbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbName->Location = System::Drawing::Point(127, 173);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(550, 32);
			this->tbName->TabIndex = 2;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &registrationForm::tbName_TextChanged);
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->Location = System::Drawing::Point(127, 341);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(550, 32);
			this->tbPassword->TabIndex = 4;
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->BackColor = System::Drawing::Color::Transparent;
			this->lbPassword->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbPassword->Location = System::Drawing::Point(122, 312);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(108, 26);
			this->lbPassword->TabIndex = 3;
			this->lbPassword->Text = L"Password";
			this->lbPassword->Click += gcnew System::EventHandler(this, &registrationForm::lbPassword_Click);
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbUsername->Location = System::Drawing::Point(127, 258);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(550, 32);
			this->tbUsername->TabIndex = 6;
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->BackColor = System::Drawing::Color::Transparent;
			this->lbUsername->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbUsername->Location = System::Drawing::Point(122, 229);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(119, 26);
			this->lbUsername->TabIndex = 5;
			this->lbUsername->Text = L"Username ";
			// 
			// tbConfirmPswd
			// 
			this->tbConfirmPswd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbConfirmPswd->Location = System::Drawing::Point(127, 420);
			this->tbConfirmPswd->Name = L"tbConfirmPswd";
			this->tbConfirmPswd->PasswordChar = '*';
			this->tbConfirmPswd->Size = System::Drawing::Size(550, 32);
			this->tbConfirmPswd->TabIndex = 8;
			// 
			// lbconfirmPswd
			// 
			this->lbconfirmPswd->AutoSize = true;
			this->lbconfirmPswd->BackColor = System::Drawing::Color::Transparent;
			this->lbconfirmPswd->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbconfirmPswd->Location = System::Drawing::Point(122, 392);
			this->lbconfirmPswd->Name = L"lbconfirmPswd";
			this->lbconfirmPswd->Size = System::Drawing::Size(191, 26);
			this->lbconfirmPswd->TabIndex = 7;
			this->lbconfirmPswd->Text = L"Confirm Password";
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(127, 496);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(103, 33);
			this->btnSubmit->TabIndex = 9;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &registrationForm::btnSubmit_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(252, 496);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(97, 33);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &registrationForm::btnCancel_Click);
			// 
			// lbLogin
			// 
			this->lbLogin->AutoSize = true;
			this->lbLogin->BackColor = System::Drawing::Color::Transparent;
			this->lbLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLogin->LinkColor = System::Drawing::Color::DarkTurquoise;
			this->lbLogin->Location = System::Drawing::Point(631, 468);
			this->lbLogin->Name = L"lbLogin";
			this->lbLogin->Size = System::Drawing::Size(51, 24);
			this->lbLogin->TabIndex = 11;
			this->lbLogin->TabStop = true;
			this->lbLogin->Text = L"login";
			this->lbLogin->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->lbLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registrationForm::lbLogin_LinkClicked);
			// 
			// lbLoginAsk
			// 
			this->lbLoginAsk->AutoSize = true;
			this->lbLoginAsk->BackColor = System::Drawing::Color::Transparent;
			this->lbLoginAsk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLoginAsk->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lbLoginAsk->Location = System::Drawing::Point(610, 455);
			this->lbLoginAsk->Name = L"lbLoginAsk";
			this->lbLoginAsk->Size = System::Drawing::Size(72, 13);
			this->lbLoginAsk->TabIndex = 12;
			this->lbLoginAsk->Text = L"Existing user\?";
			// 
			// registrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1245, 664);
			this->Controls->Add(this->lbLoginAsk);
			this->Controls->Add(this->lbLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->tbConfirmPswd);
			this->Controls->Add(this->lbconfirmPswd);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->lbUsername);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lbPassword);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbRegistration);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"registrationForm";
			this->Text = L"registrationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

public: bool switchToLogin = false;
public: User1^ user = nullptr;

private: System::Void lbLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ username = tbUsername->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPswd->Text;

		if (name->Length == 0 || username->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Please Enter Details for all Fields","Attentioin",MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password is not matched","password Error",MessageBoxButtons::OK);
			return;
		}

		try {

			String^ connString = "Data Source=M15PRO\\SQLEXPRESS;Initial Catalog=PersonalOraganizerDB;Integrated Security=True;Encrypt=False";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO User_Detail" + "(Name, Username, Password)" + "VALUES(@n, @Un, @Pd);";

			SqlCommand command(sqlQuery,% sqlconn);
			command.Parameters->AddWithValue("@n",name);
			command.Parameters->AddWithValue("@Un",username);
			command.Parameters->AddWithValue("@Pd",password);
			
			command.ExecuteNonQuery();
			user = gcnew User1;

			user->name = name;
			user->username = username;
			user->password = password;

			this-> Close();

		}
		catch(Exception^ ex){
			MessageBox::Show("Error: " + ex->Message,"Register Failure",MessageBoxButtons::OK);
		}
}
private: System::Void lbPassword_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
