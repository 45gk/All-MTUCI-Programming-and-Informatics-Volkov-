#pragma once
#include <cmath>

namespace Calculatorb {

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
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	protected:



	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;



	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ buttonBack;




	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ buttonClear;

	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::Button^ buttonSQRT;



	private: System::Windows::Forms::Button^ buttonDiv;

	private: System::Windows::Forms::Button^ buttonMult;
	private: System::Windows::Forms::Button^ buttonProc;
	private: System::Windows::Forms::Button^ buttonSolve;





	private: System::Windows::Forms::Button^ buttonFrac;

	private: System::Windows::Forms::Button^ buttonMinus;

	private: System::Windows::Forms::Button^ buttonPlus;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Label^ label_Show;



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
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->buttonSQRT = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonProc = (gcnew System::Windows::Forms::Button());
			this->buttonSolve = (gcnew System::Windows::Forms::Button());
			this->buttonFrac = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->label_Show = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// seven
			// 
			this->seven->Location = System::Drawing::Point(12, 83);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(41, 36);
			this->seven->TabIndex = 0;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// eight
			// 
			this->eight->Location = System::Drawing::Point(68, 83);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(38, 36);
			this->eight->TabIndex = 1;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// nine
			// 
			this->nine->Location = System::Drawing::Point(122, 83);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(40, 36);
			this->nine->TabIndex = 2;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// four
			// 
			this->four->Location = System::Drawing::Point(12, 125);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(41, 38);
			this->four->TabIndex = 3;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->Location = System::Drawing::Point(68, 125);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(38, 38);
			this->five->TabIndex = 4;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// six
			// 
			this->six->Location = System::Drawing::Point(122, 125);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(40, 38);
			this->six->TabIndex = 5;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// one
			// 
			this->one->Location = System::Drawing::Point(12, 169);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(41, 38);
			this->one->TabIndex = 6;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// two
			// 
			this->two->Location = System::Drawing::Point(68, 169);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(38, 38);
			this->two->TabIndex = 7;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// three
			// 
			this->three->Location = System::Drawing::Point(122, 169);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(40, 38);
			this->three->TabIndex = 8;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->BackColor = System::Drawing::SystemColors::Control;
			this->buttonBack->ForeColor = System::Drawing::Color::Red;
			this->buttonBack->Location = System::Drawing::Point(12, 40);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(94, 37);
			this->buttonBack->TabIndex = 9;
			this->buttonBack->Text = L"Backspace";
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_Click);
			// 
			// button11
			// 
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(122, 40);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 37);
			this->button11->TabIndex = 10;
			this->button11->Text = L"CE";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->ForeColor = System::Drawing::Color::Red;
			this->buttonClear->Location = System::Drawing::Point(197, 40);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(61, 37);
			this->buttonClear->TabIndex = 11;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(12, 12);
			this->txt->Name = L"txt";
			this->txt->ReadOnly = true;
			this->txt->Size = System::Drawing::Size(246, 20);
			this->txt->TabIndex = 12;
			this->txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonSQRT
			// 
			this->buttonSQRT->Location = System::Drawing::Point(218, 83);
			this->buttonSQRT->Name = L"buttonSQRT";
			this->buttonSQRT->Size = System::Drawing::Size(40, 36);
			this->buttonSQRT->TabIndex = 14;
			this->buttonSQRT->Text = L"sqrt";
			this->buttonSQRT->UseVisualStyleBackColor = true;
			this->buttonSQRT->Click += gcnew System::EventHandler(this, &MyForm::buttonSQRT_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Location = System::Drawing::Point(172, 83);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(40, 36);
			this->buttonDiv->TabIndex = 15;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::buttonDiv_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->Location = System::Drawing::Point(172, 125);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(40, 38);
			this->buttonMult->TabIndex = 16;
			this->buttonMult->Text = L"*";
			this->buttonMult->UseVisualStyleBackColor = true;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::buttonMult_Click);
			// 
			// buttonProc
			// 
			this->buttonProc->Location = System::Drawing::Point(218, 125);
			this->buttonProc->Name = L"buttonProc";
			this->buttonProc->Size = System::Drawing::Size(40, 38);
			this->buttonProc->TabIndex = 17;
			this->buttonProc->Text = L"%";
			this->buttonProc->UseVisualStyleBackColor = true;
			this->buttonProc->Click += gcnew System::EventHandler(this, &MyForm::buttonProc_Click);
			// 
			// buttonSolve
			// 
			this->buttonSolve->Location = System::Drawing::Point(218, 215);
			this->buttonSolve->Name = L"buttonSolve";
			this->buttonSolve->Size = System::Drawing::Size(40, 38);
			this->buttonSolve->TabIndex = 18;
			this->buttonSolve->Text = L"=";
			this->buttonSolve->UseVisualStyleBackColor = true;
			this->buttonSolve->Click += gcnew System::EventHandler(this, &MyForm::buttonSolve_Click);
			// 
			// buttonFrac
			// 
			this->buttonFrac->Location = System::Drawing::Point(218, 169);
			this->buttonFrac->Name = L"buttonFrac";
			this->buttonFrac->Size = System::Drawing::Size(40, 38);
			this->buttonFrac->TabIndex = 18;
			this->buttonFrac->Text = L"1/x";
			this->buttonFrac->UseVisualStyleBackColor = true;
			this->buttonFrac->Click += gcnew System::EventHandler(this, &MyForm::buttonFrac_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Location = System::Drawing::Point(172, 169);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(40, 38);
			this->buttonMinus->TabIndex = 19;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(172, 215);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(40, 38);
			this->buttonPlus->TabIndex = 20;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(68, 215);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(40, 38);
			this->button21->TabIndex = 21;
			this->button21->Text = L",";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(122, 215);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 38);
			this->button22->TabIndex = 22;
			this->button22->Text = L"+\\-";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// zero
			// 
			this->zero->Location = System::Drawing::Point(12, 215);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(40, 38);
			this->zero->TabIndex = 23;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// label_Show
			// 
			this->label_Show->AutoSize = true;
			this->label_Show->Location = System::Drawing::Point(18, 15);
			this->label_Show->Name = L"label_Show";
			this->label_Show->Size = System::Drawing::Size(0, 13);
			this->label_Show->TabIndex = 24;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(274, 261);
			this->Controls->Add(this->label_Show);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonFrac);
			this->Controls->Add(this->buttonSolve);
			this->Controls->Add(this->buttonProc);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonSQRT);
			this->Controls->Add(this->txt);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double x1=0, x2= 0;
		int act_flag = 0, what_num = 0, num_lock = 0,count_after1 = 0, flag_after1 = 0, flag_after2 = 0, count_after2 =0;
		String^ last;

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 1;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 1;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 1;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 1;
			this->txt->Text = Convert::ToString(x2);
		}
	}
	
}

