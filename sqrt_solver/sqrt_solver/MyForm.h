#pragma once
#include <cmath>
namespace sqrtsolver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ a;
	private: System::Windows::Forms::Label^ lable_a;
	private: System::Windows::Forms::Label^ lable_b;
	private: System::Windows::Forms::TextBox^ b;
	private: System::Windows::Forms::TextBox^ c;
	private: System::Windows::Forms::Label^ label_c;
	private: System::Windows::Forms::Button^ button_res;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label_res;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label_x2;
	private: System::Windows::Forms::Label^ label_x1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_err;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->lable_a = (gcnew System::Windows::Forms::Label());
			this->lable_b = (gcnew System::Windows::Forms::Label());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->label_c = (gcnew System::Windows::Forms::Label());
			this->button_res = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label_res = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label_x2 = (gcnew System::Windows::Forms::Label());
			this->label_x1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_err = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(190, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Корни уравнения";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// a
			// 
			this->a->Location = System::Drawing::Point(35, 61);
			this->a->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(76, 20);
			this->a->TabIndex = 1;
			this->a->TextChanged += gcnew System::EventHandler(this, &MyForm::a_TextChanged);
			this->a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::a_KeyPress);
			// 
			// lable_a
			// 
			this->lable_a->AutoSize = true;
			this->lable_a->Location = System::Drawing::Point(10, 61);
			this->lable_a->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lable_a->Name = L"lable_a";
			this->lable_a->Size = System::Drawing::Size(13, 13);
			this->lable_a->TabIndex = 2;
			this->lable_a->Text = L"a";
			// 
			// lable_b
			// 
			this->lable_b->AutoSize = true;
			this->lable_b->Location = System::Drawing::Point(10, 84);
			this->lable_b->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lable_b->Name = L"lable_b";
			this->lable_b->Size = System::Drawing::Size(13, 13);
			this->lable_b->TabIndex = 3;
			this->lable_b->Text = L"b";
			// 
			// b
			// 
			this->b->Location = System::Drawing::Point(35, 84);
			this->b->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(76, 20);
			this->b->TabIndex = 4;
			this->b->TextChanged += gcnew System::EventHandler(this, &MyForm::b_TextChanged);
			this->b->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::b_KeyPress);
			// 
			// c
			// 
			this->c->Location = System::Drawing::Point(35, 106);
			this->c->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(76, 20);
			this->c->TabIndex = 5;
			this->c->TextChanged += gcnew System::EventHandler(this, &MyForm::c_TextChanged);
			this->c->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::c_KeyPress);
			// 
			// label_c
			// 
			this->label_c->AutoSize = true;
			this->label_c->Location = System::Drawing::Point(10, 109);
			this->label_c->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_c->Name = L"label_c";
			this->label_c->Size = System::Drawing::Size(13, 13);
			this->label_c->TabIndex = 6;
			this->label_c->Text = L"c";
			// 
			// button_res
			// 
			this->button_res->Location = System::Drawing::Point(13, 158);
			this->button_res->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_res->Name = L"button_res";
			this->button_res->Size = System::Drawing::Size(71, 26);
			this->button_res->TabIndex = 7;
			this->button_res->Text = L"Сбросить";
			this->button_res->UseVisualStyleBackColor = true;
			this->button_res->Click += gcnew System::EventHandler(this, &MyForm::button_res_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(139, 158);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 26);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Решить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(260, 158);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 26);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label_res
			// 
			this->label_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_res->Location = System::Drawing::Point(136, 88);
			this->label_res->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_res->Name = L"label_res";
			this->label_res->Size = System::Drawing::Size(190, 55);
			this->label_res->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 58);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(49, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(286, 58);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 12;
			// 
			// label_x2
			// 
			this->label_x2->AutoSize = true;
			this->label_x2->Location = System::Drawing::Point(265, 61);
			this->label_x2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_x2->Name = L"label_x2";
			this->label_x2->Size = System::Drawing::Size(18, 13);
			this->label_x2->TabIndex = 13;
			this->label_x2->Text = L"x2";
			// 
			// label_x1
			// 
			this->label_x1->AutoSize = true;
			this->label_x1->Location = System::Drawing::Point(162, 61);
			this->label_x1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_x1->Name = L"label_x1";
			this->label_x1->Size = System::Drawing::Size(18, 13);
			this->label_x1->TabIndex = 14;
			this->label_x1->Text = L"x1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Коэффициенты";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(33, 34);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Уравнения";
			// 
			// label_err
			// 
			this->label_err->AutoSize = true;
			this->label_err->ForeColor = System::Drawing::Color::Red;
			this->label_err->Location = System::Drawing::Point(35, 130);
			this->label_err->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_err->Name = L"label_err";
			this->label_err->Size = System::Drawing::Size(0, 13);
			this->label_err->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 206);
			this->Controls->Add(this->label_err);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_x1);
			this->Controls->Add(this->label_x2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_res);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button_res);
			this->Controls->Add(this->label_c);
			this->Controls->Add(this->c);
			this->Controls->Add(this->b);
			this->Controls->Add(this->lable_b);
			this->Controls->Add(this->lable_a);
			this->Controls->Add(this->a);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Решение квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Закрытие
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   // Кнопка сброса
private: System::Void button_res_Click(System::Object^ sender, System::EventArgs^ e) {
	this->a->Text = L"";
	this->b->Text = L"";
	this->c->Text = L"";
	this->textBox1->Text = L"";
	this->textBox2->Text = L"";
	this->label_res->Text = L"";
	this->label_err->Text = L"";
}
// Кнопака решения
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_err->Text = L"";
	if (a->Text != "" &&  b->Text != "" && c->Text != "") {
		double i1, i2, i3, xi1, xi2, d = -1;
		i1 = Convert::ToDouble(a->Text);
		i2 = Convert::ToDouble(b->Text);
		i3 = Convert::ToDouble(c->Text);
		if (i2 * i2 - ((4) * i3 * i1) >= 0) {
			d = sqrt(i2 * i2 - ((4) * i3 * i1));
		}
		if (i1 == 0 && i2 == 0) {
			if (i3 == 0) {
				this->label_res->Text = "Верное равенство. X - любое число. ";
			}
			else {
				this->label_res->Text = "Неверное равенство. ";
			}
		}
		//d = sqrt(d);
		else if (d > 0 && i1 != 0) {
			xi1 = ((-1) * i2 + d) / (2 * i1);
			xi2 = ((-1) * i2 - d) / (2 * i1);
			xi1 = round(xi1 * 100) / 100;
			xi2 = round(xi2 * 100) / 100;
			this->textBox1->Text = Convert::ToString(xi1);
			this->textBox2->Text = Convert::ToString(xi2);
			this->label_res->Text = "Дискриминант больше 0. Уравнение имеет два корня.";
		}
		else if (d == 0) {
			xi1 = ((-1 * i2) / (2.0 * i1));
			xi1 = round(xi1 * 100) / 100;
			this->textBox1->Text = Convert::ToString(xi1);
			this->textBox2->Text = Convert::ToString(xi1);
			this->label_res->Text = "Дискриминант равен 0. Уравнение имеет два одинаковых корня.";
		}
		else if (d < 0) {
			this->textBox1->Text = L"";
			this->textBox2->Text = L"";
			this->label_res->Text = "Дискриминт меньше 0. Уравнение не имеет действительных корней.";

		}
		else if (i1 == 0 ) {
			xi1 = i3/i2;
			xi1 = round(xi1 * 100) / 100;
			this->textBox1->Text = Convert::ToString(xi1);
			this->textBox2->Text = L"";
			this->label_res->Text = "Линейное уравнение - имеет один корень.";
		}
		
		
		else {
			this->label_err->Text = "Неправильный формат ввода";
		}
	}
	else {
		this->label_err->Text = "Вы забыли ввести данные";
	}
}
	   // Защита от дурака
