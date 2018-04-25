#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Bank01 {

	/// <summary>
	/// Summary for Account
	/// </summary>
	public ref class Account : public System::Windows::Forms::UserControl
	{
	public:
		Account(void)
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
		~Account()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  CDBAccountID;
	protected:
	private: System::Windows::Forms::Label^  CDBAccountType;




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
			this->CDBAccountID = (gcnew System::Windows::Forms::Label());
			this->CDBAccountType = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CDBAccountID
			// 
			this->CDBAccountID->AutoSize = true;
			this->CDBAccountID->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBAccountID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.25F));
			this->CDBAccountID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->CDBAccountID->Location = System::Drawing::Point(16, 8);
			this->CDBAccountID->Name = L"CDBAccountID";
			this->CDBAccountID->Size = System::Drawing::Size(60, 21);
			this->CDBAccountID->TabIndex = 0;
			this->CDBAccountID->Text = L"label1";
			// 
			// CDBAccountType
			// 
			this->CDBAccountType->AutoSize = true;
			this->CDBAccountType->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBAccountType->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBAccountType->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->CDBAccountType->Location = System::Drawing::Point(16, 29);
			this->CDBAccountType->Name = L"CDBAccountType";
			this->CDBAccountType->Size = System::Drawing::Size(47, 17);
			this->CDBAccountType->TabIndex = 1;
			this->CDBAccountType->Text = L"label2";
			// 
			// Account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->CDBAccountType);
			this->Controls->Add(this->CDBAccountID);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Account";
			this->Padding = System::Windows::Forms::Padding(16, 8, 0, 8);
			this->Size = System::Drawing::Size(264, 50);
			this->Load += gcnew System::EventHandler(this, &Account::Account_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





	private: System::Void Account_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