private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 2;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 2;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 2;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 2;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}

private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 3;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 3;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 3;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 3;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}

private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 4;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 4;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 4;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 4;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}

private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 5;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 5;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 5;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 5;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}
	   
private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 6;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 6;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 6;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 6;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}

private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 7;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 7;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 7;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 7;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}
private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			x1 = x1 * 10 + 8;
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 8;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 8;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 8;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}
private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		if (x1 >= 0) {
			if (flag_after1 == 1) {
				x1 = x1 * count_after1;
			}
			if (flag_after2 == 1) {
				x2 = x2 * count_after2;
			}
			x1 = x1 * 10 + 9;
			if (flag_after1 == 1) {
				x1 = x1 / count_after1;
			}
			if (flag_after2 == 1) {
				x2 = x2 / count_after2;
			}
			this->txt->Text = Convert::ToString(x1);
		}
		else if (x1 < 0) {
			x1 = x1 * 10 - 9;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) {
		if (x2 >= 0) {
			x2 = x2 * 10 + 9;
			this->txt->Text = Convert::ToString(x2);
		}
		else if (x2 < 0) {
			x2 = x2 * 10 - 9;
			this->txt->Text = Convert::ToString(x2);
		}
	}
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		x1 = x1 * 10 ;
		this->txt->Text = Convert::ToString(x1);
	}
	else if (what_num == 1) {
		x2 = x2 * 10 ;
		this->txt->Text = Convert::ToString(x2);
	}
}
// Дробная часть
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0 && flag_after1 == 0) {
		if (x1 > 0 || x1 < 0) {

			this->txt->Text = Convert::ToString(x1)+",";
			flag_after1 = 1;
		}
	}
	else if (what_num == 1 && flag_after2 == 0) {
		if (x2 > 0 || x2 < 0) {

			this->txt->Text = Convert::ToString(x2) + ",";
			flag_after2 = 1;
		}
	}
	
}
// Знаки
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0 || num_lock == 1) {
		x1 *= -1;
		this->txt->Text = Convert::ToString(x1);
	}
	else if (what_num == 1) {
		x2 *= -1;
		this->txt->Text = Convert::ToString(x2);
	}
}
// Кнопка BackSpace
private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flag_after1 == 1) {
		x1 = x1 * count_after1;
	}
	if (flag_after2 == 1) {
		x2 = x2 * count_after2;
	}
	if (what_num == 0) {
		if (flag_after1 != 1) {
			x1 = floor(x1 / 10);
			this->txt->Text = Convert::ToString(x1);
		}
		else if (count_after1 > 1) {
			x1 = floor(x1 / 10);;
			count_after1--;
			if (count_after1 == 0) {
				flag_after1 = 0;
			}
			this->txt->Text = Convert::ToString(x1);
		}
		else {
			flag_after1 = 0;
			this->txt->Text = Convert::ToString(x1);
		}
	}
	else if (what_num == 1) { 
		if (flag_after2 != 1) {
			x2 = floor(x2 / 10);
			this->txt->Text = Convert::ToString(x2);
		}
		else if (count_after2 > 1) {
			x2 = floor(x2 / 10);
			count_after2--;
			if (count_after2 == 0) {
				flag_after2 = 0;
				this->txt->Text = Convert::ToString(x2);
			}
		}
			else {
				flag_after2 = 0;
				this->txt->Text = Convert::ToString(x2);
			}
			
		
	}
}
// Очистка
	   //Полная
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = 0;
	x2 = 0;
	this->txt->Text = L"";
	what_num = 0;
	this->label_Show->Text = L"";
	num_lock = 0;

}
	   //Неполная
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 0) {
		x1 = 0;
		this->txt->Text = L"";
	}
	else if (what_num == 1) {
		x2 = 0;
		this->txt->Text = L"";
	}
	
	num_lock = 0;
}
	   // Кнопки действия
