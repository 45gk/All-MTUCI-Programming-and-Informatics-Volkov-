#pragma once
#include <algorithm>
#include <vector>
namespace IndividualWork {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;


	protected:





	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ txtP1_a;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ txtP1_b;

	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ txtP2_out_number;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;



























	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::Button^ bt_rand;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Button^ button_gen;
	private: System::Windows::Forms::Button^ buttonP3_complete;

	private: System::Windows::Forms::TextBox^ textP3_out;
	private: System::Windows::Forms::TextBox^ textP3_in;



	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ lblP4_res;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TextBox^ txtP4_inj;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txtP1_out_pl;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ txtP1_count;



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtP1_count = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->txtP1_out_pl = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->bt_rand = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->txtP1_a = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtP1_b = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtP2_out_number = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button_gen = (gcnew System::Windows::Forms::Button());
			this->buttonP3_complete = (gcnew System::Windows::Forms::Button());
			this->textP3_out = (gcnew System::Windows::Forms::TextBox());
			this->textP3_in = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->lblP4_res = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->txtP4_inj = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(12, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(418, 412);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtP1_count);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Controls->Add(this->txtP1_out_pl);
			this->tabPage1->Controls->Add(this->label33);
			this->tabPage1->Controls->Add(this->label32);
			this->tabPage1->Controls->Add(this->bt_rand);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->txtP1_a);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->txtP1_b);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(410, 386);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Задание 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtP1_count
			// 
			this->txtP1_count->Location = System::Drawing::Point(275, 58);
			this->txtP1_count->Name = L"txtP1_count";
			this->txtP1_count->Size = System::Drawing::Size(100, 20);
			this->txtP1_count->TabIndex = 16;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(53, 61);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(216, 13);
			this->label34->TabIndex = 15;
			this->label34->Text = L"Колличество эллементов для генерации:";
			// 
			// txtP1_out_pl
			// 
			this->txtP1_out_pl->Location = System::Drawing::Point(14, 305);
			this->txtP1_out_pl->Name = L"txtP1_out_pl";
			this->txtP1_out_pl->ReadOnly = true;
			this->txtP1_out_pl->Size = System::Drawing::Size(372, 20);
			this->txtP1_out_pl->TabIndex = 14;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(11, 278);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(106, 13);
			this->label33->TabIndex = 13;
			this->label33->Text = L"Места элементов b";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(13, 278);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 13);
			this->label32->TabIndex = 12;
			// 
			// bt_rand
			// 
			this->bt_rand->Location = System::Drawing::Point(56, 191);
			this->bt_rand->Name = L"bt_rand";
			this->bt_rand->Size = System::Drawing::Size(122, 34);
			this->bt_rand->TabIndex = 11;
			this->bt_rand->Text = L"Генерация массива";
			this->bt_rand->UseVisualStyleBackColor = true;
			this->bt_rand->Click += gcnew System::EventHandler(this, &MyForm::bt_rand_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(11, 250);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(178, 13);
			this->label22->TabIndex = 9;
			this->label22->Text = L"Результат выполнения операции:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(210, 191);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(145, 34);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Выполнить операцию";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// txtP1_a
			// 
			this->txtP1_a->Location = System::Drawing::Point(142, 120);
			this->txtP1_a->Name = L"txtP1_a";
			this->txtP1_a->Size = System::Drawing::Size(244, 20);
			this->txtP1_a->TabIndex = 5;
			this->txtP1_a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtP1_a_KeyPress);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 123);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(124, 13);
			this->label21->TabIndex = 4;
			this->label21->Text = L"Последовательность a";
			// 
			// txtP1_b
			// 
			this->txtP1_b->Location = System::Drawing::Point(142, 153);
			this->txtP1_b->Name = L"txtP1_b";
			this->txtP1_b->Size = System::Drawing::Size(244, 20);
			this->txtP1_b->TabIndex = 3;
			this->txtP1_b->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtP1_b_KeyPress);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 153);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(48, 13);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Числа b";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(3, 25);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 20);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Задание 1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->txtP2_out_number);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(410, 386);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Задание2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(261, 268);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 25);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Выполнить операцию";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(7, 3);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 16);
			this->label17->TabIndex = 12;
			this->label17->Text = L"Задание 2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 290);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(178, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Результат выполнения операции:";
			// 
			// txtP2_out_number
			// 
			this->txtP2_out_number->Location = System::Drawing::Point(129, 335);
			this->txtP2_out_number->Name = L"txtP2_out_number";
			this->txtP2_out_number->ReadOnly = true;
			this->txtP2_out_number->Size = System::Drawing::Size(100, 20);
			this->txtP2_out_number->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Матрица A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Количество четвёрок:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 104);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(382, 158);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Размерность матрицы: 4x4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label31);
			this->tabPage5->Controls->Add(this->label30);
			this->tabPage5->Controls->Add(this->button_gen);
			this->tabPage5->Controls->Add(this->buttonP3_complete);
			this->tabPage5->Controls->Add(this->textP3_out);
			this->tabPage5->Controls->Add(this->textP3_in);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(410, 386);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Задание 3";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(29, 51);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(323, 13);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Запись числа в обратном порядке с помощью подпрограммы";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(29, 237);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(175, 13);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Результат выполнения операции";
			// 
			// button_gen
			// 
			this->button_gen->Location = System::Drawing::Point(215, 122);
			this->button_gen->Name = L"button_gen";
			this->button_gen->Size = System::Drawing::Size(134, 37);
			this->button_gen->TabIndex = 8;
			this->button_gen->Text = L"Сгенирировать число";
			this->button_gen->UseVisualStyleBackColor = true;
			this->button_gen->Click += gcnew System::EventHandler(this, &MyForm::button_gen_Click);
			// 
			// buttonP3_complete
			// 
			this->buttonP3_complete->Location = System::Drawing::Point(32, 183);
			this->buttonP3_complete->Name = L"buttonP3_complete";
			this->buttonP3_complete->Size = System::Drawing::Size(130, 34);
			this->buttonP3_complete->TabIndex = 7;
			this->buttonP3_complete->Text = L"Выполнить операцию";
			this->buttonP3_complete->UseVisualStyleBackColor = true;
			this->buttonP3_complete->Click += gcnew System::EventHandler(this, &MyForm::buttonP3_complete_Click);
			// 
			// textP3_out
			// 
			this->textP3_out->Location = System::Drawing::Point(153, 273);
			this->textP3_out->Name = L"textP3_out";
			this->textP3_out->ReadOnly = true;
			this->textP3_out->Size = System::Drawing::Size(100, 20);
			this->textP3_out->TabIndex = 5;
			// 
			// textP3_in
			// 
			this->textP3_in->Location = System::Drawing::Point(91, 131);
			this->textP3_in->Name = L"textP3_in";
			this->textP3_in->Size = System::Drawing::Size(100, 20);
			this->textP3_in->TabIndex = 4;
			this->textP3_in->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textP3_in_KeyPress);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(29, 97);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(174, 13);
			this->label25->TabIndex = 3;
			this->label25->Text = L"Введите или сгенерируйте число";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(29, 276);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(99, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Полученное число";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(29, 134);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(39, 13);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Число";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(28, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Задание 3";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label29);
			this->tabPage6->Controls->Add(this->lblP4_res);
			this->tabPage6->Controls->Add(this->label28);
			this->tabPage6->Controls->Add(this->button9);
			this->tabPage6->Controls->Add(this->txtP4_inj);
			this->tabPage6->Controls->Add(this->label27);
			this->tabPage6->Controls->Add(this->label26);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(410, 386);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Задание 4";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(15, 64);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(201, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Определение, закрыты ли все скобки";
			// 
			// lblP4_res
			// 
			this->lblP4_res->AutoSize = true;
			this->lblP4_res->Location = System::Drawing::Point(14, 290);
			this->lblP4_res->Name = L"lblP4_res";
			this->lblP4_res->Size = System::Drawing::Size(0, 13);
			this->lblP4_res->TabIndex = 5;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(14, 240);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(204, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Результат выполнения операции";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(261, 164);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(129, 35);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Выполнить операцию";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// txtP4_inj
			// 
			this->txtP4_inj->Location = System::Drawing::Point(3, 138);
			this->txtP4_inj->Name = L"txtP4_inj";
			this->txtP4_inj->Size = System::Drawing::Size(404, 20);
			this->txtP4_inj->TabIndex = 2;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(14, 111);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(86, 13);
			this->label27->TabIndex = 1;
			this->label27->Text = L"Введите строку";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(14, 26);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(98, 20);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Задание 4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 427);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Индивидуальная работа";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


// Блок 2 страницы

		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			//const  int n= Convert::ToInt32(txtP2_n->Text), m= Convert::ToInt32(txtP2_m->Text);
			try {
				int count = 0;
				const  int n1 = 4, m1 = 4;
				String^ num;
				String^ str;
				str = richTextBox1->Text;
				count = 0;
				array<int>^ data(gcnew array<int>(16));
				for (int i = 0; i < str->Length; i++) {
					if (str[i] == '0') {
						data[count] = 0;
						count++;
					}
					if (str[i] == '1') {
						if  (i < str->Length -1) {
							if (str[i + 1] == '1') {
								data[count] = 11;
								count++;
								i++;
							}
							else {
								data[count] = 1;
								count++;
							}
						}
						else {
							data[count] = 1;
							count++;
						}
						
					}
					//if(	str[i] == '6') {
						//data[count] = 6;
						//count++;

					//}
					if (str[i] == '5') {
						data[count] = 5;
						count++;
					}


				}
				int b[4][4];
				int count_of_4 = 0;
				for (size_t i = 0, k = 0; i < 4; ++i)
					for (size_t j = 0; j < 4; ++j)
						b[i][j] = data[k++];
				
				
				for (int i = 0; i < 3; i++) {
					for (int j = 1; j < 4; j++) {
						if  (  b[i][j] != b[i + 1][j] && b[i][j] != b[i + 1][j-1] && b[i][j] != b[i][j - 1] && b[i+1][j] != b[i + 1][j - 1] && b[i][j-1] != b[i + 1][j - 1]) {
							count_of_4++;
					}
					}
				}
				//int count_of_4 = 0;
				//for (int i = 0; i < 4; i++) {
					//for (int j = 1; j < 4; j++) {
						//num += b[i][j];
						//num += " ";
					//}
				//}

				//for (int i = 0; i < 4; i++) {
					//
					//
				//}

				//num = "";
				//this->txtP2_out_number->Text = num;
				this->txtP2_out_number->Text = Convert::ToString(count_of_4);
			}
			catch (...) {
				MessageBox::Show("Ошибка! Вы неправильно ввели данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
			   //защита от дурака
private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '0' || e->KeyChar == ' ' || e->KeyChar == '1' || e->KeyChar == '5' ) {
			;
		}
		else {
			e->Handled = true;
		}
	
}
// Блок 3 страницы
			   int Rev(int a) {
				   int b = 0,d;
				   while (a > 0) {
					   d = a % 10;
					   
						   b =b*10 + d;
						   a /= 10;
				   }
						
				   return b;
				}
	private: System::Void buttonP3_complete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textP3_in->Text != "") {
			int a = Convert::ToInt64(textP3_in->Text), res;
			res = Rev(a);
			this->textP3_out->Text = Convert::ToString(res);
		}
		else{
			MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button_gen_Click(System::Object^ sender, System::EventArgs^ e) {
		int a;
		a = rand();
		this->textP3_in->Text = Convert::ToString(a);
	}
	private: System::Void textP3_in_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {
		
		
		
			e->Handled = true;
		
	}
}
	
// Блок 4 страницы
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int  count = 0, count_closed = 0, count_left=0;
	String^ str = txtP4_inj->Text;
	for (int i = 0; i < str->Length; i++) {
		if (str[i] == '(') {
			
			count_closed++;
		}
		if (str[i] == ')' && count_closed>0) {
			
			count++;
			count_closed--;
		}
		else if (str[i] == ')' && count_closed == 0) {
			count_left++;
		}
	}
	if (count > 0 && count_closed == 0 && count_left == 0) {
		this->lblP4_res->Text="Все скобки закрыты";
	}
	else if (count_closed>0 || count_left > 0) {
		this->lblP4_res->Text = "Некоторые скобки не закрыты";
	}
	else if (count == 0 && count_left == 0) {
		this->lblP4_res->Text = "В строке нет скобок";
	}
}
	   // Блок 1 страницы
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (txtP1_a->Text != "" && txtP1_b->Text != "") {
			int  cc = 0, count = 0, flag = 0, n;
			double cc1 = 0, tech = 0;
			String^ str = txtP1_a->Text;
			String^ str1;
			String^ num;
			str += " ";
			int block = 0;

			int  cc_2 = 0, count_2 = 0, flag_2 = 0, n_2;
			double cc1_2 = 0, tech_2 = 0;
			String^ str_2 = txtP1_b->Text;
			String^ str1_2;
			String^ num_2;
			str_2 += " ";
			int fl = 0, fl_1 = 0, co = 0, co_1 = 1;
			int block_1 = 0;

			// 1 последовательность
			for (int i = 0; i < str->Length; i++) {// Элементам массива присваиваются
				if (str[i] == ' ') {
					if (num != "") {
						num = "";
						count++;
					}
				}
				else {
					num += str[i];
				}
			}
			num = "";

			n = count;
			count = 0;

			array<double>^ data = gcnew array<double>(n);

			for (int i = 0; i < str->Length; i++) {// Элементам массива присваиваются
				if (str[i] == ' ') {
					if (num != "") {
						if (fl == 1) {
							tech = Convert::ToDouble(num);
							tech /= 10 ^ co;
						}
						data[count] = Convert::ToDouble(num);
						num = "";
						count++;
						fl = 0;
						co = 0;

					}
				}
				else {
					if (str[i] == ',') {
						fl = 1;
					}
					if (fl == 1) {
						co++;
					}
					num += str[i];
				}


			}
			for (int i = 0; i < n; i++) {

				str1 += data[i];
				if (i >= 1) {
					if (data[i] < data[i - 1]) {
						block = 1;
					}
				}
				str1 += " ";

			}
			
			for (int i = 0; i < str_2->Length; i++) {// Элементам массива присваиваются
				if (str_2[i] == ' ') {
					if (num_2 != "") {
						if (fl_1 == 1) {
						}
						num_2 = "";
						count_2++;


					}
				}
				else {

					num_2 += str_2[i];
				}
			}
			num_2 = "";
			fl_1 = 0;
			co_1 = 0;
			n_2 = count_2;
			count_2 = 0;

			array<double>^ data_2 = gcnew array<double>(n_2);
			array<int>^ data1_2(gcnew array<int>(n_2));


			for (int i = 0; i < str_2->Length; i++) {// Элементам массива присваиваются
				if (str_2[i] == ' ') {
					if (num_2 != "") {
						if (fl_1 == 1) {
							tech_2 = Convert::ToDouble(num_2);
							tech_2 /= 10 ^ co;
						}
						data_2[count_2] = Convert::ToDouble(num_2);
						num_2 = "";
						count_2++;
						co_1 = 0;
						fl_1 = 0;

					}
				}
				else {
					if (str_2[i] == ',') {
						fl_1 = 1;
					}
					if (fl_1 == 1) {
						co_1++;
					}
					num_2 += str_2[i];
				}


			}

			for (int i = 0; i < n_2; i++) {
				if (i >= 1) {
					if (data_2[i] < data_2[i - 1]) {
						block_1 = 1;
					}


				}
				
			}
			
			int count_ar = 0, count_ar1 = 0;

			array<int>^ data1(gcnew array<int>(n_2));
			
			array<double>^ data_ar = gcnew array<double>(n_2 + n);

			if (block == 0 && block_1 == 0) {
				for (int i = 0; i < n; i++) {

					for (int j = count_ar1; j < n_2; j++) {
						if (data[i] > data_2[j]) {
							data1[count_ar1] = count_ar;
							count_ar++;
							count_ar1++;

						}
						if (data[i] <= data_2[j]) {
							count_ar++;
							break;

						}


					}
				}
				if (count_ar1 < n_2) {
					for (int j = count_ar1; j < n_2; j++) {
						data1[j] = count_ar;
						count_ar++;
					}
				}
				for (int i = 0; i < n_2; i++) {

					str1_2 += data1[i];
					str1_2 += " ";
				}
				this->txtP1_out_pl->Text = str1_2;

			}
			else {
				MessageBox::Show("Ошибка! Вы ввели невозрастающую последовательность.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
		MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
	}
	catch (...) {
		MessageBox::Show("Ошибка! Вы неправильно ввели данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}


	
}
// кнопка генерации
	private: System::Void bt_rand_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int n, diff;
			double min, max;
			String^ str;
			String^ str1;
			n = Convert::ToInt32(txtP1_count->Text);
		
			for (int k = 0; k < 2; k++) {
				str = "";
				array<double>^ gen = gcnew array<double>(n);
			
				
				for (int i = 0; i < n; i++) {
					if (i > 0) {

						gen[i] = gen[i - 1] + rand() % 10; //RNG.Next(min, max);
					}
					else {
						gen[i] = 0 +rand() %10; //RNG.Next(min, max
					}



				}
				for (int i = 0; i < n; i++) {

					str += gen[i];
					str += " ";
					if (k == 0) {
						str1 = str;
					}
				}
			}
			this->txtP1_a->Text = str;
			this->txtP1_b->Text = str1;
		}
		catch (...) {
			MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
private: System::Void txtP1_a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-' || e->KeyChar == ' ' || e->KeyChar == ',') {
			;
		}
		else {
			e->Handled = true;
		}
	}
}

private: System::Void txtP1_b_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-' || e->KeyChar == ' ' || e->KeyChar == ',') {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
};
}