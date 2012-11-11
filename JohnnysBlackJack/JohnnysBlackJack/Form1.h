/**********************************************************************
***********************************************************************
***********************************************************************
***																	***
***						ID INFORMATION								***
***                                                        			***
***   Programmers				:			Johnny Brinsko		 	***
***   Assignment #				:   		Program #2		   		***
***   Assignment Name			:			BlackJack				***
***   Course # and Title		:	   		CISC 192 - C++			***
***   Class Meeting Time		:	   		TTh 9:35 - 12:40		***
***   Instructor				:			Professor Forman		***
***   Hours						:			12						***
***   Difficulty				:			6						***
***   Completion Date			:			11/13/2012				***
***   Project Name				:  			JohnnysBlackJack		***	 
***																	***
***********************************************************************
***********************************************************************
***                                       							***
***						PROGRAM DESCRIPTION              			***
***																	***
***	 
***                                                         		***
***********************************************************************
***********************************************************************
***																	***
***					Event-Defined Function List						***
***                                                         		***
***		
***																	***
***********************************************************************
***********************************************************************
***																	***
***					Custom-Defined Function List					***
***                                                         		***
***		displayDateTime												***
***		
***																	***
***********************************************************************
***********************************************************************
***																	***
***                         CREDITS				                    ***
***                                                         		***
***   		Thanks for assistance and inspiration from:        		***
***                                                         		***
***				   Professor Forman and Tim							***
***                                                         		***
***   		Thanks for the opportunity to assist and inspire:     	***
***								                               		***
***				   Professor Forman and Tim							***
***                                                         		***
***********************************************************************
***********************************************************************
***																	***
***						      MEDIA				                    ***
***																	***
***		Background music during game:								***
***		http://www.youtube.com/watch?v=Y6ljFaKRTrI					***
***																	***
***		Farewell music:												***
***		http://www.gamefront.com/files/12899141/Portal_Radio_Loop	***
***																	***
***		Jose's cards from class, provided by Professor Forman		***
***																	***
***		Animated gif of blackjack dealing							***
***			(used gifsoup.com to convert video to gif)				***
***		http://www.youtube.com/watch?v=V6WQrbauJEQ					***
***																	***
***		Background image:											***
***	http://www.customtablefelt.com/images/suited-poker-felt/suited-poker-table-felt-400x300.jpg
***																	***
***********************************************************************
***********************************************************************
**********************************************************************/

#pragma once

