#pragma once
#include "Header.h"


namespace Bank01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Bunifu::Framework::UI::BunifuDragControl^  SignInDrag;
	private: System::Windows::Forms::Panel^  SignUpPanel;
	private: System::Windows::Forms::Panel^  SignInPanel;
	private: System::Windows::Forms::LinkLabel^  SignInLINK;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  SignInPassword;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  SignInID;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  registerExit;
	private: System::Windows::Forms::DateTimePicker^  SignUpBD;
	private: System::Windows::Forms::TextBox^  SignUpGender;
	private: System::Windows::Forms::TextBox^  SignUpNID;
	private: System::Windows::Forms::TextBox^  SignUpSName;
	private: System::Windows::Forms::TextBox^  SignUpEmail;
	private: System::Windows::Forms::TextBox^  SignUpPassword;
	private: System::Windows::Forms::TextBox^  SignUpREPassword;
	private: System::Windows::Forms::TextBox^  SignUpFName;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::LinkLabel^  SignUpLink;
	private: System::Windows::Forms::Button^  SignUpButton;
	private: System::ComponentModel::IContainer^  components;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->SignInDrag = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->registerExit = (gcnew System::Windows::Forms::Button());
			this->SignInPanel = (gcnew System::Windows::Forms::Panel());
			this->SignInLINK = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->SignInPassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SignInID = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SignUpPanel = (gcnew System::Windows::Forms::Panel());
			this->SignUpLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SignUpButton = (gcnew System::Windows::Forms::Button());
			this->SignUpBD = (gcnew System::Windows::Forms::DateTimePicker());
			this->SignUpGender = (gcnew System::Windows::Forms::TextBox());
			this->SignUpNID = (gcnew System::Windows::Forms::TextBox());
			this->SignUpSName = (gcnew System::Windows::Forms::TextBox());
			this->SignUpEmail = (gcnew System::Windows::Forms::TextBox());
			this->SignUpPassword = (gcnew System::Windows::Forms::TextBox());
			this->SignUpREPassword = (gcnew System::Windows::Forms::TextBox());
			this->SignUpFName = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->SignInPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SignUpPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// SignInDrag
			// 
			this->SignInDrag->Fixed = true;
			this->SignInDrag->Horizontal = true;
			this->SignInDrag->TargetControl = this->panel1;
			this->SignInDrag->Vertical = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->registerExit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(354, 32);
			this->panel1->TabIndex = 9;
			// 
			// registerExit
			// 
			this->registerExit->AutoSize = true;
			this->registerExit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->registerExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->registerExit->FlatAppearance->BorderSize = 0;
			this->registerExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerExit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.25F));
			this->registerExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->registerExit->Location = System::Drawing::Point(319, 0);
			this->registerExit->Name = L"registerExit";
			this->registerExit->Size = System::Drawing::Size(35, 32);
			this->registerExit->TabIndex = 9;
			this->registerExit->Text = L"X";
			this->registerExit->UseVisualStyleBackColor = true;
			this->registerExit->Click += gcnew System::EventHandler(this, &RegistrationForm::registerExit_Click);
			// 
			// SignInPanel
			// 
			this->SignInPanel->Controls->Add(this->SignInLINK);
			this->SignInPanel->Controls->Add(this->button1);
			this->SignInPanel->Controls->Add(this->pictureBox3);
			this->SignInPanel->Controls->Add(this->SignInPassword);
			this->SignInPanel->Controls->Add(this->pictureBox2);
			this->SignInPanel->Controls->Add(this->SignInID);
			this->SignInPanel->Controls->Add(this->pictureBox1);
			this->SignInPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->SignInPanel->Location = System::Drawing::Point(0, 33);
			this->SignInPanel->Name = L"SignInPanel";
			this->SignInPanel->Size = System::Drawing::Size(354, 538);
			this->SignInPanel->TabIndex = 10;
			// 
			// SignInLINK
			// 
			this->SignInLINK->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignInLINK->AutoSize = true;
			this->SignInLINK->DisabledLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignInLINK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInLINK->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignInLINK->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->SignInLINK->Location = System::Drawing::Point(141, 495);
			this->SignInLINK->Name = L"SignInLINK";
			this->SignInLINK->Size = System::Drawing::Size(66, 21);
			this->SignInLINK->TabIndex = 13;
			this->SignInLINK->TabStop = true;
			this->SignInLINK->Text = L"Sing UP";
			this->SignInLINK->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignInLINK->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::switcher);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 393);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(330, 32);
			this->button1->TabIndex = 12;
			this->button1->Text = L"SIGN IN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrationForm::SignInValidation);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(22, 292);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(28, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// SignInPassword
			// 
			this->SignInPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignInPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignInPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignInPassword->Location = System::Drawing::Point(62, 292);
			this->SignInPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SignInPassword->Name = L"SignInPassword";
			this->SignInPassword->Size = System::Drawing::Size(268, 28);
			this->SignInPassword->TabIndex = 10;
			this->SignInPassword->Text = L"Enter Your Password";
			this->SignInPassword->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignInPassword->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(22, 228);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(28, 28);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// SignInID
			// 
			this->SignInID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignInID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignInID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignInID->Location = System::Drawing::Point(62, 228);
			this->SignInID->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SignInID->Name = L"SignInID";
			this->SignInID->Size = System::Drawing::Size(268, 28);
			this->SignInID->TabIndex = 8;
			this->SignInID->Text = L"Enter Your User ID";
			this->SignInID->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignInID->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(104, 43);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 155);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// SignUpPanel
			// 
			this->SignUpPanel->Controls->Add(this->SignUpLink);
			this->SignUpPanel->Controls->Add(this->SignUpButton);
			this->SignUpPanel->Controls->Add(this->SignUpBD);
			this->SignUpPanel->Controls->Add(this->SignUpGender);
			this->SignUpPanel->Controls->Add(this->SignUpNID);
			this->SignUpPanel->Controls->Add(this->SignUpSName);
			this->SignUpPanel->Controls->Add(this->SignUpEmail);
			this->SignUpPanel->Controls->Add(this->SignUpPassword);
			this->SignUpPanel->Controls->Add(this->SignUpREPassword);
			this->SignUpPanel->Controls->Add(this->SignUpFName);
			this->SignUpPanel->Controls->Add(this->pictureBox4);
			this->SignUpPanel->Location = System::Drawing::Point(0, 33);
			this->SignUpPanel->Name = L"SignUpPanel";
			this->SignUpPanel->Size = System::Drawing::Size(354, 538);
			this->SignUpPanel->TabIndex = 12;
			// 
			// SignUpLink
			// 
			this->SignUpLink->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignUpLink->AutoSize = true;
			this->SignUpLink->DisabledLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignUpLink->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUpLink->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignUpLink->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->SignUpLink->Location = System::Drawing::Point(141, 495);
			this->SignUpLink->Name = L"SignUpLink";
			this->SignUpLink->Size = System::Drawing::Size(63, 21);
			this->SignUpLink->TabIndex = 19;
			this->SignUpLink->TabStop = true;
			this->SignUpLink->Text = L"Sing IN";
			this->SignUpLink->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->SignUpLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::switcher);
			// 
			// SignUpButton
			// 
			this->SignUpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignUpButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->SignUpButton->ForeColor = System::Drawing::Color::White;
			this->SignUpButton->Location = System::Drawing::Point(12, 438);
			this->SignUpButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SignUpButton->Name = L"SignUpButton";
			this->SignUpButton->Size = System::Drawing::Size(330, 32);
			this->SignUpButton->TabIndex = 18;
			this->SignUpButton->Text = L"SIGN UP";
			this->SignUpButton->UseVisualStyleBackColor = false;
			this->SignUpButton->Click += gcnew System::EventHandler(this, &RegistrationForm::SignUpValidation);
			// 
			// SignUpBD
			// 
			this->SignUpBD->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpBD->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpBD->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpBD->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpBD->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpBD->CustomFormat = L"dd, MMMM, yyyy";
			this->SignUpBD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpBD->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->SignUpBD->Location = System::Drawing::Point(22, 377);
			this->SignUpBD->MaxDate = System::DateTime(2000, 12, 31, 0, 0, 0, 0);
			this->SignUpBD->MinDate = System::DateTime(1920, 1, 1, 0, 0, 0, 0);
			this->SignUpBD->Name = L"SignUpBD";
			this->SignUpBD->Size = System::Drawing::Size(227, 24);
			this->SignUpBD->TabIndex = 17;
			this->SignUpBD->Value = System::DateTime(1998, 12, 31, 0, 0, 0, 0);
			// 
			// SignUpGender
			// 
			this->SignUpGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpGender->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpGender->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpGender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpGender->Location = System::Drawing::Point(183, 316);
			this->SignUpGender->Name = L"SignUpGender";
			this->SignUpGender->Size = System::Drawing::Size(147, 24);
			this->SignUpGender->TabIndex = 15;
			this->SignUpGender->Text = L"GENDER";
			this->SignUpGender->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpGender->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpGender->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// SignUpNID
			// 
			this->SignUpNID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpNID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpNID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpNID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpNID->Location = System::Drawing::Point(22, 316);
			this->SignUpNID->Name = L"SignUpNID";
			this->SignUpNID->Size = System::Drawing::Size(127, 24);
			this->SignUpNID->TabIndex = 14;
			this->SignUpNID->Text = L"NATIONAL ID";
			this->SignUpNID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpNID->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpNID->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// SignUpSName
			// 
			this->SignUpSName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpSName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpSName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpSName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpSName->Location = System::Drawing::Point(183, 108);
			this->SignUpSName->Name = L"SignUpSName";
			this->SignUpSName->Size = System::Drawing::Size(147, 24);
			this->SignUpSName->TabIndex = 13;
			this->SignUpSName->Text = L"SECOND NAME";
			this->SignUpSName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpSName->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpSName->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// SignUpEmail
			// 
			this->SignUpEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpEmail->Location = System::Drawing::Point(22, 159);
			this->SignUpEmail->Name = L"SignUpEmail";
			this->SignUpEmail->Size = System::Drawing::Size(308, 24);
			this->SignUpEmail->TabIndex = 12;
			this->SignUpEmail->Text = L"EMAIL";
			this->SignUpEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpEmail->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpEmail->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// SignUpPassword
			// 
			this->SignUpPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpPassword->Location = System::Drawing::Point(22, 205);
			this->SignUpPassword->Name = L"SignUpPassword";
			this->SignUpPassword->Size = System::Drawing::Size(185, 24);
			this->SignUpPassword->TabIndex = 11;
			this->SignUpPassword->Text = L"PASSWORD";
			this->SignUpPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpPassword->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpPassword->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// SignUpREPassword
			// 
			this->SignUpREPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpREPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpREPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpREPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpREPassword->Location = System::Drawing::Point(22, 261);
			this->SignUpREPassword->Name = L"SignUpREPassword";
			this->SignUpREPassword->Size = System::Drawing::Size(185, 24);
			this->SignUpREPassword->TabIndex = 10;
			this->SignUpREPassword->Text = L"RE ENTER PASSWORD";
			this->SignUpREPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpREPassword->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpREPassword->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// SignUpFName
			// 
			this->SignUpFName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SignUpFName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SignUpFName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.25F));
			this->SignUpFName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->SignUpFName->Location = System::Drawing::Point(22, 108);
			this->SignUpFName->Name = L"SignUpFName";
			this->SignUpFName->Size = System::Drawing::Size(127, 24);
			this->SignUpFName->TabIndex = 9;
			this->SignUpFName->Text = L"FIRST NAME";
			this->SignUpFName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SignUpFName->Enter += gcnew System::EventHandler(this, &RegistrationForm::TextBoxEnter);
			this->SignUpFName->Leave += gcnew System::EventHandler(this, &RegistrationForm::TextBoxLeave);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(157, 6);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(59, 64);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(354, 571);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->SignInPanel);
			this->Controls->Add(this->SignUpPanel);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistrationForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->SignInPanel->ResumeLayout(false);
			this->SignInPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->SignUpPanel->ResumeLayout(false);
			this->SignUpPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void registerExit_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	Application::Exit();
}

