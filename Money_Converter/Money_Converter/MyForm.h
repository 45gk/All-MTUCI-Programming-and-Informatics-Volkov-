#pragma once
#include <cmath>
namespace MoneyConverter {

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
	private: System::Windows::Forms::Button^ Convert_btn;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::TextBox^ txt4;


	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label7;


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
			this->Convert_btn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Convert_btn
			// 
			this->Convert_btn->Location = System::Drawing::Point(351, 206);
			this->Convert_btn->Name = L"Convert_btn";
			this->Convert_btn->Size = System::Drawing::Size(134, 37);
			this->Convert_btn->TabIndex = 0;
			this->Convert_btn->Text = L"Конвертировать";
			this->Convert_btn->UseVisualStyleBackColor = true;
			this->Convert_btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(491, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(179, 49);
			this->txt3->Name = L"txt3";
			this->txt3->ReadOnly = true;
			this->txt3->Size = System::Drawing::Size(100, 22);
			this->txt3->TabIndex = 3;
			this->txt3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txt4
			// 
			this->txt4->Location = System::Drawing::Point(12, 49);
			this->txt4->Name = L"txt4";
			this->txt4->ReadOnly = true;
			this->txt4->Size = System::Drawing::Size(106, 22);
			this->txt4->TabIndex = 4;
			this->txt4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(237, 24);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(70, 22);
			this->txt1->TabIndex = 5;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(237, 52);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(70, 22);
			this->txt2->TabIndex = 6;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(279, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(6, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Курс обмена";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->radioButton1->Location = System::Drawing::Point(10, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(144, 21);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Доллары в рубли";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->radioButton2->Location = System::Drawing::Point(10, 48);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(142, 21);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Рубли в доллары";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label3->Location = System::Drawing::Point(6, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Сумма для конвертации";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label4->Location = System::Drawing::Point(124, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Location = System::Drawing::Point(12, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 114);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label7->Location = System::Drawing::Point(176, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label5->Location = System::Drawing::Point(179, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label6->Location = System::Drawing::Point(157, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"=";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->txt4);
			this->groupBox2->Controls->Add(this->txt3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox2->Location = System::Drawing::Point(12, 146);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(313, 77);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выходные данные";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox3->Location = System::Drawing::Point(343, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(245, 144);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Направление конвертации";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->radioButton4->Location = System::Drawing::Point(10, 117);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(115, 21);
			this->radioButton4->TabIndex = 12;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Рубли в евро";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->radioButton3->Location = System::Drawing::Point(10, 90);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(115, 21);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Евро в рубли";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 255);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Convert_btn);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Обменник";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Инициализация переменных	
		int flag1 = 0, flag2 = 0, current_flag = 16, last = 2;
		double current_course = 80, f_course = 1;


//КНОПКА ЗАКРЫТИЯ
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
	this->Close();
}

//БЛОК КОНВЕРТАЦИИ
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
	if (txt1->Text =="" || txt2->Text == "") {
		MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		double i1, i2, i3;

		switch (current_flag)
		{
		case 1:
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			i3 = round(i3 * 100) / 100;
			break;

		case 2:
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			if (i2 != 0) {
				i3 = i1 / i2;
				i3 = round(i3 * 100) / 100;
			}
			else {
				i3 = 0;
			}
			break;

		case 3:
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			i3 = round(i3 * 100) / 100;
			break;
		case 4:
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			if (i2 != 0) {
				i3 = i1 / i2;
				i3 = round(i3 * 100) / 100;
			}
			else {
				i3 = 0;
			}
			break;

		default:
			break;
		}

		this->txt3->Text = Convert::ToString(i3);
		this->txt4->Text = Convert::ToString(i1);
		current_course = Convert::ToDouble(txt2->Text);
		f_course = Convert::ToDouble(txt1->Text);
	}
}
// Блоки кнопок
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 1;
	flag2 = 0;
	current_flag = 1;
	
	this->txt1->Text = Convert::ToString(f_course);
	this->txt2->Text = Convert::ToString(current_course);
		
	
	this->txt3->Text = L"";
	this->txt4->Text = L"";
	this->label5->Text = "$";  // во входных данных
	this->label4->Text = "$";  // 1 в выходных данных
	this->label1->Text = "руб.";  // 2 в выходных данных
	this->label7->Text = "$/руб.";
	last = 1;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 1;
	flag2 = 0;
	current_flag = 2;
	this->txt1->Text = Convert::ToString(f_course);
	this->txt2->Text = Convert::ToString(current_course);
	
	
	this->txt3->Text = L"";
	this->txt4->Text = L"";
	this->label5->Text = "Рубли";  // во входных данных
	this->label4->Text = "руб.";  // 1 в выходных данных
	this->label1->Text = "$";  // 2 в выходных данных
	this->label7->Text = "$/руб.";
	last = 1;
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	current_flag = 3;
	flag2 = 1;
	flag1 = 0;
	this->txt1->Text = Convert::ToString(f_course);
	this->txt2->Text = Convert::ToString(current_course);
	
	this->txt3->Text = L"";
	this->txt4->Text = L"";
	this->label5->Text = "€";  // во входных данных
	this->label4->Text = "€";  // 1 в выходных данных
	this->label1->Text = "руб.";  // 2 в выходных данных
	this->label7->Text = "€/руб.";
	last = 2;
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flag2 = 1;
	flag1 = 0;
	current_flag = 4;
	this->txt1->Text = Convert::ToString(f_course);
	this->txt2->Text = Convert::ToString(current_course);

	
	this->txt3->Text = L"";
	this->txt4->Text = L"";
	this->label5->Text = "Рубли";  // во входных данных
	this->label4->Text = "руб.";  // 1 в выходных данных
	this->label1->Text = "€";  // 2 в выходных данных
	this->label7->Text = "€/руб.";
	last = 2;

}
// Защита от дурака
private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ text = txt1->Text;
	char t = e->KeyChar;
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == ',' || t == (char)Keys::Back ||  t >= 192 && t <= 255 && t != 'а') { 
			if (e->KeyChar == ',' && text->Contains(",")) {    //проверка десятичного разделителя
				e->Handled = true;
			}
		}
		else {
			e->Handled = true;
		}


	}
	if (t == '0') {
		if ((txt1->Text->Length >= 1) && (txt1->Text[0] == '0' && txt1->SelectionStart < 2 || (txt1->SelectionStart < 3 && txt1->Text->IndexOf('0') == 1 && txt1->Text->IndexOf('-') == 0))) { 
			e->Handled = true;
		}
	}
}
// Защита от дурака
private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ text = txt2->Text;
	char t = e->KeyChar;
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == ',' || t == (char)Keys::Back ||  t >= 192 && t <= 255 && t != 'а') { 
			if (e->KeyChar == ',' && text->Contains(",")) {    //проверка десятичного разделителя
				e->Handled = true;
			}
		}
		else {
			e->Handled = true;
		}
	}
	if (t == '0') {
		if ((txt2->Text->Length >= 1) && (txt2->Text[0] == '0' && txt2->SelectionStart < 2 || (txt2->SelectionStart < 3 && txt2->Text->IndexOf('0') == 1 && txt2->Text->IndexOf('-') == 0))) { 
			e->Handled = true;
		}
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