namespace JohnnysBlackJack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dateTimeStart = DateTime::Now;
			displayDateTime();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelWelcome;
	protected: 
	private: System::Windows::Forms::Label^  labelDateTime;
	private: System::Windows::Forms::Button^  buttonDateTime;
	private: System::Windows::Forms::PictureBox^  pictureBoxBJGif;
	private: System::Windows::Forms::Button^  buttonInstructions;
	private: System::Windows::Forms::Button^  buttonLogin;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Button^  buttonCredits;
	private: System::Windows::Forms::Label^  labelEnterName;
	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::Button^  buttonSubmit;
	private: System::Windows::Forms::Button^  buttonResults;
	private: System::Windows::Forms::ImageList^  imageListCards;
	private: System::Windows::Forms::PictureBox^  pictureBoxPlayerCard1;
	private: System::Windows::Forms::PictureBox^  pictureBoxPlayerCard2;
	private: System::Windows::Forms::PictureBox^  pictureBoxPlayerCard3;
	private: System::Windows::Forms::PictureBox^  pictureBoxDealerCard1;
	private: System::Windows::Forms::PictureBox^  pictureBoxDealerCard2;
	private: System::Windows::Forms::PictureBox^  pictureBoxDealerCard3;
	private: System::Windows::Forms::Label^  labelPlayerCardValue1;
	private: System::Windows::Forms::Label^  labelPlayerCardValue2;
	private: System::Windows::Forms::Label^  labelPlayerCardValue3;
	private: System::Windows::Forms::Label^  labelDealerCardValue1;
	private: System::Windows::Forms::Label^  labelDealerCardValue2;
	private: System::Windows::Forms::Label^  labelDealerCardValue3;
	private: System::Windows::Forms::Button^  buttonDeal;
	private: System::Windows::Forms::Button^  buttonHit;
	private: System::Windows::Forms::Button^  buttonStay;
	private: System::Windows::Forms::Label^  labelPlayerObservation;
	private: System::Windows::Forms::Label^  labelDealerObservation;
	private: System::Windows::Forms::Label^  labelDealerAction;
	private: System::Windows::Forms::Label^  labelGameNumber;
	private: System::Windows::Forms::ComboBox^  comboBoxCheat;
	private: System::Windows::Forms::Button^  buttonCheat;
	private: System::Windows::Forms::Label^  labelSelectCheat;
	private: System::Windows::Forms::Label^  labelPlayerStats;
	private: System::Windows::Forms::Label^  labelDealerStats;



	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->labelDateTime = (gcnew System::Windows::Forms::Label());
			this->buttonDateTime = (gcnew System::Windows::Forms::Button());
			this->pictureBoxBJGif = (gcnew System::Windows::Forms::PictureBox());
			this->buttonInstructions = (gcnew System::Windows::Forms::Button());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonCredits = (gcnew System::Windows::Forms::Button());
			this->labelEnterName = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->buttonResults = (gcnew System::Windows::Forms::Button());
			this->imageListCards = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBoxPlayerCard1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPlayerCard2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPlayerCard3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDealerCard1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDealerCard2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDealerCard3 = (gcnew System::Windows::Forms::PictureBox());
			this->labelPlayerCardValue1 = (gcnew System::Windows::Forms::Label());
			this->labelPlayerCardValue2 = (gcnew System::Windows::Forms::Label());
			this->labelPlayerCardValue3 = (gcnew System::Windows::Forms::Label());
			this->labelDealerCardValue1 = (gcnew System::Windows::Forms::Label());
			this->labelDealerCardValue2 = (gcnew System::Windows::Forms::Label());
			this->labelDealerCardValue3 = (gcnew System::Windows::Forms::Label());
			this->buttonDeal = (gcnew System::Windows::Forms::Button());
			this->buttonHit = (gcnew System::Windows::Forms::Button());
			this->buttonStay = (gcnew System::Windows::Forms::Button());
			this->labelPlayerObservation = (gcnew System::Windows::Forms::Label());
			this->labelDealerObservation = (gcnew System::Windows::Forms::Label());
			this->labelDealerAction = (gcnew System::Windows::Forms::Label());
			this->labelGameNumber = (gcnew System::Windows::Forms::Label());
			this->comboBoxCheat = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCheat = (gcnew System::Windows::Forms::Button());
			this->labelSelectCheat = (gcnew System::Windows::Forms::Label());
			this->labelPlayerStats = (gcnew System::Windows::Forms::Label());
			this->labelDealerStats = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxBJGif))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayerCard1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayerCard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayerCard3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDealerCard1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDealerCard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDealerCard3))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->BackColor = System::Drawing::Color::Transparent;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->ForeColor = System::Drawing::Color::Yellow;
			this->labelWelcome->Location = System::Drawing::Point(215, 18);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(824, 81);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome to Johnny\'s Black Jack Parlor";
			this->labelWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelDateTime
			// 
			this->labelDateTime->AutoSize = true;
			this->labelDateTime->BackColor = System::Drawing::Color::Transparent;
			this->labelDateTime->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDateTime->ForeColor = System::Drawing::Color::Yellow;
			this->labelDateTime->Location = System::Drawing::Point(13, 13);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(198, 24);
			this->labelDateTime->TabIndex = 1;
			this->labelDateTime->Text = L"01/01/70  12:00:00 AM";
			// 
			// buttonDateTime
			// 
			this->buttonDateTime->BackColor = System::Drawing::Color::Yellow;
			this->buttonDateTime->Location = System::Drawing::Point(44, 40);
			this->buttonDateTime->Name = L"buttonDateTime";
			this->buttonDateTime->Size = System::Drawing::Size(134, 30);
			this->buttonDateTime->TabIndex = 2;
			this->buttonDateTime->Text = L"Update Date and Time";
			this->buttonDateTime->UseVisualStyleBackColor = false;
			this->buttonDateTime->Click += gcnew System::EventHandler(this, &Form1::buttonDateTime_Click);
			// 
			// pictureBoxBJGif
			// 
			this->pictureBoxBJGif->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxBJGif.Image")));
			this->pictureBoxBJGif->Location = System::Drawing::Point(466, 124);
			this->pictureBoxBJGif->Name = L"pictureBoxBJGif";
			this->pictureBoxBJGif->Size = System::Drawing::Size(320, 180);
			this->pictureBoxBJGif->TabIndex = 3;
			this->pictureBoxBJGif->TabStop = false;
			// 
			// buttonInstructions
			// 
			this->buttonInstructions->BackColor = System::Drawing::Color::Yellow;
			this->buttonInstructions->Location = System::Drawing::Point(12, 500);
			this->buttonInstructions->Name = L"buttonInstructions";
			this->buttonInstructions->Size = System::Drawing::Size(150, 50);
			this->buttonInstructions->TabIndex = 4;
			this->buttonInstructions->Text = L"Instructions";
			this->buttonInstructions->UseVisualStyleBackColor = false;
			this->buttonInstructions->Click += gcnew System::EventHandler(this, &Form1::buttonInstructions_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::Yellow;
			this->buttonLogin->Location = System::Drawing::Point(536, 500);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(200, 50);
			this->buttonLogin->TabIndex = 5;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &Form1::buttonLogin_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Yellow;
			this->buttonExit->Location = System::Drawing::Point(1102, 500);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(150, 50);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// buttonCredits
			// 
			this->buttonCredits->BackColor = System::Drawing::Color::Yellow;
			this->buttonCredits->Location = System::Drawing::Point(1102, 444);
			this->buttonCredits->Name = L"buttonCredits";
			this->buttonCredits->Size = System::Drawing::Size(150, 50);
			this->buttonCredits->TabIndex = 7;
			this->buttonCredits->Text = L"Credits";
			this->buttonCredits->UseVisualStyleBackColor = false;
			this->buttonCredits->Click += gcnew System::EventHandler(this, &Form1::buttonCredits_Click);
			// 
			// labelEnterName
			// 
			this->labelEnterName->AutoSize = true;
			this->labelEnterName->BackColor = System::Drawing::Color::Transparent;
			this->labelEnterName->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelEnterName->ForeColor = System::Drawing::Color::Yellow;
			this->labelEnterName->Location = System::Drawing::Point(385, 327);
			this->labelEnterName->Name = L"labelEnterName";
			this->labelEnterName->Size = System::Drawing::Size(257, 29);
			this->labelEnterName->TabIndex = 8;
			this->labelEnterName->Text = L"Please enter your name:";
			this->labelEnterName->Visible = false;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(648, 327);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(195, 33);
			this->textBoxName->TabIndex = 9;
			this->textBoxName->Visible = false;
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->BackColor = System::Drawing::Color::Yellow;
			this->buttonSubmit->Location = System::Drawing::Point(536, 444);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(200, 50);
			this->buttonSubmit->TabIndex = 11;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = false;
			this->buttonSubmit->Visible = false;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &Form1::buttonSubmit_Click);
			// 
			// buttonResults
			// 
			this->buttonResults->BackColor = System::Drawing::Color::Yellow;
			this->buttonResults->Location = System::Drawing::Point(11, 444);
			this->buttonResults->Name = L"buttonResults";
			this->buttonResults->Size = System::Drawing::Size(150, 50);
			this->buttonResults->TabIndex = 12;
			this->buttonResults->Text = L"Results";
			this->buttonResults->UseVisualStyleBackColor = false;
			this->buttonResults->Visible = false;
			this->buttonResults->Click += gcnew System::EventHandler(this, &Form1::buttonResults_Click);
			// 
			// imageListCards
			// 
			this->imageListCards->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageListCards.ImageStream")));
			this->imageListCards->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListCards->Images->SetKeyName(0, L"2c.gif");
			this->imageListCards->Images->SetKeyName(1, L"2d.gif");
			this->imageListCards->Images->SetKeyName(2, L"2h.gif");
			this->imageListCards->Images->SetKeyName(3, L"2s.gif");
			this->imageListCards->Images->SetKeyName(4, L"3c.gif");
			this->imageListCards->Images->SetKeyName(5, L"3d.gif");
			this->imageListCards->Images->SetKeyName(6, L"3h.gif");
			this->imageListCards->Images->SetKeyName(7, L"3s.gif");
			this->imageListCards->Images->SetKeyName(8, L"4c.gif");
			this->imageListCards->Images->SetKeyName(9, L"4d.gif");
			this->imageListCards->Images->SetKeyName(10, L"4h.gif");
			this->imageListCards->Images->SetKeyName(11, L"4s.gif");
			this->imageListCards->Images->SetKeyName(12, L"5c.gif");
			this->imageListCards->Images->SetKeyName(13, L"5d.gif");
			this->imageListCards->Images->SetKeyName(14, L"5h.gif");
			this->imageListCards->Images->SetKeyName(15, L"5s.gif");
			this->imageListCards->Images->SetKeyName(16, L"6c.gif");
			this->imageListCards->Images->SetKeyName(17, L"6d.gif");
			this->imageListCards->Images->SetKeyName(18, L"6h.gif");
			this->imageListCards->Images->SetKeyName(19, L"6s.gif");
			this->imageListCards->Images->SetKeyName(20, L"7c.gif");
			this->imageListCards->Images->SetKeyName(21, L"7d.gif");
			this->imageListCards->Images->SetKeyName(22, L"7h.gif");
			this->imageListCards->Images->SetKeyName(23, L"7s.gif");
			this->imageListCards->Images->SetKeyName(24, L"8c.gif");
			this->imageListCards->Images->SetKeyName(25, L"8d.gif");
			this->imageListCards->Images->SetKeyName(26, L"8h.gif");
			this->imageListCards->Images->SetKeyName(27, L"8s.gif");
			this->imageListCards->Images->SetKeyName(28, L"9c.gif");
			this->imageListCards->Images->SetKeyName(29, L"9d.gif");
			this->imageListCards->Images->SetKeyName(30, L"9h.gif");
			this->imageListCards->Images->SetKeyName(31, L"9s.gif");
			this->imageListCards->Images->SetKeyName(32, L"tc.gif");
			this->imageListCards->Images->SetKeyName(33, L"td.gif");
			this->imageListCards->Images->SetKeyName(34, L"th.gif");
			this->imageListCards->Images->SetKeyName(35, L"ts.gif");
			this->imageListCards->Images->SetKeyName(36, L"jc.gif");
			this->imageListCards->Images->SetKeyName(37, L"jd.gif");
			this->imageListCards->Images->SetKeyName(38, L"jh.gif");
			this->imageListCards->Images->SetKeyName(39, L"js.gif");
			this->imageListCards->Images->SetKeyName(40, L"qc.gif");
			this->imageListCards->Images->SetKeyName(41, L"qd.gif");
			this->imageListCards->Images->SetKeyName(42, L"qh.gif");
			this->imageListCards->Images->SetKeyName(43, L"qs.gif");
			this->imageListCards->Images->SetKeyName(44, L"kc.gif");
			this->imageListCards->Images->SetKeyName(45, L"kd.gif");
			this->imageListCards->Images->SetKeyName(46, L"kh.gif");
			this->imageListCards->Images->SetKeyName(47, L"ks.gif");
			this->imageListCards->Images->SetKeyName(48, L"ac.gif");
			this->imageListCards->Images->SetKeyName(49, L"ad.gif");
			this->imageListCards->Images->SetKeyName(50, L"ah.gif");
			this->imageListCards->Images->SetKeyName(51, L"as.gif");
			// 
			// pictureBoxPlayerCard1
			// 
			this->pictureBoxPlayerCard1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxPlayerCard1->Location = System::Drawing::Point(17, 124);
			this->pictureBoxPlayerCard1->Name = L"pictureBoxPlayerCard1";
			this->pictureBoxPlayerCard1->Size = System::Drawing::Size(73, 97);
			this->pictureBoxPlayerCard1->TabIndex = 13;
			this->pictureBoxPlayerCard1->TabStop = false;
			// 
			// pictureBoxPlayerCard2
			// 
			this->pictureBoxPlayerCard2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxPlayerCard2->Location = System::Drawing::Point(96, 227);
			this->pictureBoxPlayerCard2->Name = L"pictureBoxPlayerCard2";
			this->pictureBoxPlayerCard2->Size = System::Drawing::Size(73, 97);
			this->pictureBoxPlayerCard2->TabIndex = 14;
			this->pictureBoxPlayerCard2->TabStop = false;
			// 
			// pictureBoxPlayerCard3
			// 
			this->pictureBoxPlayerCard3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxPlayerCard3->Location = System::Drawing::Point(175, 330);
			this->pictureBoxPlayerCard3->Name = L"pictureBoxPlayerCard3";
			this->pictureBoxPlayerCard3->Size = System::Drawing::Size(73, 97);
			this->pictureBoxPlayerCard3->TabIndex = 15;
			this->pictureBoxPlayerCard3->TabStop = false;
			// 
			// pictureBoxDealerCard1
			// 
			this->pictureBoxDealerCard1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxDealerCard1->Location = System::Drawing::Point(1177, 127);
			this->pictureBoxDealerCard1->Name = L"pictureBoxDealerCard1";
			this->pictureBoxDealerCard1->Size = System::Drawing::Size(73, 97);
			this->pictureBoxDealerCard1->TabIndex = 16;
			this->pictureBoxDealerCard1->TabStop = false;
			// 
			// pictureBoxDealerCard2
			// 
			this->pictureBoxDealerCard2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxDealerCard2->Location = System::Drawing::Point(1098, 230);
			this->pictureBoxDealerCard2->Name = L"pictureBoxDealerCard2";
			this->pictureBoxDealerCard2->Size = System::Drawing::Size(73, 97);
			this->pictureBoxDealerCard2->TabIndex = 17;
			this->pictureBoxDealerCard2->TabStop = false;
			// 
			// pictureBoxDealerCard3
			// 
			this->pictureBoxDealerCard3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxDealerCard3->Location = System::Drawing::Point(1019, 330);
			this->pictureBoxDealerCard3->Name = L"pictureBoxDealerCard3";
			this->pictureBoxDealerCard3->Size = System::Drawing::Size(73, 97);
			this->pictureBoxDealerCard3->TabIndex = 18;
			this->pictureBoxDealerCard3->TabStop = false;
			// 
			// labelPlayerCardValue1
			// 
			this->labelPlayerCardValue1->AutoSize = true;
			this->labelPlayerCardValue1->BackColor = System::Drawing::Color::Transparent;
			this->labelPlayerCardValue1->ForeColor = System::Drawing::Color::Yellow;
			this->labelPlayerCardValue1->Location = System::Drawing::Point(17, 105);
			this->labelPlayerCardValue1->Name = L"labelPlayerCardValue1";
			this->labelPlayerCardValue1->Size = System::Drawing::Size(65, 13);
			this->labelPlayerCardValue1->TabIndex = 19;
			this->labelPlayerCardValue1->Text = L"Card Value: ";
			this->labelPlayerCardValue1->Visible = false;
			// 
			// labelPlayerCardValue2
			// 
			this->labelPlayerCardValue2->AutoSize = true;
			this->labelPlayerCardValue2->BackColor = System::Drawing::Color::Transparent;
			this->labelPlayerCardValue2->ForeColor = System::Drawing::Color::Yellow;
			this->labelPlayerCardValue2->Location = System::Drawing::Point(96, 211);
			this->labelPlayerCardValue2->Name = L"labelPlayerCardValue2";
			this->labelPlayerCardValue2->Size = System::Drawing::Size(65, 13);
			this->labelPlayerCardValue2->TabIndex = 20;
			this->labelPlayerCardValue2->Text = L"Card Value: ";
			this->labelPlayerCardValue2->Visible = false;
			// 
			// labelPlayerCardValue3
			// 
			this->labelPlayerCardValue3->AutoSize = true;
			this->labelPlayerCardValue3->BackColor = System::Drawing::Color::Transparent;
			this->labelPlayerCardValue3->ForeColor = System::Drawing::Color::Yellow;
			this->labelPlayerCardValue3->Location = System::Drawing::Point(175, 314);
			this->labelPlayerCardValue3->Name = L"labelPlayerCardValue3";
			this->labelPlayerCardValue3->Size = System::Drawing::Size(65, 13);
			this->labelPlayerCardValue3->TabIndex = 21;
			this->labelPlayerCardValue3->Text = L"Card Value: ";
			this->labelPlayerCardValue3->Visible = false;
			// 
			// labelDealerCardValue1
			// 
			this->labelDealerCardValue1->AutoSize = true;
			this->labelDealerCardValue1->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerCardValue1->ForeColor = System::Drawing::Color::Yellow;
			this->labelDealerCardValue1->Location = System::Drawing::Point(1172, 108);
			this->labelDealerCardValue1->Name = L"labelDealerCardValue1";
			this->labelDealerCardValue1->Size = System::Drawing::Size(65, 13);
			this->labelDealerCardValue1->TabIndex = 22;
			this->labelDealerCardValue1->Text = L"Card Value: ";
			this->labelDealerCardValue1->Visible = false;
			// 
			// labelDealerCardValue2
			// 
			this->labelDealerCardValue2->AutoSize = true;
			this->labelDealerCardValue2->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerCardValue2->ForeColor = System::Drawing::Color::Yellow;
			this->labelDealerCardValue2->Location = System::Drawing::Point(1095, 211);
			this->labelDealerCardValue2->Name = L"labelDealerCardValue2";
			this->labelDealerCardValue2->Size = System::Drawing::Size(65, 13);
			this->labelDealerCardValue2->TabIndex = 23;
			this->labelDealerCardValue2->Text = L"Card Value: ";
			this->labelDealerCardValue2->Visible = false;
			// 
			// labelDealerCardValue3
			// 
			this->labelDealerCardValue3->AutoSize = true;
			this->labelDealerCardValue3->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerCardValue3->ForeColor = System::Drawing::Color::Yellow;
			this->labelDealerCardValue3->Location = System::Drawing::Point(1016, 314);
			this->labelDealerCardValue3->Name = L"labelDealerCardValue3";
			this->labelDealerCardValue3->Size = System::Drawing::Size(65, 13);
			this->labelDealerCardValue3->TabIndex = 24;
			this->labelDealerCardValue3->Text = L"Card Value: ";
			this->labelDealerCardValue3->Visible = false;
			// 
			// buttonDeal
			// 
			this->buttonDeal->BackColor = System::Drawing::Color::Yellow;
			this->buttonDeal->Location = System::Drawing::Point(466, 314);
			this->buttonDeal->Name = L"buttonDeal";
			this->buttonDeal->Size = System::Drawing::Size(75, 23);
			this->buttonDeal->TabIndex = 25;
			this->buttonDeal->Text = L"Deal";
			this->buttonDeal->UseVisualStyleBackColor = false;
			this->buttonDeal->Visible = false;
			this->buttonDeal->Click += gcnew System::EventHandler(this, &Form1::buttonDeal_Click);
			// 
			// buttonHit
			// 
			this->buttonHit->BackColor = System::Drawing::Color::Yellow;
			this->buttonHit->Location = System::Drawing::Point(547, 314);
			this->buttonHit->Name = L"buttonHit";
			this->buttonHit->Size = System::Drawing::Size(75, 23);
			this->buttonHit->TabIndex = 26;
			this->buttonHit->Text = L"Hit";
			this->buttonHit->UseVisualStyleBackColor = false;
			this->buttonHit->Visible = false;
			this->buttonHit->Click += gcnew System::EventHandler(this, &Form1::buttonHit_Click);
			// 
			// buttonStay
			// 
			this->buttonStay->BackColor = System::Drawing::Color::Yellow;
			this->buttonStay->Location = System::Drawing::Point(628, 314);
			this->buttonStay->Name = L"buttonStay";
			this->buttonStay->Size = System::Drawing::Size(75, 23);
			this->buttonStay->TabIndex = 27;
			this->buttonStay->Text = L"Stay";
			this->buttonStay->UseVisualStyleBackColor = false;
			this->buttonStay->Visible = false;
			this->buttonStay->Click += gcnew System::EventHandler(this, &Form1::buttonStay_Click);
			// 
			// labelPlayerObservation
			// 
			this->labelPlayerObservation->BackColor = System::Drawing::Color::Transparent;
			this->labelPlayerObservation->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPlayerObservation->ForeColor = System::Drawing::Color::Yellow;
			this->labelPlayerObservation->Location = System::Drawing::Point(99, 99);
			this->labelPlayerObservation->Name = L"labelPlayerObservation";
			this->labelPlayerObservation->Size = System::Drawing::Size(350, 23);
			this->labelPlayerObservation->TabIndex = 28;
			this->labelPlayerObservation->Text = L"Player\'s hand value: ";
			this->labelPlayerObservation->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelPlayerObservation->Visible = false;
			// 
			// labelDealerObservation
			// 
			this->labelDealerObservation->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerObservation->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerObservation->ForeColor = System::Drawing::Color::Yellow;
			this->labelDealerObservation->Location = System::Drawing::Point(813, 99);
			this->labelDealerObservation->Name = L"labelDealerObservation";
			this->labelDealerObservation->Size = System::Drawing::Size(241, 23);
			this->labelDealerObservation->TabIndex = 29;
			this->labelDealerObservation->Text = L"Dealer\'s Hand Value: ";
			this->labelDealerObservation->Visible = false;
			// 
			// labelDealerAction
			// 
			this->labelDealerAction->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerAction->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerAction->ForeColor = System::Drawing::Color::Yellow;
			this->labelDealerAction->Location = System::Drawing::Point(254, 381);
			this->labelDealerAction->Name = L"labelDealerAction";
			this->labelDealerAction->Size = System::Drawing::Size(759, 106);
			this->labelDealerAction->TabIndex = 30;
			this->labelDealerAction->Visible = false;
			// 
			// labelGameNumber
			// 
			this->labelGameNumber->AutoSize = true;
			this->labelGameNumber->BackColor = System::Drawing::Color::Transparent;
			this->labelGameNumber->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelGameNumber->ForeColor = System::Drawing::Color::Yellow;
			this->labelGameNumber->Location = System::Drawing::Point(562, 356);
			this->labelGameNumber->Name = L"labelGameNumber";
			this->labelGameNumber->Size = System::Drawing::Size(80, 25);
			this->labelGameNumber->TabIndex = 31;
			this->labelGameNumber->Text = L"Game #";
			this->labelGameNumber->Visible = false;
			// 
			// comboBoxCheat
			// 
			this->comboBoxCheat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(111)), 
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->comboBoxCheat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxCheat->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBoxCheat->ForeColor = System::Drawing::Color::Yellow;
			this->comboBoxCheat->FormattingEnabled = true;
			this->comboBoxCheat->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Player gets BlackJack", L"Dealer gets BlackJack", 
				L"Both get BlackJack", L"Player Busts and Dealer under threshold", L"Player Busts and Dealer within threshold", L"Dealer Busts and Player does not", 
				L"Player has 10 and Dealer has 10", L"Player has 10 and Dealer has 15", L"Player has 10 and Dealer has 16", L"Player has 20 and Dealer has 10", 
				L"Player has 20 and Dealer has 15", L"Player has 20 and Dealer has 16"});
			this->comboBoxCheat->Location = System::Drawing::Point(709, 343);
			this->comboBoxCheat->Name = L"comboBoxCheat";
			this->comboBoxCheat->Size = System::Drawing::Size(304, 23);
			this->comboBoxCheat->TabIndex = 32;
			this->comboBoxCheat->Visible = false;
			// 
			// buttonCheat
			// 
			this->buttonCheat->BackColor = System::Drawing::Color::Yellow;
			this->buttonCheat->Location = System::Drawing::Point(709, 314);
			this->buttonCheat->Name = L"buttonCheat";
			this->buttonCheat->Size = System::Drawing::Size(75, 23);
			this->buttonCheat->TabIndex = 33;
			this->buttonCheat->Text = L"Cheat";
			this->buttonCheat->UseVisualStyleBackColor = false;
			this->buttonCheat->Visible = false;
			this->buttonCheat->Click += gcnew System::EventHandler(this, &Form1::buttonCheat_Click);
			// 
			// labelSelectCheat
			// 
			this->labelSelectCheat->AutoSize = true;
			this->labelSelectCheat->BackColor = System::Drawing::Color::Transparent;
			this->labelSelectCheat->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelSelectCheat->ForeColor = System::Drawing::Color::Yellow;
			this->labelSelectCheat->Location = System::Drawing::Point(790, 319);
			this->labelSelectCheat->Name = L"labelSelectCheat";
			this->labelSelectCheat->Size = System::Drawing::Size(216, 18);
			this->labelSelectCheat->TabIndex = 34;
			this->labelSelectCheat->Text = L"Select condition and press CHEAT";
			this->labelSelectCheat->Visible = false;
			// 
			// labelPlayerStats
			// 
			this->labelPlayerStats->BackColor = System::Drawing::Color::Transparent;
			this->labelPlayerStats->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPlayerStats->ForeColor = System::Drawing::Color::Yellow;
			this->labelPlayerStats->Location = System::Drawing::Point(202, 150);
			this->labelPlayerStats->Name = L"labelPlayerStats";
			this->labelPlayerStats->Size = System::Drawing::Size(258, 154);
			this->labelPlayerStats->TabIndex = 35;
			this->labelPlayerStats->Text = L"Wins: \r\n\r\nLosses: ";
			this->labelPlayerStats->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->labelPlayerStats->Visible = false;
			// 
			// labelDealerStats
			// 
			this->labelDealerStats->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerStats->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerStats->ForeColor = System::Drawing::Color::Yellow;
			this->labelDealerStats->Location = System::Drawing::Point(814, 150);
			this->labelDealerStats->Name = L"labelDealerStats";
			this->labelDealerStats->Size = System::Drawing::Size(267, 154);
			this->labelDealerStats->TabIndex = 36;
			this->labelDealerStats->Text = L"Wins: \r\n\r\nLosses: ";
			this->labelDealerStats->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1264, 562);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->labelDealerStats);
			this->Controls->Add(this->labelPlayerStats);
			this->Controls->Add(this->labelSelectCheat);
			this->Controls->Add(this->buttonCheat);
			this->Controls->Add(this->comboBoxCheat);
			this->Controls->Add(this->labelGameNumber);
			this->Controls->Add(this->labelDealerAction);
			this->Controls->Add(this->labelDealerObservation);
			this->Controls->Add(this->labelPlayerObservation);
			this->Controls->Add(this->buttonStay);
			this->Controls->Add(this->buttonHit);
			this->Controls->Add(this->buttonDeal);
			this->Controls->Add(this->labelDealerCardValue3);
			this->Controls->Add(this->labelDealerCardValue2);
			this->Controls->Add(this->labelDealerCardValue1);
			this->Controls->Add(this->labelPlayerCardValue3);
			this->Controls->Add(this->labelPlayerCardValue2);
			this->Controls->Add(this->labelPlayerCardValue1);
			this->Controls->Add(this->pictureBoxDealerCard3);
			this->Controls->Add(this->pictureBoxDealerCard2);
			this->Controls->Add(this->pictureBoxDealerCard1);
			this->Controls->Add(this->pictureBoxPlayerCard3);
			this->Controls->Add(this->pictureBoxPlayerCard2);
			this->Controls->Add(this->pictureBoxPlayerCard1);
			this->Controls->Add(this->buttonResults);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelEnterName);
			this->Controls->Add(this->buttonCredits);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonInstructions);
			this->Controls->Add(this->pictureBoxBJGif);
			this->Controls->Add(this->buttonDateTime);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->Text = L"Johnny\'s Black Jack Parlor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxBJGif))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayerCard1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayerCard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayerCard3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDealerCard1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDealerCard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDealerCard3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///////////////////////////////////////////////////////
	//				GLOBAL VARIABLES/OBJECTS
	///////////////////////////////////////////////////////
	DateTime		dateTimeStart;
	String^			playerName;
	Random^			getRandom;
	int				randomInt;

	static	bool	cheatActivated		= false;
	static	int		playerCardValueSum	= 0;
	static	int		dealerCardValueSum	= 0;
	static	int		gameNumber			= 0;
	static	int		playerWins			= 0;
	static	int		dealerWins			= 0;
	///////////////////////////////////////////////////////

