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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxBJGif))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->Location = System::Drawing::Point(157, 40);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(935, 81);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome to Johnny\'s Black Jack Parlor";
			this->labelWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelDateTime
			// 
			this->labelDateTime->AutoSize = true;
			this->labelDateTime->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDateTime->Location = System::Drawing::Point(13, 13);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(198, 24);
			this->labelDateTime->TabIndex = 1;
			this->labelDateTime->Text = L"01/01/70  12:00:00 AM";
			// 
			// buttonDateTime
			// 
			this->buttonDateTime->Location = System::Drawing::Point(44, 40);
			this->buttonDateTime->Name = L"buttonDateTime";
			this->buttonDateTime->Size = System::Drawing::Size(134, 30);
			this->buttonDateTime->TabIndex = 2;
			this->buttonDateTime->Text = L"Update Date and Time";
			this->buttonDateTime->UseVisualStyleBackColor = true;
			this->buttonDateTime->Click += gcnew System::EventHandler(this, &Form1::buttonDateTime_Click);
			// 
			// pictureBoxBJGif
			// 
			this->pictureBoxBJGif->Location = System::Drawing::Point(466, 124);
			this->pictureBoxBJGif->Name = L"pictureBoxBJGif";
			this->pictureBoxBJGif->Size = System::Drawing::Size(320, 180);
			this->pictureBoxBJGif->TabIndex = 3;
			this->pictureBoxBJGif->TabStop = false;
			// 
			// buttonInstructions
			// 
			this->buttonInstructions->Location = System::Drawing::Point(12, 527);
			this->buttonInstructions->Name = L"buttonInstructions";
			this->buttonInstructions->Size = System::Drawing::Size(75, 23);
			this->buttonInstructions->TabIndex = 4;
			this->buttonInstructions->Text = L"Instructions";
			this->buttonInstructions->UseVisualStyleBackColor = true;
			this->buttonInstructions->Click += gcnew System::EventHandler(this, &Form1::buttonInstructions_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(567, 527);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(75, 23);
			this->buttonLogin->TabIndex = 5;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &Form1::buttonLogin_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(1177, 527);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 23);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			// 
			// buttonCredits
			// 
			this->buttonCredits->Location = System::Drawing::Point(1177, 498);
			this->buttonCredits->Name = L"buttonCredits";
			this->buttonCredits->Size = System::Drawing::Size(75, 23);
			this->buttonCredits->TabIndex = 7;
			this->buttonCredits->Text = L"Credits";
			this->buttonCredits->UseVisualStyleBackColor = true;
			// 
			// labelEnterName
			// 
			this->labelEnterName->AutoSize = true;
			this->labelEnterName->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
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
			this->buttonSubmit->Location = System::Drawing::Point(567, 498);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(75, 23);
			this->buttonSubmit->TabIndex = 11;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Visible = false;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &Form1::buttonSubmit_Click);
			// 
			// buttonResults
			// 
			this->buttonResults->Location = System::Drawing::Point(12, 498);
			this->buttonResults->Name = L"buttonResults";
			this->buttonResults->Size = System::Drawing::Size(75, 23);
			this->buttonResults->TabIndex = 12;
			this->buttonResults->Text = L"Results";
			this->buttonResults->UseVisualStyleBackColor = true;
			this->buttonResults->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 562);
			this->Controls->Add(this->buttonResults);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelEnterName);
			this->Controls->Add(this->buttonCredits);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->buttonInstructions);
			this->Controls->Add(this->pictureBoxBJGif);
			this->Controls->Add(this->buttonDateTime);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->Text = L"Johnny\'s Black Jack Parlor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxBJGif))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///////////////////////////////////////////////////////
	//				GLOBAL VARIABLES/OBJECTS
	///////////////////////////////////////////////////////
	DateTime	dateTimeStart;
	String^		playerName;
	///////////////////////////////////////////////////////

/**************************************************************
***************************************************************
***                                                			***
***   START EVENT-DRIVEN FUNCTION DECLARATIONS/DEFINITIONS  ***
***                                                			***
***************************************************************
**************************************************************/

	private: System::Void buttonDateTime_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 displayDateTime();
			 }

	private: System::Void buttonInstructions_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 MessageBox::Show( "After the player and dealer have been randomly dealt two cards each:\n\n"
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

void displayDateTime()
{
	///////////////////////////////////////////////////////
	//				LOCAL VARIABLES/OBJECTS
	///////////////////////////////////////////////////////
	DateTime dateTimeNow = DateTime::Now;
	///////////////////////////////////////////////////////

	labelDateTime->Text = dateTimeNow.ToString();
						//+ "\n\t"
						//+ dateTimeNow.ToShortTimeString();		
}

/**************************************************************
***************************************************************
***                                                			***
***			    END NON EVENT-DRIVEN FUNCTIONS				***
***                                                			***
***************************************************************
**************************************************************/

private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 buttonSubmit->Visible = true;
			 labelEnterName->Visible = true;
			 textBoxName->Visible = true;
			 textBoxName->Focus();
		 }

private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 playerName = textBoxName->Text;
			 MessageBox::Show( "Thank you for entering your name, " + playerName
				 + "\n\nLet's get you to your table!");

			 // Setup the game layout
			 buttonSubmit->Visible = false;
			 labelEnterName->Visible = false;
			 textBoxName->Visible = false;
			 buttonLogin->Visible = false;
			 buttonResults->Visible = true;
		 }
};
}