private: System::Void a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ text = a->Text;
		char t = e->KeyChar;
		if (!Char::IsDigit(e->KeyChar)) {
			if (e->KeyChar == ',' || t == (char)Keys::Back || t == '-' || t >= 192 && t <= 255 && t != 'а') { // !!доработать ввод с клавиатуры!!

				if ((e->KeyChar == '-' && a->Text->IndexOf('-') == 0) || (e->KeyChar == '-' && (text->Contains("-"))) || (e->KeyChar == '-' && a->Text->Length >= 1)) {
					e->Handled = true;
				}

				if (e->KeyChar == ',' && text->Contains(",")) {    //проверка десятичного разделителя
					e->Handled = true;
				}
			}
			else {
				e->Handled = true;
			}


		}
		if (t == '0') {
			if ((a->Text->Length >= 1) && (a->Text[0] == '0' && a->SelectionStart < 2 || (a->SelectionStart < 3 && a->Text->IndexOf('0') == 1 && a->Text->IndexOf('-') == 0))) { 
				e->Handled = true;
			}
		}
}
	   // Защита от дурака
private: System::Void b_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ text = b->Text;
	char t = e->KeyChar;
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == ',' || t == (char)Keys::Back || t == '-' || t >= 192 && t <= 255 && t != 'а') { // !!доработать ввод с клавиатуры!!

			if ((e->KeyChar == '-' && b->Text->IndexOf('-') == 0) || (e->KeyChar == '-' && (text->Contains("-"))) || (e->KeyChar == '-' && b->Text->Length >= 1)) {
				e->Handled = true;
			}

			if (e->KeyChar == ',' && text->Contains(",")) {    //проверка десятичного разделителя
				e->Handled = true;
			}
		}
		else {
			e->Handled = true;
		}


	}
	if (t == '0') {
		if ((b->Text->Length >= 1) && (b->Text[0] == '0' && b->SelectionStart < 2 || (b->SelectionStart < 3 && b->Text->IndexOf('0') == 1 && b->Text->IndexOf('-') == 0))) { // !!проблема с границей массива!!
			e->Handled = true;
		}
	}
}
private: System::Void b_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void c_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void a_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	   }
	   // Защита от дурака
private: System::Void c_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ text = c->Text;
	char t = e->KeyChar;
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == ',' || t == (char)Keys::Back || e->KeyChar == '-' || t >= 192 && t <= 255 && t != 'а') { // !!доработать ввод с клавиатуры!!

			if ((e->KeyChar == '-' && c->Text->IndexOf('-') == 0) ||(e->KeyChar == '-' && (text->Contains("-"))) || (e->KeyChar == '-' && c->Text->Length >= 1)) {
				e->Handled = true;
			}

			if (e->KeyChar == ',' && text->Contains(",")) {    //проверка десятичного разделителя
				e->Handled = true;
			}
		}
		else {
			e->Handled = true;
		}


	}
	if (t == '0') {
		if ((c->Text->Length >= 1) && (c->Text[0] == '0' && c->SelectionStart < 2 || (c->SelectionStart < 3 && c->Text->IndexOf('0') == 1 && c->Text->IndexOf('-') == 0))) { // !!проблема с границей массива!!
			e->Handled = true;
		}
	}

}
};
}