/**************************************************************
***************************************************************
***                                                			***
***   START EVENT-DRIVEN FUNCTION DECLARATIONS/DEFINITIONS  ***
***                                                			***
***************************************************************
**************************************************************/

private: System::Void buttonCheat_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ///////////////////////////////////////////////////////////////////
			 //				LOCAL VARIABLES/OBJECTS
			 ///////////////////////////////////////////////////////////////////
			 int playerLosses,
				 dealerLosses;
			 ///////////////////////////////////////////////////////////////////
			 
			 // Set game counter
			 gameNumber++;
			 labelGameNumber->Text = "Game #" + gameNumber;

			 // Update Stats
			 playerLosses = gameNumber - (gameNumber - dealerWins);
			 dealerLosses = gameNumber - (gameNumber - playerWins);
			 labelPlayerStats->Text = "Wins: " + playerWins + "\n\nLosses: " + playerLosses;
			 labelDealerStats->Text = "Wins: " + dealerWins + "\n\nLosses: " + dealerLosses;

			 // We are cheaters
			 cheatActivated = true;

			 // Reset hand value
			 playerCardValueSum = 0;
			 dealerCardValueSum = 0;

			 // Reset action label
			 labelDealerAction->Text = "";

			 // Make sure extra cards are not displayed
			 pictureBoxPlayerCard3->Visible = false;
			 labelPlayerCardValue3->Visible = false;
			 pictureBoxDealerCard3->Visible = false;
			 labelDealerCardValue3->Visible = false;

			 // Deal opening hands like cheaters do
			 for (int i = 100; i <= 106; i++)
				 dealCard(i);
		 }

