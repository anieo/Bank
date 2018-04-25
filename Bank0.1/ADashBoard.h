#pragma once

namespace Bank01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ADashBoard
	/// </summary>
	public ref class ADashBoard : public System::Windows::Forms::Form
	{
	public:
		ADashBoard(void)
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
		~ADashBoard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:













	private: System::Windows::Forms::FlowLayoutPanel^  CDBAccountsList;

	private: System::Windows::Forms::Panel^  CDBLine;
	private: System::Windows::Forms::Panel^  CDBSidePanel;









	private: System::Windows::Forms::Panel^  CDBMAIN;
	private: System::Windows::Forms::Button^  CDBExit;
	private: System::Windows::Forms::Panel^  CDBTopBar;
	private: System::Windows::Forms::Panel^  CDBHR;
	private: System::Windows::Forms::Button^  CDBADDAccount;
	private: System::Windows::Forms::Panel^  ADBContainer;


	private: System::Windows::Forms::Panel^  ADBReport;
	private: System::Windows::Forms::DataGridView^  ADBAccountLog;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  ADBClints;



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
			this->CDBAccountsList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->CDBLine = (gcnew System::Windows::Forms::Panel());
			this->CDBSidePanel = (gcnew System::Windows::Forms::Panel());
			this->CDBMAIN = (gcnew System::Windows::Forms::Panel());
			this->CDBExit = (gcnew System::Windows::Forms::Button());
			this->CDBTopBar = (gcnew System::Windows::Forms::Panel());
			this->CDBHR = (gcnew System::Windows::Forms::Panel());
			this->CDBADDAccount = (gcnew System::Windows::Forms::Button());
			this->ADBContainer = (gcnew System::Windows::Forms::Panel());
			this->ADBReport = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ADBClints = (gcnew System::Windows::Forms::DataGridView());
			this->ADBAccountLog = (gcnew System::Windows::Forms::DataGridView());
			this->CDBSidePanel->SuspendLayout();
			this->CDBMAIN->SuspendLayout();
			this->CDBTopBar->SuspendLayout();
			this->ADBContainer->SuspendLayout();
			this->ADBReport->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADBClints))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADBAccountLog))->BeginInit();
			this->SuspendLayout();
			// 
			// CDBAccountsList
			// 
			this->CDBAccountsList->AutoScroll = true;
			this->CDBAccountsList->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBAccountsList->Location = System::Drawing::Point(0, 53);
			this->CDBAccountsList->Name = L"CDBAccountsList";
			this->CDBAccountsList->Size = System::Drawing::Size(250, 421);
			this->CDBAccountsList->TabIndex = 5;
			// 
			// CDBLine
			// 
			this->CDBLine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->CDBLine->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBLine->Location = System::Drawing::Point(0, 52);
			this->CDBLine->Name = L"CDBLine";
			this->CDBLine->Size = System::Drawing::Size(250, 1);
			this->CDBLine->TabIndex = 4;
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
			this->CDBSidePanel->Size = System::Drawing::Size(250, 478);
			this->CDBSidePanel->TabIndex = 0;
			// 
			// CDBMAIN
			// 
			this->CDBMAIN->Controls->Add(this->ADBContainer);
			this->CDBMAIN->Controls->Add(this->CDBSidePanel);
			this->CDBMAIN->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CDBMAIN->Location = System::Drawing::Point(0, 39);
			this->CDBMAIN->Name = L"CDBMAIN";
			this->CDBMAIN->Size = System::Drawing::Size(830, 478);
			this->CDBMAIN->TabIndex = 3;
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
			this->CDBExit->Location = System::Drawing::Point(772, 0);
			this->CDBExit->Name = L"CDBExit";
			this->CDBExit->Size = System::Drawing::Size(58, 39);
			this->CDBExit->TabIndex = 0;
			this->CDBExit->Text = L"X";
			this->CDBExit->UseVisualStyleBackColor = false;
			this->CDBExit->Click += gcnew System::EventHandler(this, &ADashBoard::CDBExit_Click);
			// 
			// CDBTopBar
			// 
			this->CDBTopBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->CDBTopBar->Controls->Add(this->CDBExit);
			this->CDBTopBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBTopBar->Location = System::Drawing::Point(0, 0);
			this->CDBTopBar->Name = L"CDBTopBar";
			this->CDBTopBar->Size = System::Drawing::Size(830, 39);
			this->CDBTopBar->TabIndex = 2;
			// 
			// CDBHR
			// 
			this->CDBHR->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBHR->Location = System::Drawing::Point(0, 49);
			this->CDBHR->Name = L"CDBHR";
			this->CDBHR->Size = System::Drawing::Size(250, 3);
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
			this->CDBADDAccount->Size = System::Drawing::Size(250, 49);
			this->CDBADDAccount->TabIndex = 2;
			this->CDBADDAccount->Text = L"Show Full Reports";
			this->CDBADDAccount->UseVisualStyleBackColor = false;
			// 
			// ADBContainer
			// 
			this->ADBContainer->Controls->Add(this->ADBReport);
			this->ADBContainer->Controls->Add(this->panel1);
			this->ADBContainer->Location = System::Drawing::Point(248, 0);
			this->ADBContainer->Name = L"ADBContainer";
			this->ADBContainer->Size = System::Drawing::Size(582, 478);
			this->ADBContainer->TabIndex = 1;
			// 
			// ADBReport
			// 
			this->ADBReport->Controls->Add(this->ADBAccountLog);
			this->ADBReport->Location = System::Drawing::Point(0, 0);
			this->ADBReport->Name = L"ADBReport";
			this->ADBReport->Size = System::Drawing::Size(582, 478);
			this->ADBReport->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->ADBClints);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(590, 486);
			this->panel1->TabIndex = 4;
			// 
			// ADBClints
			// 
			this->ADBClints->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ADBClints->Location = System::Drawing::Point(0, 0);
			this->ADBClints->Name = L"ADBClints";
			this->ADBClints->Size = System::Drawing::Size(582, 478);
			this->ADBClints->TabIndex = 3;
			// 
			// ADBAccountLog
			// 
			this->ADBAccountLog->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ADBAccountLog->Location = System::Drawing::Point(0, -3);
			this->ADBAccountLog->Name = L"ADBAccountLog";
			this->ADBAccountLog->Size = System::Drawing::Size(582, 478);
			this->ADBAccountLog->TabIndex = 0;
			// 
			// ADashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 517);
			this->Controls->Add(this->CDBMAIN);
			this->Controls->Add(this->CDBTopBar);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"ADashBoard";
			this->Text = L"ADashBoard";
			this->Load += gcnew System::EventHandler(this, &ADashBoard::ADashBoard_Load);
			this->CDBSidePanel->ResumeLayout(false);
			this->CDBMAIN->ResumeLayout(false);
			this->CDBTopBar->ResumeLayout(false);
			this->ADBContainer->ResumeLayout(false);
			this->ADBReport->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADBClints))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADBAccountLog))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ADashBoard_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void CDBExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
};
}
