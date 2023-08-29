#pragma once
#include <cmath>
namespace expsolver {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rB6;
	private: System::Windows::Forms::RadioButton^ rB5;




	private: System::Windows::Forms::RadioButton^ rB4;

	private: System::Windows::Forms::RadioButton^ rB3;

	private: System::Windows::Forms::RadioButton^ rB2;

	private: System::Windows::Forms::RadioButton^ rB1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::Label^ label_1;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lbl_res;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label_res2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ label_er;
	private: System::ComponentModel::IContainer^ components;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rB6 = (gcnew System::Windows::Forms::RadioButton());
			this->rB5 = (gcnew System::Windows::Forms::RadioButton());
			this->rB4 = (gcnew System::Windows::Forms::RadioButton());
			this->rB3 = (gcnew System::Windows::Forms::RadioButton());
			this->rB2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lbl_res = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label_res2 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label_er = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Location = System::Drawing::Point(20, 55);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(274, 54);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод значения X {-13 <= X <= 20}";
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(64, 27);
			this->txt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(206, 20);
			this->txt->TabIndex = 12;
			this->txt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(40, 29);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x =";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rB6);
			this->groupBox2->Controls->Add(this->rB5);
			this->groupBox2->Controls->Add(this->rB4);
			this->groupBox2->Controls->Add(this->rB3);
			this->groupBox2->Controls->Add(this->rB2);
			this->groupBox2->Controls->Add(this->rB1);
			this->groupBox2->Location = System::Drawing::Point(9, 136);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(326, 81);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выбор точности";
			// 
			// rB6
			// 
			this->rB6->AutoSize = true;
			this->rB6->Location = System::Drawing::Point(230, 48);
			this->rB6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB6->Name = L"rB6";
			this->rB6->Size = System::Drawing::Size(70, 17);
			this->rB6->TabIndex = 3;
			this->rB6->TabStop = true;
			this->rB6->Text = L"0.000001";
			this->rB6->UseVisualStyleBackColor = true;
			// 
			// rB5
			// 
			this->rB5->AutoSize = true;
			this->rB5->Location = System::Drawing::Point(230, 26);
			this->rB5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB5->Name = L"rB5";
			this->rB5->Size = System::Drawing::Size(64, 17);
			this->rB5->TabIndex = 3;
			this->rB5->TabStop = true;
			this->rB5->Text = L"0.00001";
			this->rB5->UseVisualStyleBackColor = true;
			// 
			// rB4
			// 
			this->rB4->AutoSize = true;
			this->rB4->Location = System::Drawing::Point(120, 48);
			this->rB4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB4->Name = L"rB4";
			this->rB4->Size = System::Drawing::Size(58, 17);
			this->rB4->TabIndex = 3;
			this->rB4->TabStop = true;
			this->rB4->Text = L"0.0001";
			this->rB4->UseVisualStyleBackColor = true;
			// 
			// rB3
			// 
			this->rB3->AutoSize = true;
			this->rB3->Location = System::Drawing::Point(120, 26);
			this->rB3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB3->Name = L"rB3";
			this->rB3->Size = System::Drawing::Size(52, 17);
			this->rB3->TabIndex = 3;
			this->rB3->TabStop = true;
			this->rB3->Text = L"0.001";
			this->rB3->UseVisualStyleBackColor = true;
			// 
			// rB2
			// 
			this->rB2->AutoSize = true;
			this->rB2->Location = System::Drawing::Point(15, 48);
			this->rB2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB2->Name = L"rB2";
			this->rB2->Size = System::Drawing::Size(46, 17);
			this->rB2->TabIndex = 3;
			this->rB2->TabStop = true;
			this->rB2->Text = L"0.01";
			this->rB2->UseVisualStyleBackColor = true;
			// 
			// rB1
			// 
			this->rB1->AutoSize = true;
			this->rB1->Location = System::Drawing::Point(15, 26);
			this->rB1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB1->Name = L"rB1";
			this->rB1->Size = System::Drawing::Size(40, 17);
			this->rB1->TabIndex = 3;
			this->rB1->TabStop = true;
			this->rB1->Text = L"0.1";
			this->rB1->UseVisualStyleBackColor = true;
			this->rB1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rB1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(100, 250);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Результаты расчёта.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 279);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Исходное значение";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 318);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Точность";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 354);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Точное значение exp(x)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 397);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Число слогаемых";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 436);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Сумма ряда exp(x)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(253, 475);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 223);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(326, 25);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Рассчёты exp(x)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(17, 20);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Решение exp(x)";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label_1
			// 
			this->label_1->AutoSize = true;
			this->label_1->Location = System::Drawing::Point(182, 279);
			this->label_1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_1->Name = L"label_1";
			this->label_1->Size = System::Drawing::Size(0, 13);
			this->label_1->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(182, 318);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 12;
			// 
			// lbl_res
			// 
			this->lbl_res->AutoSize = true;
			this->lbl_res->Location = System::Drawing::Point(182, 354);
			this->lbl_res->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_res->Name = L"lbl_res";
			this->lbl_res->Size = System::Drawing::Size(0, 13);
			this->lbl_res->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(182, 397);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 14;
			// 
			// label_res2
			// 
			this->label_res2->AutoSize = true;
			this->label_res2->Location = System::Drawing::Point(182, 436);
			this->label_res2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_res2->Name = L"label_res2";
			this->label_res2->Size = System::Drawing::Size(0, 13);
			this->label_res2->TabIndex = 15;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label_er
			// 
			this->label_er->AutoSize = true;
			this->label_er->ForeColor = System::Drawing::Color::Red;
			this->label_er->Location = System::Drawing::Point(81, 120);
			this->label_er->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_er->Name = L"label_er";
			this->label_er->Size = System::Drawing::Size(0, 13);
			this->label_er->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 518);
			this->Controls->Add(this->label_er);
			this->Controls->Add(this->label_res2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->lbl_res);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label_1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