private: System::Void buttonCredits_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show( 
				"*************************************************************************************\n"
				 "**************************************** ID INFO ************************************\n\n"
				 "	Programmer		:	Johnny Brinsko\n"
				 "	Assignment #		:	Program #2\n"
				 "	Assignment Name		:	Black Jack\n"
				 "	Course # and Title		:	CISC 192  - C++\n"
				 "	Class Meeting Time		:	TTh 9:35 - 12:40\n"
				 "	Instructor			:	Professor Forman\n"
				 "	Hours			:	12\n"
				 "	Difficulty			:	6\n"
				 "	Completion Date		:	11/13/2012\n"
				 "	Project Name		:	JohnnysBlackJack\n\n"
				 "**************************************************************************************\n"
				 "**************************************** CREDITS ************************************\n\n"
				 "	Thanks to Professor Forman and Tim for completing the \n"
				 "			learning triangle together\n\n"
				 "*************************************************************************************\n"
				 "**************************************** MEDIA *************************************\n\n"
				 "Background music during game:\n"
				 "http://www.youtube.com/watch?v=Y6ljFaKRTrI"
				 "\n\nFarewell music:\n"
				 "http://www.gamefront.com/files/12899141/Portal_Radio_Loop" 
				 "\n\nJose's cards from class, provided by Professor Forman"
				 "\n\nAnimated gif of blackjack dealing\n"
				 "	(used gifsoup.com to convert video to gif)\n"
				 "http://www.youtube.com/watch?v=V6WQrbauJEQ"
				 "\n\nBackground image:\n"
				 "http://www.customtablefelt.com/images/suited-poker-felt/suited-poker-table-felt-400x300.jpg"
				 );
		MessageBox::Show(
				 "*************************************************************************************\n"
				 "************************************** # OF STARS **********************************\n\n"
				 "2 stars\n\n"
				 "*************************************************************************************\n"
				 "**************************************** STARS *************************************\n\n"
				 "1. (2) Add a series of Cheat buttons that force certain basic hands to be dealt.\n"
				 );
		 }

