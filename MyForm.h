#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	protected:

	protected:



	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;




	private: System::Windows::Forms::Button^ btnMult;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;




	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnDecimal;

	private: System::Windows::Forms::Button^ btn0;



	private: System::Windows::Forms::Button^ btnAddSub;

	private: System::Windows::Forms::Button^ btnEqual;

	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnAdd;





	private: System::Windows::Forms::TextBox^ txtDisplay;

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
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnAddSub = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::IndianRed;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 234);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(85, 75);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::IndianRed;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(103, 234);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(85, 75);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::IndianRed;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(194, 234);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(85, 75);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::LightCoral;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(285, 234);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(85, 75);
			this->btnSub->TabIndex = 4;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::IndianRed;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 315);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(85, 75);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::IndianRed;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(103, 315);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(85, 75);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::IndianRed;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(194, 315);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(85, 75);
			this->btn6->TabIndex = 3;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::LightCoral;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(285, 315);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(85, 75);
			this->btnMult->TabIndex = 4;
			this->btnMult->Text = L"×";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::IndianRed;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 396);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(85, 75);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::IndianRed;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(103, 396);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(85, 75);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::IndianRed;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(194, 396);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(85, 75);
			this->btn3->TabIndex = 3;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::LightCoral;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(285, 396);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(85, 75);
			this->btnDiv->TabIndex = 4;
			this->btnDiv->Text = L"÷";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::Color::LightCoral;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(12, 477);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(85, 75);
			this->btnDecimal->TabIndex = 1;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::IndianRed;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn0->Location = System::Drawing::Point(103, 477);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(85, 75);
			this->btn0->TabIndex = 2;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnAddSub
			// 
			this->btnAddSub->BackColor = System::Drawing::Color::LightCoral;
			this->btnAddSub->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddSub->Location = System::Drawing::Point(194, 477);
			this->btnAddSub->Name = L"btnAddSub";
			this->btnAddSub->Size = System::Drawing::Size(85, 75);
			this->btnAddSub->TabIndex = 3;
			this->btnAddSub->Text = L"±";
			this->btnAddSub->UseVisualStyleBackColor = false;
			this->btnAddSub->Click += gcnew System::EventHandler(this, &MyForm::btnAddSub_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::LightCoral;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(285, 477);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(85, 75);
			this->btnEqual->TabIndex = 4;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::LightCoral;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(12, 153);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(85, 75);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::LightCoral;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(103, 153);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(85, 75);
			this->btnCE->TabIndex = 2;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::LightCoral;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->Location = System::Drawing::Point(194, 153);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(85, 75);
			this->btnBack->TabIndex = 3;
			this->btnBack->Text = L"⌫";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::LightCoral;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(285, 153);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(85, 75);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::White;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(11, 18);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(359, 125);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(381, 566);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnAddSub);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"Calculator [Made by NACK2]";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// my work begins here
int pressedEqual = 0;
double firstDigit, secondDigit, result;
String^ displayOperators;
String^ actualOperators;

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

// for when clicking number buttons
private: System::Void enterNumber(System::Object^ sender, System::EventArgs^ e) {
	// safe_cast returns the specified expression as the specified type
	// Usage: safe_cast< type-id >( expression ), expression will be converted to type-id's type
	Button^ numbers = safe_cast<Button^>(sender); // numbers is referring to each number button on calculator (0 to 9)

	if (txtDisplay->Text == "0") {
		// txtDisplay->Text is the display screen, by default it is 0, so if 0 change it to input value
		txtDisplay->Text = numbers->Text;
	}
	else if (pressedEqual == 1) {
		// if pressed equal and didn't press new operator to continue calculation, start brand new
		txtDisplay->Text = numbers->Text;
		actualOperators = "";
		displayOperators = "";
		firstDigit = 0;
		secondDigit = 0;
		pressedEqual = 0;
	}
	else {
		// if its not default value 0, change text on screen to previous + new value being inputted
		txtDisplay->Text = txtDisplay->Text + numbers->Text;
	}
}

// for when clicking operators buttons
private: System::Void enterOperators(System::Object^ sender, System::EventArgs^ e) {
	pressedEqual = 0;
	Button^ numbersOp = safe_cast<Button^>(sender);

	// CAN NOT do firstDigit = txtDisplay->Text bc firstDigit is double, txtDisplay->Text is a string, so have to convert
	// what Double::Parse() does is, the parameter must be a string containing a number, then it'll convert it to a Double, so 
	// if we passed in string "3.54", it will be converted to the double 3.54
	firstDigit = Double::Parse(txtDisplay->Text);

	displayOperators = numbersOp->Text;
	txtDisplay->Text = displayOperators; // clear whatever is in the text display and replace it with operator
	// can't just do operators = numbersOp->Text, because other than the addition, the other three operators are symbols, not * / or -
	if (displayOperators == "+") {
		actualOperators = "+";
	}
	else if (displayOperators == "-") {
		actualOperators = "-";
	}
	else if (displayOperators == "×") {
		actualOperators = "*";
	}
	else if (displayOperators == "÷") {
		actualOperators = "/";
	}
}

// for when clicking decimal button
private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	// conditional is saying if decimal point is not in text display already, add the decimal point
	if (!(txtDisplay->Text->Contains("."))) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}

// for when clicking equal button
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {	
	pressedEqual = 1;
	
	if ((txtDisplay->Text->Contains(System::Convert::ToString(displayOperators)))) {
		secondDigit = Double::Parse(txtDisplay->Text->Remove(0, 1)); // doing Remove() to remove single operator in front of number
	}
	else {
		secondDigit = Double::Parse(txtDisplay->Text);
	}

	if (actualOperators == "+") {
		result = firstDigit + secondDigit;
		// since txtDisplay->text is string and result is double, have to convert result to string
		txtDisplay->Text = System::Convert::ToString(result); 
	}
	else if (actualOperators == "-") {
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (actualOperators == "*") {
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (actualOperators == "/") {
		if (secondDigit == 0) {
			txtDisplay->Text = "Error";
		}
		else {
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	}
}

// for when button C (Clear) is clicked
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
	displayOperators = "0";
	actualOperators = "0";
	firstDigit = 0;
	secondDigit = 0;
	result = 0;
}

// for when button CE (Clear Entry is clicked, only clear current number, operator still stays
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = System::Convert::ToString(displayOperators);
}

// for when +/- button is clicked
private: System::Void btnAddSub_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		// Remove(x, y) removes y characters from the string starting from index x
		// so in this case, if number was negative, we would be removing negative sign in front
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1); 
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}


private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		// since Remove(x, y) removes y characters from string starting from index x,
		// we are starting from txtDisplay->Text->Length-1 which is end of string, and removing one character
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}

	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
}
};
}
