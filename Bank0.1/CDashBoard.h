#pragma once

namespace Bank01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CDashBoard
	/// </summary>
	public ref class CDashBoard : public System::Windows::Forms::Form
	{
	public:
		CDashBoard(void)
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
		~CDashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  CDBTopBar;
	private: System::Windows::Forms::Button^  CDBExit;
	private: System::Windows::Forms::Panel^  CDBMAIN;
	private: System::Windows::Forms::Panel^  CDBSidePanel;

	private: System::Windows::Forms::Panel^  CDBHR;
	private: System::Windows::Forms::Button^  CDBADDAccount;
	private: System::Windows::Forms::Panel^  CDBLine;


	private: System::Windows::Forms::FlowLayoutPanel^  CDBAccountsList;
	private: System::Windows::Forms::Panel^  CDBContainer;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  CDBDeposit;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  Accounts;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  CDBAccountSave;
	private: System::Windows::Forms::TextBox^  CDBDuration;
	private: System::Windows::Forms::Label^  CDBlabel;
	private: System::Windows::Forms::TextBox^  CDBBlance;
	private: System::Windows::Forms::ComboBox^  CDBAccountType;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  CDBATlabel;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  BCDAccountID;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  CDBDeleteAccount;
	private: System::Windows::Forms::Label^  label6;




















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
			this->CDBTopBar = (gcnew System::Windows::Forms::Panel());
			this->CDBExit = (gcnew System::Windows::Forms::Button());
			this->CDBMAIN = (gcnew System::Windows::Forms::Panel());
			this->CDBContainer = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CDBDeleteAccount = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BCDAccountID = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CDBDeposit = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Accounts = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->CDBAccountSave = (gcnew System::Windows::Forms::Button());
			this->CDBDuration = (gcnew System::Windows::Forms::TextBox());
			this->CDBlabel = (gcnew System::Windows::Forms::Label());
			this->CDBBlance = (gcnew System::Windows::Forms::TextBox());
			this->CDBAccountType = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CDBATlabel = (gcnew System::Windows::Forms::Label());
			this->CDBSidePanel = (gcnew System::Windows::Forms::Panel());
			this->CDBAccountsList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CDBLine = (gcnew System::Windows::Forms::Panel());
			this->CDBHR = (gcnew System::Windows::Forms::Panel());
			this->CDBADDAccount = (gcnew System::Windows::Forms::Button());
			this->CDBTopBar->SuspendLayout();
			this->CDBMAIN->SuspendLayout();
			this->CDBContainer->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->CDBSidePanel->SuspendLayout();
			this->CDBAccountsList->SuspendLayout();
			this->SuspendLayout();
			// 
			// CDBTopBar
			// 
			this->CDBTopBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->CDBTopBar->Controls->Add(this->CDBExit);
			this->CDBTopBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBTopBar->Location = System::Drawing::Point(0, 0);
			this->CDBTopBar->Name = L"CDBTopBar";
			this->CDBTopBar->Size = System::Drawing::Size(831, 39);
			this->CDBTopBar->TabIndex = 0;
			// 
			// CDBExit
			// 
			this->CDBExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->CDBExit->Cursor = System::Windows::Forms::Cursors::Default;
			this->CDBExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->CDBExit->FlatAppearance->BorderSize = 0;
			this->CDBExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBExit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CDBExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->CDBExit->Location = System::Drawing::Point(773, 0);
			this->CDBExit->Name = L"CDBExit";
			this->CDBExit->Size = System::Drawing::Size(58, 39);
			this->CDBExit->TabIndex = 0;
			this->CDBExit->Text = L"X";
			this->CDBExit->UseVisualStyleBackColor = false;
			this->CDBExit->Click += gcnew System::EventHandler(this, &CDashBoard::CDBExit_Click);
			// 
			// CDBMAIN
			// 
			this->CDBMAIN->Controls->Add(this->CDBContainer);
			this->CDBMAIN->Controls->Add(this->CDBSidePanel);
			this->CDBMAIN->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CDBMAIN->Location = System::Drawing::Point(0, 39);
			this->CDBMAIN->Name = L"CDBMAIN";
			this->CDBMAIN->Size = System::Drawing::Size(831, 477);
			this->CDBMAIN->TabIndex = 1;
			// 
			// CDBContainer
			// 
			this->CDBContainer->Controls->Add(this->panel1);
			this->CDBContainer->Controls->Add(this->panel2);
			this->CDBContainer->Dock = System::Windows::Forms::DockStyle::Right;
			this->CDBContainer->Location = System::Drawing::Point(240, 0);
			this->CDBContainer->Name = L"CDBContainer";
			this->CDBContainer->Size = System::Drawing::Size(591, 477);
			this->CDBContainer->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->CDBDeleteAccount);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->BCDAccountID);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->CDBDeposit);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->Accounts);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(591, 477);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CDashBoard::panel1_Paint_2);
			// 
			// CDBDeleteAccount
			// 
			this->CDBDeleteAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBDeleteAccount->Location = System::Drawing::Point(406, 419);
			this->CDBDeleteAccount->Name = L"CDBDeleteAccount";
			this->CDBDeleteAccount->Size = System::Drawing::Size(134, 29);
			this->CDBDeleteAccount->TabIndex = 11;
			this->CDBDeleteAccount->Text = L"delete";
			this->CDBDeleteAccount->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(227, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"months";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(227, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Balance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Depit";
			// 
			// BCDAccountID
			// 
			this->BCDAccountID->AutoSize = true;
			this->BCDAccountID->Location = System::Drawing::Point(64, 174);
			this->BCDAccountID->Name = L"BCDAccountID";
			this->BCDAccountID->Size = System::Drawing::Size(19, 16);
			this->BCDAccountID->TabIndex = 6;
			this->BCDAccountID->Text = L"ID";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->panel3->Location = System::Drawing::Point(0, 136);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(591, 2);
			this->panel3->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(406, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// CDBDeposit
			// 
			this->CDBDeposit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->CDBDeposit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBDeposit->Location = System::Drawing::Point(406, 25);
			this->CDBDeposit->Name = L"CDBDeposit";
			this->CDBDeposit->Size = System::Drawing::Size(134, 24);
			this->CDBDeposit->TabIndex = 2;
			this->CDBDeposit->Text = L"Dsposit";
			this->CDBDeposit->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 21);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Enter Balance";
			// 
			// Accounts
			// 
			this->Accounts->FormattingEnabled = true;
			this->Accounts->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Cash" });
			this->Accounts->Location = System::Drawing::Point(58, 25);
			this->Accounts->Name = L"Accounts";
			this->Accounts->Size = System::Drawing::Size(188, 24);
			this->Accounts->TabIndex = 0;
			this->Accounts->Text = L"Choose Payments";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->CDBAccountSave);
			this->panel2->Controls->Add(this->CDBDuration);
			this->panel2->Controls->Add(this->CDBlabel);
			this->panel2->Controls->Add(this->CDBBlance);
			this->panel2->Controls->Add(this->CDBAccountType);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->CDBATlabel);
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(591, 477);
			this->panel2->TabIndex = 3;
			// 
			// CDBAccountSave
			// 
			this->CDBAccountSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->CDBAccountSave->FlatAppearance->BorderSize = 0;
			this->CDBAccountSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBAccountSave->Location = System::Drawing::Point(381, 343);
			this->CDBAccountSave->Name = L"CDBAccountSave";
			this->CDBAccountSave->Size = System::Drawing::Size(134, 40);
			this->CDBAccountSave->TabIndex = 6;
			this->CDBAccountSave->Text = L"SAVE";
			this->CDBAccountSave->UseVisualStyleBackColor = false;
			// 
			// CDBDuration
			// 
			this->CDBDuration->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->CDBDuration->Location = System::Drawing::Point(319, 173);
			this->CDBDuration->Name = L"CDBDuration";
			this->CDBDuration->Size = System::Drawing::Size(209, 23);
			this->CDBDuration->TabIndex = 5;
			// 
			// CDBlabel
			// 
			this->CDBlabel->AutoSize = true;
			this->CDBlabel->Location = System::Drawing::Point(74, 177);
			this->CDBlabel->Name = L"CDBlabel";
			this->CDBlabel->Size = System::Drawing::Size(60, 16);
			this->CDBlabel->TabIndex = 4;
			this->CDBlabel->Text = L"Duration :";
			// 
			// CDBBlance
			// 
			this->CDBBlance->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->CDBBlance->Location = System::Drawing::Point(319, 106);
			this->CDBBlance->Name = L"CDBBlance";
			this->CDBBlance->Size = System::Drawing::Size(209, 23);
			this->CDBBlance->TabIndex = 3;
			// 
			// CDBAccountType
			// 
			this->CDBAccountType->FormattingEnabled = true;
			this->CDBAccountType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Saving Account", L"Credit Account", L"Loan Account" });
			this->CDBAccountType->Location = System::Drawing::Point(319, 43);
			this->CDBAccountType->Name = L"CDBAccountType";
			this->CDBAccountType->Size = System::Drawing::Size(209, 24);
			this->CDBAccountType->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Blance :";
			// 
			// CDBATlabel
			// 
			this->CDBATlabel->AutoSize = true;
			this->CDBATlabel->Location = System::Drawing::Point(74, 51);
			this->CDBATlabel->Name = L"CDBATlabel";
			this->CDBATlabel->Size = System::Drawing::Size(133, 16);
			this->CDBATlabel->TabIndex = 0;
			this->CDBATlabel->Text = L"Choose Account Type :";
			// 
			// CDBSidePanel
			// 
			this->CDBSidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->CDBSidePanel->Controls->Add(this->CDBAccountsList);
			this->CDBSidePanel->Controls->Add(this->CDBLine);
			this->CDBSidePanel->Controls->Add(this->CDBHR);
			this->CDBSidePanel->Controls->Add(this->CDBADDAccount);
			this->CDBSidePanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->CDBSidePanel->Location = System::Drawing::Point(0, 0);
			this->CDBSidePanel->Name = L"CDBSidePanel";
			this->CDBSidePanel->Size = System::Drawing::Size(242, 477);
			this->CDBSidePanel->TabIndex = 0;
			this->CDBSidePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CDashBoard::panel1_Paint);
			// 
			// CDBAccountsList
			// 
			this->CDBAccountsList->AutoScroll = true;
			this->CDBAccountsList->Controls->Add(this->label6);
			this->CDBAccountsList->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBAccountsList->Location = System::Drawing::Point(0, 53);
			this->CDBAccountsList->Name = L"CDBAccountsList";
			this->CDBAccountsList->Size = System::Drawing::Size(242, 421);
			this->CDBAccountsList->TabIndex = 5;
			this->CDBAccountsList->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CDashBoard::CDBAccountsList_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->label6->Location = System::Drawing::Point(3, 0);
			this->label6->MaximumSize = System::Drawing::Size(242, 0);
			this->label6->MinimumSize = System::Drawing::Size(236, 0);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(16, 8, 8, 8);
			this->label6->Size = System::Drawing::Size(236, 50);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Account Type\r\nID\r\n";
			// 
			// CDBLine
			// 
			this->CDBLine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->CDBLine->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBLine->Location = System::Drawing::Point(0, 52);
			this->CDBLine->Name = L"CDBLine";
			this->CDBLine->Size = System::Drawing::Size(242, 1);
			this->CDBLine->TabIndex = 4;
			this->CDBLine->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CDashBoard::CDBLine_Paint);
			// 
			// CDBHR
			// 
			this->CDBHR->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBHR->Location = System::Drawing::Point(0, 49);
			this->CDBHR->Name = L"CDBHR";
			this->CDBHR->Size = System::Drawing::Size(242, 3);
			this->CDBHR->TabIndex = 3;
			// 
			// CDBADDAccount
			// 
			this->CDBADDAccount->BackColor = System::Drawing::Color::Transparent;
			this->CDBADDAccount->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBADDAccount->FlatAppearance->BorderSize = 0;
			this->CDBADDAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBADDAccount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->CDBADDAccount->Location = System::Drawing::Point(0, 0);
			this->CDBADDAccount->Name = L"CDBADDAccount";
			this->CDBADDAccount->Size = System::Drawing::Size(242, 49);
			this->CDBADDAccount->TabIndex = 2;
			this->CDBADDAccount->Text = L"ADD NEW ACCOUNT";
			this->CDBADDAccount->UseVisualStyleBackColor = false;
			this->CDBADDAccount->Click += gcnew System::EventHandler(this, &CDashBoard::CDBADDAccount_Click);
			// 
			// CDashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(831, 516);
			this->Controls->Add(this->CDBMAIN);
			this->Controls->Add(this->CDBTopBar);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"CDashBoard";
			this->Text = L"CDashBoard";
			this->CDBTopBar->ResumeLayout(false);
			this->CDBMAIN->ResumeLayout(false);
			this->CDBContainer->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->CDBSidePanel->ResumeLayout(false);
			this->CDBAccountsList->ResumeLayout(false);
			this->CDBAccountsList->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CDBExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}



private: System::Void CDBAddAcount(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CDBSideBar_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void CDBADDAccount_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CDBAccountDetails_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void CDBAccountsList_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void CDBLine_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel1_Paint_2(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