private: System::Void buttonDateTime_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 displayDateTime();
		 }

private: System::Void buttonDeal_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ///////////////////////////////////////////////////////////////////
			 //				LOCAL VARIABLES/OBJECTS
			 ///////////////////////////////////////////////////////////////////
			 int	playerLosses,
					dealerLosses;
			 ///////////////////////////////////////////////////////////////////
			 
			 // Set game counter
			 gameNumber++;
			 labelGameNumber->Text = "Game #" + gameNumber;

			 // Update Stats
			 playerLosses = gameNumber - (gameNumber - dealerWins);
			 dealerLosses = gameNumber - (gameNumber - playerWins);
			 labelPlayerStats->Text = "Wins: " + playerWins 
									+ "\n\nLosses: " + playerLosses;
			 labelDealerStats->Text = "Wins: " + dealerWins 
									+ "\n\nLosses: " + dealerLosses;

			 // Reset hand value
			 playerCardValueSum = 0;
			 dealerCardValueSum = 0;

			 // Reset action label
			 labelDealerAction->Text = "";

			 // Mainly for the first deal, show card value labels
			 labelPlayerCardValue1->Visible = true;
			 labelPlayerCardValue2->Visible = true;
			 labelDealerCardValue1->Visible = true;
			 labelDealerCardValue2->Visible = true;

			 // Make sure extra cards are not displayed
			 pictureBoxPlayerCard3->Visible = false;
			 labelPlayerCardValue3->Visible = false;
			 pictureBoxDealerCard3->Visible = false;
			 labelDealerCardValue3->Visible = false;

			 // Deal opening hands
			 for (int i = 1; i <= 4; i++)
				 dealCard(i);
		 }

