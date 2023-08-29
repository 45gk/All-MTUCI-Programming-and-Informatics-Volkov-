#pragma once
#include <cmath>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	

	/// <summary>
	/// Сводка для FFirst
	/// </summary>
	public ref class FFirst : public System::Windows::Forms::Form
	{
	public:
		FFirst(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FFirst()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblOper;
	protected:

	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btSub;
	private: System::Windows::Forms::Button^ btMul;
	private: System::Windows::Forms::Button^ btDiv;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ error_messege;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btSub = (gcnew System::Windows::Forms::Button());
			this->btMul = (gcnew System::Windows::Forms::Button());
			this->btDiv = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->error_messege = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(147, 12);
			this->lblOper->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 20);
			this->lblOper->TabIndex = 0;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(320, 228);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(133, 37);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &FFirst::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(320, 185);
			this->btnReset->Margin = System::Windows::Forms::Padding(4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(133, 37);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Сбросить";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &FFirst::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(320, 12);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(133, 37);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &FFirst::btnAdd_Click);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(147, 74);
			this->txt1->Margin = System::Windows::Forms::Padding(4);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(148, 22);
			this->txt1->TabIndex = 4;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FFirst::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(147, 111);
			this->txt2->Margin = System::Windows::Forms::Padding(4);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(148, 22);
			this->txt2->TabIndex = 5;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FFirst::txt2_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(147, 148);
			this->txtResult->Margin = System::Windows::Forms::Padding(4);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(148, 22);
			this->txtResult->TabIndex = 6;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 82);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Число 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 119);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Число 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 151);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Результат";
			// 
			// btSub
			// 
			this->btSub->Location = System::Drawing::Point(320, 57);
			this->btSub->Margin = System::Windows::Forms::Padding(4);
			this->btSub->Name = L"btSub";
			this->btSub->Size = System::Drawing::Size(133, 37);
			this->btSub->TabIndex = 10;
			this->btSub->Text = L"Вычесть";
			this->btSub->UseVisualStyleBackColor = true;
			this->btSub->Click += gcnew System::EventHandler(this, &FFirst::btSub_Click);
			// 
			// btMul
			// 
			this->btMul->Location = System::Drawing::Point(320, 98);
			this->btMul->Margin = System::Windows::Forms::Padding(4);
			this->btMul->Name = L"btMul";
			this->btMul->Size = System::Drawing::Size(133, 37);
			this->btMul->TabIndex = 11;
			this->btMul->Text = L"Умножение";
			this->btMul->UseVisualStyleBackColor = true;
			this->btMul->Click += gcnew System::EventHandler(this, &FFirst::btMul_Click);
			// 
			// btDiv
			// 
			this->btDiv->Location = System::Drawing::Point(320, 143);
			this->btDiv->Margin = System::Windows::Forms::Padding(4);
			this->btDiv->Name = L"btDiv";
			this->btDiv->Size = System::Drawing::Size(133, 37);
			this->btDiv->TabIndex = 12;
			this->btDiv->Text = L"Деление";
			this->btDiv->UseVisualStyleBackColor = true;
			this->btDiv->Click += gcnew System::EventHandler(this, &FFirst::btDiv_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// error_messege
			// 
			this->error_messege->AutoSize = true;
			this->error_messege->ForeColor = System::Drawing::Color::Red;
			this->error_messege->Location = System::Drawing::Point(92, 185);
			this->error_messege->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->error_messege->Name = L"error_messege";
			this->error_messege->Size = System::Drawing::Size(0, 17);
			this->error_messege->TabIndex = 13;
			// 
			// FFirst
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 272);
			this->Controls->Add(this->error_messege);
			this->Controls->Add(this->btDiv);
			this->Controls->Add(this->btMul);
			this->Controls->Add(this->btSub);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->lblOper);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"FFirst";
			this->Text = L"Cale";
			this->Load += gcnew System::EventHandler(this, &FFirst::FFirst_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:int x1 = 0; int x2 = 0; char x3; char x4; char ds;
	
   //закрытие приложения
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	// операция сложения
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Сложение";
		this->error_messege->Text = L"";
		double i1, i2, i3;
		if (txt1->Text == "" || txt2->Text == "") {
			this->error_messege->Text = L"Вы забыли ввести данные";
			this->txtResult->Text = L"";
		}
		else {
			try {
				i1 = Convert::ToDouble(txt1->Text);
				i2 = Convert::ToDouble(txt2->Text);
				i3 = i1 + i2;
				this->txtResult->Text = Convert::ToString(i3);
			}

			catch (...) {
				this->error_messege->Text = L"Неправильный формат ввода";
				this->txtResult->Text = L"";
			}
		}
	}
	// операция сброса
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->lblOper->Text = L"";
	this->txt1->Text = L"";
	this->txt2->Text = L"";
	this->txtResult->Text = L"";
	this->error_messege->Text = L"";
}
	// операция вычетания
