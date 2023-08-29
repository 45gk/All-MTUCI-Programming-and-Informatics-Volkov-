#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


namespace arraysorter {

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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_max;

	private: System::Windows::Forms::TextBox^ txt_min;

	private: System::Windows::Forms::TextBox^ txt_count;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rB_decrease;


	private: System::Windows::Forms::RadioButton^ rB_growth;

	private: System::Windows::Forms::RadioButton^ rB_not_even;

	private: System::Windows::Forms::RadioButton^ rB_even;

	private: System::Windows::Forms::RadioButton^ rB_max;

	private: System::Windows::Forms::RadioButton^ rB_min;

	private: System::Windows::Forms::RadioButton^ rB_mean;


	private: System::Windows::Forms::RadioButton^ rB_sum;

	private: System::Windows::Forms::TextBox^ txt_out;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_in;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ bt_action;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ bt_close;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_max = (gcnew System::Windows::Forms::TextBox());
			this->txt_min = (gcnew System::Windows::Forms::TextBox());
			this->txt_count = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rB_decrease = (gcnew System::Windows::Forms::RadioButton());
			this->rB_growth = (gcnew System::Windows::Forms::RadioButton());
			this->rB_not_even = (gcnew System::Windows::Forms::RadioButton());
			this->rB_even = (gcnew System::Windows::Forms::RadioButton());
			this->rB_max = (gcnew System::Windows::Forms::RadioButton());
			this->rB_min = (gcnew System::Windows::Forms::RadioButton());
			this->rB_mean = (gcnew System::Windows::Forms::RadioButton());
			this->rB_sum = (gcnew System::Windows::Forms::RadioButton());
			this->txt_out = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_in = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bt_action = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->bt_close = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txt_max);
			this->groupBox1->Controls->Add(this->txt_min);
			this->groupBox1->Controls->Add(this->txt_count);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(372, 121);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Максимальное значение диапазона";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Минимальное значение диапазона";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество элементов массива";
			// 
			// txt_max
			// 
			this->txt_max->Location = System::Drawing::Point(266, 72);
			this->txt_max->Name = L"txt_max";
			this->txt_max->Size = System::Drawing::Size(100, 20);
			this->txt_max->TabIndex = 2;
			this->txt_max->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_max_KeyPress);
			// 
			// txt_min
			// 
			this->txt_min->Location = System::Drawing::Point(266, 46);
			this->txt_min->Name = L"txt_min";
			this->txt_min->Size = System::Drawing::Size(100, 20);
			this->txt_min->TabIndex = 1;
			this->txt_min->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_min_TextChanged);
			this->txt_min->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_min_KeyPress);
			// 
			// txt_count
			// 
			this->txt_count->Location = System::Drawing::Point(266, 20);
			this->txt_count->Name = L"txt_count";
			this->txt_count->Size = System::Drawing::Size(100, 20);
			this->txt_count->TabIndex = 0;
			this->txt_count->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_count_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rB_decrease);
			this->groupBox2->Controls->Add(this->rB_growth);
			this->groupBox2->Controls->Add(this->rB_not_even);
			this->groupBox2->Controls->Add(this->rB_even);
			this->groupBox2->Controls->Add(this->rB_max);
			this->groupBox2->Controls->Add(this->rB_min);
			this->groupBox2->Controls->Add(this->rB_mean);
			this->groupBox2->Controls->Add(this->rB_sum);
			this->groupBox2->Location = System::Drawing::Point(12, 263);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(372, 162);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// rB_decrease
			// 
			this->rB_decrease->AutoSize = true;
			this->rB_decrease->Location = System::Drawing::Point(203, 130);
			this->rB_decrease->Name = L"rB_decrease";
			this->rB_decrease->Size = System::Drawing::Size(154, 17);
			this->rB_decrease->TabIndex = 7;
			this->rB_decrease->TabStop = true;
			this->rB_decrease->Text = L"Сортировка по убыванию";
			this->rB_decrease->UseVisualStyleBackColor = true;
			// 
			// rB_growth
			// 
			this->rB_growth->AutoSize = true;
			this->rB_growth->Location = System::Drawing::Point(203, 92);
			this->rB_growth->Name = L"rB_growth";
			this->rB_growth->Size = System::Drawing::Size(170, 17);
			this->rB_growth->TabIndex = 6;
			this->rB_growth->TabStop = true;
			this->rB_growth->Text = L"Сортировка по возрастанию";
			this->rB_growth->UseVisualStyleBackColor = true;
			this->rB_growth->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rB_growth_CheckedChanged);
			// 
			// rB_not_even
			// 
			this->rB_not_even->AutoSize = true;
			this->rB_not_even->Location = System::Drawing::Point(203, 53);
			this->rB_not_even->Name = L"rB_not_even";
			this->rB_not_even->Size = System::Drawing::Size(129, 17);
			this->rB_not_even->TabIndex = 5;
			this->rB_not_even->TabStop = true;
			this->rB_not_even->Text = L"Нечётные элементы";
			this->rB_not_even->UseVisualStyleBackColor = true;
			// 
			// rB_even
			// 
			this->rB_even->AutoSize = true;
			this->rB_even->Location = System::Drawing::Point(203, 19);
			this->rB_even->Name = L"rB_even";
			this->rB_even->Size = System::Drawing::Size(118, 17);
			this->rB_even->TabIndex = 4;
			this->rB_even->TabStop = true;
			this->rB_even->Text = L"Чётные элементы";
			this->rB_even->UseVisualStyleBackColor = true;
			// 
			// rB_max
			// 
			this->rB_max->AutoSize = true;
			this->rB_max->Location = System::Drawing::Point(3, 130);
			this->rB_max->Name = L"rB_max";
			this->rB_max->Size = System::Drawing::Size(158, 17);
			this->rB_max->TabIndex = 3;
			this->rB_max->TabStop = true;
			this->rB_max->Text = L"Максимальный элементы";
			this->rB_max->UseVisualStyleBackColor = true;
			// 
			// rB_min
			// 
			this->rB_min->AutoSize = true;
			this->rB_min->Location = System::Drawing::Point(3, 92);
			this->rB_min->Name = L"rB_min";
			this->rB_min->Size = System::Drawing::Size(152, 17);
			this->rB_min->TabIndex = 2;
			this->rB_min->TabStop = true;
			this->rB_min->Text = L"Минимальный элементы";
			this->rB_min->UseVisualStyleBackColor = true;
			// 
			// rB_mean
			// 
			this->rB_mean->AutoSize = true;
			this->rB_mean->Location = System::Drawing::Point(3, 53);
			this->rB_mean->Name = L"rB_mean";
			this->rB_mean->Size = System::Drawing::Size(118, 17);
			this->rB_mean->TabIndex = 1;
			this->rB_mean->TabStop = true;
			this->rB_mean->Text = L"Среднее значение";
			this->rB_mean->UseVisualStyleBackColor = true;
			// 
			// rB_sum
			// 
			this->rB_sum->AutoSize = true;
			this->rB_sum->Location = System::Drawing::Point(3, 19);
			this->rB_sum->Name = L"rB_sum";
			this->rB_sum->Size = System::Drawing::Size(117, 17);
			this->rB_sum->TabIndex = 0;
			this->rB_sum->TabStop = true;
			this->rB_sum->Text = L"Сумма элементов";
			this->rB_sum->UseVisualStyleBackColor = true;
			// 
			// txt_out
			// 
			this->txt_out->Location = System::Drawing::Point(12, 488);
			this->txt_out->Name = L"txt_out";
			this->txt_out->ReadOnly = true;
			this->txt_out->Size = System::Drawing::Size(372, 20);
			this->txt_out->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 472);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Результат операции";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(433, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Генерация массива";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(433, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(159, 20);
			this->textBox5->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(433, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 33);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ввод из файла";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// txt_in
			// 
			this->txt_in->Location = System::Drawing::Point(16, 167);
			this->txt_in->Name = L"txt_in";
			this->txt_in->Size = System::Drawing::Size(369, 20);
			this->txt_in->TabIndex = 7;
			this->txt_in->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_in_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Исходный массив";
			// 
			// bt_action
			// 
			this->bt_action->Location = System::Drawing::Point(433, 384);
			this->bt_action->Name = L"bt_action";
			this->bt_action->Size = System::Drawing::Size(159, 34);
			this->bt_action->TabIndex = 9;
			this->bt_action->Text = L"Выполнить";
			this->bt_action->UseVisualStyleBackColor = true;
			this->bt_action->Click += gcnew System::EventHandler(this, &MyForm::bt_action_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(430, 429);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Имя файла вывода";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(433, 445);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(159, 20);
			this->textBox7->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(433, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 32);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// bt_close
			// 
			this->bt_close->Location = System::Drawing::Point(451, 559);
			this->bt_close->Name = L"bt_close";
			this->bt_close->Size = System::Drawing::Size(136, 35);
			this->bt_close->TabIndex = 13;
			this->bt_close->Text = L"Закрыть";
			this->bt_close->UseVisualStyleBackColor = true;
			this->bt_close->Click += gcnew System::EventHandler(this, &MyForm::bt_close_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(430, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Имя файла ввода";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 606);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->bt_close);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->bt_action);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_in);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_out);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Обработка массива";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Кнопка закрытия	
private: System::Void bt_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   // Тело программы	
private: System::Void bt_action_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
		int n = Convert::ToInt32(txt_count->Text), cc = 0, count = 0, flag = 0;
		double cc1 = 0, tech = 0;
		String^ str = txt_in->Text;
		String^ str1;
		String^ num;
		str += " ";
		array<int>^ data(gcnew array<int>(n));
		array<int>^ data1(gcnew array<int>(n));

		//if (flag == 0) { // проверка, был ли массив уже введён
		
			for (int i = 0; i < str->Length; i++) {// Элементам массива присваиваются
				if (str[i] == ' ') {
					if (num != "") {
						data[count] = Convert::ToInt32(num); 
						num = "";
						count++;
					}
				}
				else {
					num += str[i];
				}


			}
			//}
			//flag = 1;


			if (rB_sum->Checked == true) {
				for (int i = 0; i < n; i++) {

					cc += data[i];

				}

				this->txt_in->Text = str;
				this->txt_out->Text = Convert::ToString(cc);
			}
			if (rB_mean->Checked == true) {
				for (int i = 0; i < n; i++) {

					cc += data[i];

				}
				cc1 = (round((cc / n) * 100)) / 100;
				this->txt_out->Text = Convert::ToString(cc1);
			}
			if (rB_min->Checked == true) {
				cc1 = 1.8446744e+19;
				for (int i = 0; i < n; i++) {
					if (data[i] <= cc1) {
						cc1 = data[i];
					}


				}
				this->txt_out->Text = Convert::ToString(cc1);
			}
			if (rB_max->Checked == true) {
				cc1 = -1.79769e+308;
				for (int i = 0; i < n; i++) {
					if (data[i] >= cc1) {
						cc1 = data[i];
					}


				}
				this->txt_out->Text = Convert::ToString(cc1);
			}
			if (rB_even->Checked == true) {
				for (int i = 0; i < n; i++) {
					if (data[i] % 2 == 0) {
						str1 += data[i];
						str1 += " ";
					}
				}
				this->txt_out->Text = str1;
			}
			if (rB_not_even->Checked == true) {
				for (int i = 0; i < n; i++) {
					if (abs(data[i]) % 2 > 0) {
						str1 += data[i];
						str1 += " ";
					}
				}
				this->txt_out->Text = str1;
			}
			if (rB_growth->Checked == true) {
				cc1 = 1.8446744e+19;
				for (int i = 0; i < n; i++) {
					for (int j = i; j < n; j++) {
						if (data[j] <= cc1) {
							cc1 = data[j];
							cc = j;
						}
					}
					tech = data[i];
					data[i] = cc1;
					data[cc] = tech;
					cc1 = 1.8446744e+19;
					str1 += data[i];
					str1 += " ";
				}
				this->txt_out->Text = str1;

			}
			if (rB_decrease->Checked == true) {
				cc1 = -1.79769e+308;
				for (int i = 0; i < n; i++) {
					for (int j = i; j < n; j++) {
						if (data[j] > cc1) {
							cc1 = data[j];
							cc = j;
						}
					}
					tech = data[i];
					data[i] = cc1;
					data[cc] = tech;
					cc1 = -1.79769e+308;
					str1 += data[i];
					str1 += " ";
				}
				this->txt_out->Text = str1;
			}

			;
		}
	catch (...) {
		MessageBox::Show("Ошибка! Неверно заполнены данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
	}
	
private: System::Void txt_in_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Защита от дурака
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-' || e->KeyChar == ' ') {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
	   // Генерация массива
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n, diff;
		//Random RNG = gcnew Random();
		double min, max;
		String^ str;
		n = Convert::ToInt32(txt_count->Text);
		min = Convert::ToDouble(txt_min->Text);
		max = Convert::ToDouble(txt_max->Text);
		array<int>^ gen(gcnew array<int>(n));
		diff = max - min + 1;
		for (int i = 0; i < n; i++) {
			gen[i] = min + rand() % diff; //RNG.Next(min, max);

		}
		for (int i = 0; i < n; i++) {

			str += gen[i];
			str += " ";

		}
		this->txt_in->Text = str;
	}
	catch (...) {
		MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}


}
private: System::Void txt_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Защита от дурака
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar != (char)Keys::Back) {
			e->Handled = true;
		}
	}
}
private: System::Void txt_min_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Защита от дурака
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-' ) {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void txt_max_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Защита от дурака
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-' ) {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void txt_min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rB_growth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