private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ///////////////////////////////////////////////////////////////////
			 //				LOCAL VARIABLES/OBJECTS
			 ///////////////////////////////////////////////////////////////////
			 Windows::Forms::DialogResult	playAnother;
			 System::Media::SoundPlayer		soundPlayer( "wav/portalradio.wav");
			 ///////////////////////////////////////////////////////////////////

			 soundPlayer.PlayLooping();

			 if (dealerWins > playerWins)
				MessageBox::Show("Thanks for being such a good sport, " + playerName + ", in your " + gameNumber + " games.\n\n"
								+ "Too bad you won only " + playerWins + " game(s) while The Dealer won " + dealerWins + " game(s).");

			 else if (dealerWins == playerWins)
				 MessageBox::Show("After " + gameNumber + " games, " + playerName + ", you couldn't beat The Dealer.\n\n"
								+ "You won " + playerWins + " game(s) while The Dealer won " + dealerWins + " game(s) as well.");

			 else
				 MessageBox::Show("I know you had fun, " + playerName + ", in your " + gameNumber + " games.\n\n"
								+ "You outplayed The Dealer by winning " + playerWins + " game(s). The Dealer only won " + dealerWins + " game(s).");

			 playAnother = MessageBox::Show("Do you want to play another game?", "Are you sure?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			 if (playAnother == Windows::Forms::DialogResult::No)
				 Close();
			 
		 }

private: System::Void buttonHit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pictureBoxPlayerCard3->Visible = true;
			 labelPlayerCardValue3->Visible = true;
			 dealCard(5);

			 pictureBoxDealerCard3->Visible = true;
			 labelDealerCardValue3->Visible = true;
			 dealCard(6);
		 }