private: System::Void btSub_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblOper->Text = L"Вычетание";
	this->error_messege->Text = L"";
	double i1, i2, i3;
	
	try {
		if (txt1->Text == "" || txt2->Text == "") {
			this->error_messege->Text = L"Вы забыли ввести данные";
			this->txtResult->Text = L"";
		}
		else {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 - i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
	}
	catch (...) {
		this->error_messege->Text = L"Неправильный формат ввода";
		this->txtResult->Text = L"";

	}
	
	

}
	   // операция умножения
private: System::Void btMul_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblOper->Text = L"Умножение";
	this->error_messege->Text = L"";
	double i1, i2, i3;
	try {
		if (txt1->Text == "" || txt2->Text == "") {
			this->error_messege->Text = L"Вы забыли ввести данные";
			this->txtResult->Text = L"";
		}
		else {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
	}
	catch (...) {
		this->error_messege->Text = L"Неправильный формат ввода";
		this->txtResult->Text = L"";
	}
	
}
	   // операция деления
private: System::Void btDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblOper->Text = L"Деление";
	this->error_messege->Text = L"";
	double i1, i2, i3;
	
	try {
		if (txt1->Text == "" || txt2->Text == "") {
			this->error_messege->Text = L"Вы забыли ввести данные";
			this->txtResult->Text = L"";
		}
		else {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);

			if (i2 == 0) {
				this->error_messege->Text = L"Деление на ноль"; //вывод сообщения о делении на 0
				this->txtResult->Text = L"";
			}
			else {
				if (i1 >= i2) {
					i3 = i1 / i2;
					i3 = round(i3 * 100) / 100;
					this->txtResult->Text = Convert::ToString(i3);
				}
				else {
					i3 = i1 / i2;
					this->txtResult->Text = Convert::ToString(i3);
				}
			}
		}
	}
		catch (...) {
			this->error_messege->Text = L"Неправильный формат ввода";
			this->txtResult->Text = L"";
		}
	
}
private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	char t = e->KeyChar;
	String^ text = txt2->Text;
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == ds  || t == (char)Keys::Back || t == '-'  || t>=192 && t<=255 && t!='а') { // !!доработать ввод с клавиатуры!!
			
			if ((e->KeyChar == '-' && txt2->Text->IndexOf('-') == 0) || (e->KeyChar == '-' && (text->Contains("-"))) || (e->KeyChar == '-' && txt2->Text->Length >= 1)) { // проверка на один минус
				e->Handled = true;
			}
			
			if (e->KeyChar == ds && text->Contains(",")){    //проверка десятичного разделителя
				
				e->Handled = true;
						
						

					
				
			
			}
			if (t== (char)Keys::Back) { //проверка удалённого символа
				if (x3 == ds) {
					x1 = 0;
				}
			}
		}
		else {
			e->Handled = true;
		}
	
		
	}
	if (t == '0') {
		if ((txt2->Text->Length >= 1) && (txt2->Text[0] == '0'&& txt2->SelectionStart < 2 || (txt2->SelectionStart<3 &&txt2->Text->IndexOf('0') == 1 && txt2->Text->IndexOf('-') == 0)) ) { // !!проблема с границей массива!!
			e->Handled = true;
		}
	}
	x3 = t;
}
private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Если нажатая клавиша не цифровая.
	String^ text = txt1->Text;
	char t = e->KeyChar;
	if (!Char::IsDigit(e->KeyChar) ) {
		if (e->KeyChar == ds || t == (char)Keys::Back || t == '-' || t >= 192 && t <= 255 && t != 'а') { // !!доработать ввод с клавиатуры!!
			
			if ((e->KeyChar == '-' && txt1->Text->IndexOf('-') == 0) || (e->KeyChar == '-' && (text->Contains("-"))) || (e->KeyChar == '-' && txt1->Text->Length >= 1)) {
				e->Handled = true;
			}

			if (e->KeyChar == ds && text->Contains(",")) {    //проверка десятичного разделителя
				e->Handled = true;
			}
			if (t == (char)Keys::Back) { //проверка удалённого символа
				if (x4 == ds) {
					x2 = 0;
				}
			}
		}
		else {
			e->Handled = true;
		}


	}
	if (t == '0') {
		if ((txt1->Text->Length >= 1) && (txt1->Text[0] == '0' && txt1->SelectionStart < 2 || (txt1->SelectionStart < 3 && txt1->Text->IndexOf('0') == 1 && txt1->Text->IndexOf('-') == 0))) { // !!проблема с границей массива!!
			e->Handled = true;
		}
	}
	//if (txt1->Text->Length >= 1) {
		//x4 = txt1->Text[-1];
	//}

	// Запрет на ввод более одного десятичного разделителя.

				

	// Если нажатая клавиша не является клавишей BackSpace.

	
}
private: System::Void FFirst_Load(System::Object^ sender, System::EventArgs^ e) {
	NumberFormatInfo^ nfi = NumberFormatInfo::CurrentInfo;
	ds = (char)nfi->NumberDecimalSeparator[0];


}
};
}
