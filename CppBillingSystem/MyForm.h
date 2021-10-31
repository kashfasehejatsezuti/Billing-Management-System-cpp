#pragma once

namespace CppBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{    
		double bread = 1.89;
		double rice = 1.99;
		double milk = 0.80;
		double  eggs = 2.10;
		double beans = 1.85;
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;



	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnTotal;
	private: System::Windows::Forms::Button^ btnReceipt;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RichTextBox^ rtReceipt;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblBread;

	private: System::Windows::Forms::NumericUpDown^ numBread;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ numBeans;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ numEggs;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numMilk;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numRice;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ lblnumItem;



	private: System::Windows::Forms::Label^ lblCostItem;


	private: System::Windows::Forms::Label^ lblBeans;

	private: System::Windows::Forms::Label^ lblEggs;

	private: System::Windows::Forms::Label^ lblMilk;

	private: System::Windows::Forms::Label^ lblRice;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;

















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lblnumItem = (gcnew System::Windows::Forms::Label());
			this->lblCostItem = (gcnew System::Windows::Forms::Label());
			this->lblBeans = (gcnew System::Windows::Forms::Label());
			this->lblEggs = (gcnew System::Windows::Forms::Label());
			this->lblMilk = (gcnew System::Windows::Forms::Label());
			this->lblRice = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numBeans = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numEggs = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numMilk = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numRice = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblBread = (gcnew System::Windows::Forms::Label());
			this->numBread = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rtReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBeans))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEggs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Navy;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1468, 708);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->lblnumItem);
			this->panel3->Controls->Add(this->lblCostItem);
			this->panel3->Controls->Add(this->lblBeans);
			this->panel3->Controls->Add(this->lblEggs);
			this->panel3->Controls->Add(this->lblMilk);
			this->panel3->Controls->Add(this->lblRice);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->numBeans);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->numEggs);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->numMilk);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->numRice);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->lblBread);
			this->panel3->Controls->Add(this->numBread);
			this->panel3->Controls->Add(this->label2);
			this->panel3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Location = System::Drawing::Point(16, 119);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(834, 448);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label16->Location = System::Drawing::Point(588, 3);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(222, 38);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Cost of Items";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label14->Location = System::Drawing::Point(238, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(272, 38);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Number of Items";
			// 
			// lblnumItem
			// 
			this->lblnumItem->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblnumItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblnumItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblnumItem->Location = System::Drawing::Point(241, 364);
			this->lblnumItem->Name = L"lblnumItem";
			this->lblnumItem->Size = System::Drawing::Size(264, 39);
			this->lblnumItem->TabIndex = 27;
			this->lblnumItem->Text = L"0";
			this->lblnumItem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCostItem
			// 
			this->lblCostItem->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblCostItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCostItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCostItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblCostItem->Location = System::Drawing::Point(597, 358);
			this->lblCostItem->Name = L"lblCostItem";
			this->lblCostItem->Size = System::Drawing::Size(196, 39);
			this->lblCostItem->TabIndex = 26;
			this->lblCostItem->Text = L"$0.0";
			this->lblCostItem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblCostItem->Click += gcnew System::EventHandler(this, &MyForm::label12_Click_1);
			// 
			// lblBeans
			// 
			this->lblBeans->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBeans->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblBeans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBeans->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblBeans->Location = System::Drawing::Point(597, 301);
			this->lblBeans->Name = L"lblBeans";
			this->lblBeans->Size = System::Drawing::Size(196, 39);
			this->lblBeans->TabIndex = 25;
			this->lblBeans->Text = L"$0.0";
			this->lblBeans->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblEggs
			// 
			this->lblEggs->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblEggs->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblEggs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEggs->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblEggs->Location = System::Drawing::Point(597, 245);
			this->lblEggs->Name = L"lblEggs";
			this->lblEggs->Size = System::Drawing::Size(196, 39);
			this->lblEggs->TabIndex = 24;
			this->lblEggs->Text = L"$0.0";
			this->lblEggs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEggs->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
			// 
			// lblMilk
			// 
			this->lblMilk->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblMilk->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMilk->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblMilk->Location = System::Drawing::Point(597, 187);
			this->lblMilk->Name = L"lblMilk";
			this->lblMilk->Size = System::Drawing::Size(196, 39);
			this->lblMilk->TabIndex = 23;
			this->lblMilk->Text = L"$0.0";
			this->lblMilk->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblRice
			// 
			this->lblRice->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblRice->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblRice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRice->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblRice->Location = System::Drawing::Point(597, 128);
			this->lblRice->Name = L"lblRice";
			this->lblRice->Size = System::Drawing::Size(196, 39);
			this->lblRice->TabIndex = 22;
			this->lblRice->Text = L"$0.0";
			this->lblRice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label15->Location = System::Drawing::Point(29, 3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(101, 38);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Items";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(30, 358);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(160, 36);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Total Cost";
			// 
			// numBeans
			// 
			this->numBeans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBeans->Location = System::Drawing::Point(247, 301);
			this->numBeans->Name = L"numBeans";
			this->numBeans->Size = System::Drawing::Size(258, 41);
			this->numBeans->TabIndex = 13;
			this->numBeans->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBeans->ValueChanged += gcnew System::EventHandler(this, &MyForm::numBeans_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(30, 301);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 36);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Beans";
			// 
			// numEggs
			// 
			this->numEggs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numEggs->Location = System::Drawing::Point(247, 243);
			this->numEggs->Name = L"numEggs";
			this->numEggs->Size = System::Drawing::Size(258, 41);
			this->numEggs->TabIndex = 10;
			this->numEggs->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numEggs->ValueChanged += gcnew System::EventHandler(this, &MyForm::numEggs_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(30, 243);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 36);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Eggs";
			// 
			// numMilk
			// 
			this->numMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMilk->Location = System::Drawing::Point(247, 187);
			this->numMilk->Name = L"numMilk";
			this->numMilk->Size = System::Drawing::Size(258, 41);
			this->numMilk->TabIndex = 7;
			this->numMilk->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numMilk->ValueChanged += gcnew System::EventHandler(this, &MyForm::numMilk_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(30, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 36);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Milk";
			// 
			// numRice
			// 
			this->numRice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numRice->Location = System::Drawing::Point(247, 128);
			this->numRice->Name = L"numRice";
			this->numRice->Size = System::Drawing::Size(258, 41);
			this->numRice->TabIndex = 4;
			this->numRice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numRice->ValueChanged += gcnew System::EventHandler(this, &MyForm::numRice_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(30, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 36);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Rice";
			// 
			// lblBread
			// 
			this->lblBread->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBread->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBread->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblBread->Location = System::Drawing::Point(597, 71);
			this->lblBread->Name = L"lblBread";
			this->lblBread->Size = System::Drawing::Size(196, 39);
			this->lblBread->TabIndex = 2;
			this->lblBread->Text = L"$0.0";
			this->lblBread->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numBread
			// 
			this->numBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBread->Location = System::Drawing::Point(247, 69);
			this->numBread->Name = L"numBread";
			this->numBread->Size = System::Drawing::Size(258, 41);
			this->numBread->TabIndex = 1;
			this->numBread->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBread->ValueChanged += gcnew System::EventHandler(this, &MyForm::numBread_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(30, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 36);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Bread";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->btnTotal);
			this->panel5->Controls->Add(this->btnReceipt);
			this->panel5->Controls->Add(this->btnPrint);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnExit);
			this->panel5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel5->Location = System::Drawing::Point(16, 592);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1430, 88);
			this->panel5->TabIndex = 1;
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::Navy;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnTotal->Location = System::Drawing::Point(38, 9);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(250, 70);
			this->btnTotal->TabIndex = 4;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::Color::Navy;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceipt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnReceipt->Location = System::Drawing::Point(323, 10);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(254, 70);
			this->btnReceipt->TabIndex = 3;
			this->btnReceipt->Text = L"Receipt";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::btnReceipt_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::Navy;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPrint->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrint->Location = System::Drawing::Point(599, 10);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(250, 70);
			this->btnPrint->TabIndex = 2;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Navy;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnReset->Location = System::Drawing::Point(876, 10);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(250, 70);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Navy;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnExit->Location = System::Drawing::Point(1146, 10);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(250, 70);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->rtReceipt);
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel4->Location = System::Drawing::Point(866, 119);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(580, 448);
			this->panel4->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(213, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 38);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Receipt";
			// 
			// rtReceipt
			// 
			this->rtReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtReceipt->Location = System::Drawing::Point(26, 57);
			this->rtReceipt->Name = L"rtReceipt";
			this->rtReceipt->Size = System::Drawing::Size(530, 378);
			this->rtReceipt->TabIndex = 0;
			this->rtReceipt->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->label1);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Location = System::Drawing::Point(16, 17);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1430, 80);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(237, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(824, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Billing Management Systems";
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &MyForm::printPreviewDialog1_Load);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1492, 741);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBeans))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEggs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}








	private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	


	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)

	{
		try
		{
			System::Windows::Forms::DialogResult iExit;
			iExit = MessageBox::Show("Confirm if you want to exit", "Billing  Management System", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();

			}
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}


	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e)

	{
		try
		{
			numBread->Value = 0;
			numRice->Value = 0;
			numMilk->Value = 0;
			numEggs->Value = 0;
			numBeans->Value = 0;

			rtReceipt->Clear();

			lblBread->Text = "$0.0";
			lblRice->Text = "$0.0";
			lblEggs->Text = "$0.0";
			lblMilk->Text = "$0.0";
			lblBeans->Text = "$0.0"; 
			lblnumItem->Text = "0";
			lblCostItem->Text = "$0.0";


		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	
	}

	 private: System::Void numBread_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	      {

		 double i = Convert::ToDouble(numBread->Value);
		 lblBread->Text = String::Format("{0:c2}", i * bread);

	      }
     private: System::Void numRice_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	 
	      {
		 double i = Convert::ToDouble(numRice->Value);
		 lblRice->Text = String::Format("{0:c2}", i * rice);


          }
     private: System::Void numMilk_ValueChanged(System::Object^ sender, System::EventArgs^ e)
           {
	       double i = Convert::ToDouble(numMilk->Value);
	       lblMilk->Text = String::Format("{0:c2}", i * milk);


            }
     private: System::Void numEggs_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	 {
		 double i = Convert::ToDouble(numEggs->Value);
		 lblEggs->Text = String::Format("{0:c2}", i * eggs);


	 }
     private: System::Void numBeans_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	 {
		 double i = Convert::ToDouble(numBeans->Value);
		 lblBeans->Text = String::Format("{0:c2}", i * beans);


	 }

    private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) 
	{
        
		double c[6],l[6];
		l[0] = Convert::ToDouble(numBread->Value);
		l[1] = Convert::ToDouble(numRice->Value);
		l[2] = Convert::ToDouble(numMilk->Value);
		l[3] = Convert::ToDouble(numEggs->Value);
		l[4] = Convert::ToDouble(numBeans->Value);

		l[5] = l[0] + l[1] + l[2] + l[3] + l[4];
		lblnumItem->Text = Convert::ToString(l[5]);

		c[0] = l[0] * bread;
		c[1] = l[1] * rice;
		c[2] = l[2] * milk;
		c[3] = l[3] * eggs;
		c[4] = l[4] * beans;

		c[5] = c[0] + c[1] + c[2] + c[3] + c[4];
		//lblCostItem->Text = Convert::ToString(c[5]);
		lblCostItem->Text=String::Format("{0:c2}",c[5]);



	}


    private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) 
	    {
		rtReceipt->Clear();
		rtReceipt->AppendText(label15->Text + "\t"+"\t" + "\t" + label14->Text + "\t" + "\t" + label16->Text + "\n" + "\n");
		rtReceipt->AppendText(label2->Text + "\t" + "\t" + numBread->Value + "\t" + "\t"+"\t" + lblBread->Text + "\n" + "\n");
		rtReceipt->AppendText(label5->Text + "\t" + "\t" + numRice->Value + "\t" + "\t" + "\t" + lblRice->Text + "\n" + "\n");
		rtReceipt->AppendText(label7->Text + "\t" + "\t" + numMilk->Value + "\t" + "\t" + "\t" + lblMilk->Text + "\n" + "\n");
		rtReceipt->AppendText(label9->Text + "\t" + "\t" + numEggs->Value + "\t" + "\t" + "\t" + lblEggs->Text + "\n" + "\n");
		rtReceipt->AppendText(label11->Text + "\t" + "\t" + numBeans->Value + "\t" + "\t" + "\t" + lblBeans->Text + "\n" + "\n");
		rtReceipt->AppendText(label13->Text + "\t"  + lblnumItem->Text +"\t" + "\t" + "\t" + lblCostItem->Text +"\n" + "\n");

        }
       private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) 
	        {
		   printPreviewDialog1->ShowDialog();
            }

	   private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
	   
	   {
		   System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Time New Rome", 14, FontStyle::Regular);
		   e->Graphics->DrawString(rtReceipt->Text, fntString, Brushes::BlueViolet, 100, 100);

        }


};
}
   