private: System::Void buttonInstructions_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show( "Login and click the DEAL button. Press HIT if you want another card.\n"
							+ "Press STAY if you don't want another card.\n\n"
							+ "You can set up certain scenarios with the CHEAT feature.\n\n"
							+ "After the player and dealer have been randomly dealt two cards each:\n\n"
							+ "If Black Jack occurs (= first two cards add up to 21) for either the player "
							+ "or the dealer, then the game ends immediately and the Black Jacker is the winner.\n\n"
							+ "Whenever the player goes \"bust\", the dealer immediately wins.\n\n"
							+ "Player has first option to get \"hit\"; after player's last hit, it's the dealer's turn.\n\n"
							+ "Each participant can get a maximum of 3 cards.\n\n"
							+ "The dealer stays on 16 or higher and hits under 16.\n\n"
							+ "If the player has not gone \"bust\" and the dealer does \"bust\", then the player wins immediately.\n\n"
							+ "If neither the player nor dealer has gone \"bust\", then the higher total wins.\n\n"
							+ "In case of a tie, the dealer wins." );
		 }

private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 buttonSubmit->Visible = true;
			 labelEnterName->Visible = true;
			 textBoxName->Visible = true;
			 textBoxName->Focus();
		 }

private: System::Void buttonResults_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (dealerWins > playerWins)
				 MessageBox::Show("In the " + gameNumber + " games played,\n" + playerName + " has won "
							+ playerWins + " game(s)\nThe Dealer has won " + dealerWins + " game(s)\n"
							+ "So far, The Dealer has won more games!");
			 else if (dealerWins == playerWins)
				 MessageBox::Show("In the " + gameNumber + " games played,\n" + playerName + " has won "
							+ playerWins + " game(s)\nThe Dealer has won " + dealerWins + " game(s)\n"
			 				+ "So far, " + playerName + " has won the same amount of games as The Dealer.");
			 else
				 MessageBox::Show("In the " + gameNumber + " games played,\n" + playerName + " has won "
							+ playerWins + " game(s)\nThe Dealer has won " + dealerWins + " game(s)\n"
			 				+ playerName + " has won more games!");
		 }

private: System::Void buttonStay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pictureBoxDealerCard3->Visible = true;
			 labelDealerCardValue3->Visible = true;
			 dealCard(6);
		 }

private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 playerName = textBoxName->Text;
			 MessageBox::Show( "Thank you for entering your name, " + playerName
				 + "\n\nLet's get you to your table!");

			 // Setup the initial game layout
			 buttonSubmit->Visible = false;
			 labelEnterName->Visible = false;
			 textBoxName->Visible = false;
			 buttonLogin->Visible = false;
			 buttonResults->Visible = true;
			 buttonDeal->Visible = true;
			 buttonHit->Visible = true;
			 buttonStay->Visible = true;
			 labelGameNumber->Visible = true;
			 labelPlayerObservation->Visible = true;
			 labelPlayerObservation->Text = playerName + "'s Hand Value: ";
			 labelDealerObservation->Visible = true;
			 labelDealerAction->Visible = true;
			 buttonCheat->Visible = true;
			 comboBoxCheat->Visible = true;
			 labelSelectCheat->Visible = true;
			 labelPlayerStats->Visible = true;
			 labelDealerStats->Visible = true;
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ///////////////////////////////////////////////////////////////////
			 //				LOCAL VARIABLES/OBJECTS
			 ///////////////////////////////////////////////////////////////////
			 System::Media::SoundPlayer		soundPlayer( "wav/Portal.wav");
			 ///////////////////////////////////////////////////////////////////

			 soundPlayer.Play();
		 }

/**************************************************************
***************************************************************
***                                                			***
***   END EVENT-DRIVEN FUNCTION DECLARATIONS/DEFINITIONS    ***
***                                                			***
***************************************************************
**************************************************************/

/**************************************************************
***************************************************************
***                                                			***
***			  START NON EVENT-DRIVEN FUNCTIONS				***
***                                                			***
***************************************************************
**************************************************************/

bool check21(int sum)
{
	return (sum == 21);
}