private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	act_flag = 1;
	what_num = 1;
	last = x1 + " " + "+";
	this->label_Show->Text = last;
}
private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	act_flag = 2;
	what_num = 1;
	last = x1 + " " + "-";
	this->label_Show->Text = last;
}
private: System::Void buttonMult_Click(System::Object^ sender, System::EventArgs^ e) {
	act_flag = 3;
	what_num = 1;
	last = x1 + " " + "*";
	this->label_Show->Text = last;
}
private: System::Void buttonDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	act_flag = 4;
	what_num = 1;
	last = x1 + " " + "/";
	this->label_Show->Text = last;
}
private: System::Void buttonSQRT_Click(System::Object^ sender, System::EventArgs^ e) {
	
	act_flag = 5;
	what_num = 1;
	last = "sqrt(" + x1 + ")";
	this->label_Show->Text = last;

}
private: System::Void buttonProc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (what_num == 1) {
		//act_flag = 6;
		x2 = x1 * (x2 / 100);
		//last = x1 + " " + "%";
		//this->label_Show->Text = last;
		this->txt->Text = Convert::ToString(x2);
	}
}
private: System::Void buttonFrac_Click(System::Object^ sender, System::EventArgs^ e) {
	act_flag = 7;
	what_num = 1;
	last = "1/"+x1;
	this->label_Show->Text = last;
}
// Кнопка решения
private: System::Void buttonSolve_Click(System::Object^ sender, System::EventArgs^ e) {
	
	switch (act_flag)
	{
	case 1:
		x1 = x1 + x2;
		this->txt->Text = Convert::ToString(x1);
		break;
	case 2:
		x1 = x1 - x2;
		this->txt->Text = Convert::ToString(x1);
		break;
	case 3:
		x1 = x1 * x2;
		this->txt->Text = Convert::ToString(x1);
		break;
	case 4:
		if (x2 != 0) {
			x1 = x1 / x2;
			this->txt->Text = Convert::ToString(x1);
		}
		else {
			this->txt->Text = "Деление на 0";
		}
		break;
	case 5:
		if (x1 >= 0) {
			x1 = sqrt(x1);
			this->txt->Text = Convert::ToString(x1);
		}
		else {
			this->txt->Text = "Нельзя извлечь корень из отрицательного числа";
		}
		break;
	case 6:
		//x2 = x1*(x2/100);
		//this->txt->Text = Convert::ToString(x2);
		break;
	case 7:
		if (x1 != 0) {
			x1 = 1 / x1;
			this->txt->Text = Convert::ToString(x1);
		}
		else {
			this->txt->Text = "Деление на 0";
		}
		break;
	default:
		MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		break;
	}
	x2 = 0;
	this->label_Show->Text = L"";
	
}
};
}