//  Рассчёт значений exp(x)
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_er->Text = L"";
	if (txt->Text != "") {
		double i, i_sum, i_fac = 1, i_res, eps, n = 1, ch, y, k = 1;
		i = Convert::ToInt32(txt->Text);
		ch = i;
		if (i >= -13 && i <= 20) {
			i_res = exp(i);
			this->label_1->Text = Convert::ToString(i);
			this->lbl_res->Text = (Convert::ToString(i_res));
			if ((rB1->Checked != true) && (rB2->Checked != true) && (rB3->Checked != true) && (rB4->Checked != true) && (rB5->Checked != true) &&
				(rB6->Checked != true)) {
				this->rB1->Checked = true;
			}
			if (rB1->Checked == true) {
				eps = 0.1;
			}
			if (rB2->Checked == true) {
				eps = 0.01;
			}
			if (rB3->Checked == true) {
				eps = 0.001;
			}
			if (rB4->Checked == true) {
				eps = 0.0001;
			}
			if (rB5->Checked == true) {
				eps = 0.00001;
			}
			if (rB6->Checked == true) {
				eps = 0.000001;
			}
			i_sum = 1;
			y = ch / i_fac;
			while (abs(y) >= eps) {
				i_sum += y;
				k++;
				ch *= i;
				n++;
				i_fac *= n;
				y = ch / i_fac;
			}
			

			
			this->label_res2->Text = Convert::ToString(i_sum);
			this->label10->Text = Convert::ToString(eps);
			this->label12->Text = Convert::ToString(n);

		}
		else {
			this->label_er->Text = "Число не входит в указанный промежуток";
		}
	}
	else {
		
		this->label_er->Text = "Вы забыли ввести данные";
	}
}
// Кнопка закрытия
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
// Алгоритм очистки полей и защита от дурака
private: System::Void txt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	this->label_1->Text = L"";
	this->lbl_res->Text = L"";
	this->label_res2->Text = L"";
	this->label10->Text = L"";
	this->label12->Text = L"";
	this->label_er->Text = L"";
	String^ text = txt->Text;
	if (!Char::IsDigit(e->KeyChar)  ) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-') {
			if ((e->KeyChar == '-' && txt->Text->IndexOf('-') == 0) || (e->KeyChar == '-' && (text->Contains("-"))) || (e->KeyChar == '-' && txt->Text->Length >= 1)) {
				e->Handled = true;
			}
		}
		else {
			e->Handled = true;
		}
		
	}
}
private: System::Void rB1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	;
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}