private: System::Void switcher(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	LinkLabel^ ll = (LinkLabel^)sender;
	if (ll->Name == "SignUpLink")SignInPanel->BringToFront();
	else
		SignUpPanel->BringToFront();

}


private: System::Void TextBoxEnter(System::Object^  sender, System::EventArgs^  e) {
	TextBox^ tt = (TextBox^)sender;
	tt->Text = "";
}

private: System::Void TextBoxLeave(System::Object^  sender, System::EventArgs^  e) {
	TextBox^ tt = (TextBox^)sender;
	if (tt->Text->Length == 0)
	{
		if (tt->Name == "SignUpFName")tt->Text = "First Name";
		else if (tt->Name == "SignUpSName")tt->Text = "SECOND Name";
		else if (tt->Name == "SignUpGender")tt->Text = "Gender";
		else if (tt->Name == "SignUpPassword")tt->Text = "PASSWORD";
		else if (tt->Name == "SignUpREPassword")tt->Text = "RE ENTER PASSWORD";
		else if (tt->Name == "SignUpNID")tt->Text = "NATIONAL ID";
		else if (tt->Name == "SignUpEmail")tt->Text = "EMAIL";
		else if (tt->Name == "SignInID")tt->Text = "Enter Your User ID";
		else if (tt->Name == "SignInPassword")tt->Text = "Enter Your Password";
		
	}
}

private: System::Void SignUpValidation(System::Object^  sender, System::EventArgs^  e) {
	SignInPanel->BringToFront();
	SignUpFName->Text = "First Name";
	SignUpSName->Text = "Second Name";
	SignUpGender->Text = "Gender";
	SignUpPassword->Text = "PASSWORD";
	SignUpREPassword->Text = "RE ENTER PASSWORD";
	SignUpNID->Text = "NATIONAL ID";
	SignUpEmail->Text = "EMAIL";
	SignUpBD->Value = SignUpBD->MaxDate;
}
private: System::Void SignInValidation(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Bank01::CDashBoard^ cd=gcnew CDashBoard();
	cd->Show();
}
};
}