void dealCard(int cardToDeal)
{
	///////////////////////////////////////////////////////
	//				LOCAL VARIABLES/OBJECTS
	///////////////////////////////////////////////////////
	int	intCardValue	= 0;
	///////////////////////////////////////////////////////

	// Select a random card from the imageList
	getRandom = gcnew Random( DateTime::Now.Millisecond );
	randomInt = getRandom->Next(52);

	// CHEAT Button Activated
	if (cheatActivated)
	{
		labelWelcome->Text = "I'm a Cheater";

		if (comboBoxCheat->Text == "Player gets BlackJack")
		{
			if (cardToDeal == 100)
			{
				randomInt = 47;	// King
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 48;	// Ace
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 0;	// Two
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 0;	// Two
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Dealer gets BlackJack")
		{
			if (cardToDeal == 100)
			{
				randomInt = 0;	// Two
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 0;	// Two
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 47;	// King
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 48;	// Ace
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Both get BlackJack")
		{
			if (cardToDeal == 100)
			{
				randomInt = 47;	// King
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 48;	// Ace
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 47;	// King
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 48;	// Ace
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player Busts and Dealer under threshold")
		{
			if (cardToDeal == 100)
			{
				randomInt = 51;	// Ace
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 51;	// Ace
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 0;	// Two
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 0;	// Two
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player Busts and Dealer within threshold")
		{
			if (cardToDeal == 100)
			{
				randomInt = 51;	// Ace
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 51;	// Ace
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 47;	// King
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 47;	// King
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Dealer Busts and Player does not")
		{
			if (cardToDeal == 100)
			{
				randomInt = 0;	// Two
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 0;	// Two
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 51;	// Ace
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 51;	// Ace
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player has 10 and Dealer has 10")
		{
			if (cardToDeal == 100)
			{
				randomInt = 12;	// Five
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 12;	// Five
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 12;	// Five
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 12;	// Five
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player has 10 and Dealer has 15")
		{
			if (cardToDeal == 100)
			{
				randomInt = 12;	// Five
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 12;	// Five
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 12;	// Five
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 47;	// King
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player has 10 and Dealer has 16")
		{
			if (cardToDeal == 100)
			{
				randomInt = 12;	// Five
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 12;	// Five
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 16;	// Six
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 47;	// King
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player has 20 and Dealer has 10")
		{
			if (cardToDeal == 100)
			{
				randomInt = 47;	// King
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 47;	// King
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 12;	// Five
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 12;	// Five
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player has 20 and Dealer has 15")
		{
			if (cardToDeal == 100)
			{
				randomInt = 47;	// King
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 47;	// King
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 12;	// Five
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 47;	// King
				cardToDeal = 4;
			}
		}

		else if (comboBoxCheat->Text == "Player has 20 and Dealer has 16")
		{
			if (cardToDeal == 100)
			{
				randomInt = 47;	// King
				cardToDeal = 1;
			}

			else if (cardToDeal == 101)
			{
				randomInt = 47;	// King
				cardToDeal = 2;
			}

			else if (cardToDeal == 102)
			{
				randomInt = 16;	// Six
				cardToDeal = 3;
			}

			else if (cardToDeal == 103)
			{
				randomInt = 47;	// King
				cardToDeal = 4;
			}
		}
	} // End of CHEAT patch

	intCardValue = randomInt / 4 + 2;

	// Picture cards get a value of 10
	if (intCardValue > 10 && intCardValue < 14)
		intCardValue = 10;

	// Ace gets a value of 11
	else if (intCardValue == 14)
		intCardValue = 11;
	
	// Deal cards 1 and 2 to Player. Then deal cards 3 and 4 to Dealer. 
	//  Card 5 goes to Player. Card 6 goes to Dealer.
	switch (cardToDeal)
	{
		case 1:
			labelPlayerCardValue1->Text = "Card Value: " + intCardValue.ToString();
			pictureBoxPlayerCard1->Image = imageListCards->Images[randomInt];
			playerCardValueSum += intCardValue;
			break;
		
		case 2:
			labelPlayerCardValue2->Text = "Card Value: " + intCardValue.ToString();
			pictureBoxPlayerCard2->Image = imageListCards->Images[randomInt];
			playerCardValueSum += intCardValue;
			break;

		case 3:
			labelDealerCardValue1->Text = "Card Value: " + intCardValue.ToString();
			pictureBoxDealerCard1->Image = imageListCards->Images[randomInt];
			dealerCardValueSum += intCardValue;
			break;
		
		case 4:
			labelDealerCardValue2->Text = "Card Value: " + intCardValue.ToString();
			pictureBoxDealerCard2->Image = imageListCards->Images[randomInt];
			dealerCardValueSum += intCardValue;

			// If dealer has blackjack, the game is over
			if (check21(dealerCardValueSum))
			{
				labelDealerAction->Text = "The Dealer has BlackJack. Game Over :(";
				dealerWins++;
			}

			// If player has blackjack but not the dealer, the player wins
			else if (check21(playerCardValueSum))
			{
				labelDealerAction->Text = "Congratulations on Black Jack. You Win!";
				playerWins++;
			}

			// If player busts on first two cards
			else if (playerCardValueSum > 21)
			{
				labelDealerAction->Text = "Sorry, you busted. You lose :(";
				dealerWins++;
			}

			// If Dealer busts on first two cards
			else if (dealerCardValueSum > 21)
			{
				labelDealerAction->Text = "The Dealer busted, so you win!";
				playerWins++;
			}

			// Dealer takes no card
			else if (dealerCardValueSum >= 16)
				labelDealerAction->Text = "The Dealer has " + dealerCardValueSum + " and stands on 16 or higher, "
										+ "so The Dealer will take no card.";

			// Dealer takes a card
			else
				labelDealerAction->Text = "The Dealer has " + dealerCardValueSum + " and hits on 15 or lower, "
										+ "so The Dealer will take another card.";

			break;

		case 5:
			labelPlayerCardValue3->Text = "Card Value: " + intCardValue.ToString();
			pictureBoxPlayerCard3->Image = imageListCards->Images[randomInt];
			playerCardValueSum += intCardValue;
			break;

		case 6:
			// It's all over if the player busts
			if (playerCardValueSum > 21)
			{
				// Hide the third card
				pictureBoxDealerCard3->Visible = false;
				labelDealerCardValue3->Visible = false;

				// Game is over
				labelDealerAction->Text = "You busted, so the game is over.";
				dealerWins++;
				break;
			}

			// Player is closer to 21 (but not over) and Dealer is within threshold
			else if (playerCardValueSum > dealerCardValueSum && playerCardValueSum <= 21 && dealerCardValueSum >= 16)
			{
				// Hide the third card
				pictureBoxDealerCard3->Visible = false;
				labelDealerCardValue3->Visible = false;

				// Game is over
				labelDealerAction->Text = "Winner Winner, Chicken Dinner";
				playerWins++;
				break;
			}

			// Dealer is within threshold but Player does not have higher score
			else if (playerCardValueSum <= dealerCardValueSum && dealerCardValueSum >= 16)
			{
				// Hide the third card
				pictureBoxDealerCard3->Visible = false;
				labelDealerCardValue3->Visible = false;

				labelDealerAction->Text = "That was a bad beat.";
				dealerWins++;
			}
			
			//// Dealer does not take a third card if hand value is > 15 and Player busts
			////else if (dealerCardValueSum > 15 || playerCardValueSum > 21)
			//else if (dealerCardValueSum > 15 && playerCardValueSum > 21)
			//{
			//	// Hide the third card
			//	pictureBoxDealerCard3->Visible = false;
			//	labelDealerCardValue3->Visible = false;

			//	// Game is over
			//	labelDealerAction->Text = "You busted, so the game is over.";
			//	break;
			//}

			// Dealer takes a third card if hand value is less than 16
			else
			{
				labelDealerCardValue3->Text = "Card Value: " + intCardValue.ToString();
				pictureBoxDealerCard3->Image = imageListCards->Images[randomInt];
				dealerCardValueSum += intCardValue;
			}

			/************** Now all cards have been dealt ***************/

			// The Dealer takes a third card and busts
			if (dealerCardValueSum > 21)
			{
				labelDealerAction->Text = "The Dealer has busted. You win!";
				playerWins++;
			}

			// Player's total is greater than Dealer's but isn't a bust
			else if (playerCardValueSum > dealerCardValueSum && playerCardValueSum <= 21)
			{
				labelDealerAction->Text = "Winner Winner, Chicken Dinner";
				playerWins++;
			}

			// Player stands when Dealer is within threshold
			else if (playerCardValueSum <= 15 && dealerCardValueSum >= 16)
			{
				// Hide the third card
				pictureBoxDealerCard3->Visible = false;
				labelDealerCardValue3->Visible = false;

				labelDealerAction->Text = "You lose. You really should've hit.";
				dealerWins++;
			}

			// There's no other way the Player can win
			else
			{
				labelDealerAction->Text = "Sorry, you lost this round.";
				dealerWins++;
			}
			
			break;
	}

	labelPlayerObservation->Text = playerName + "'s Hand Value: " + playerCardValueSum;
	labelDealerObservation->Text = "Dealer's Hand Value: " + dealerCardValueSum;

}

void displayDateTime()
{
	///////////////////////////////////////////////////////
	//				LOCAL VARIABLES/OBJECTS
	///////////////////////////////////////////////////////
	DateTime dateTimeNow = DateTime::Now;
	///////////////////////////////////////////////////////

	labelDateTime->Text = dateTimeNow.ToString();	
}

/**************************************************************
***************************************************************
***                                                			***
***			    END NON EVENT-DRIVEN FUNCTIONS				***
***                                                			***
***************************************************************
**************************************************************/

};
}
