#pragma once
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <array>

namespace IndividualWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;


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
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ buttonP1_a;
private: System::Windows::Forms::Button^ buttonP1_save;
private: System::Windows::Forms::Button^ buttonP1_b;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ txt_max;

private: System::Windows::Forms::TextBox^ txt_min;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ txtP1_out_ar;
private: System::Windows::Forms::Button^ btP2_gen;
private: System::Windows::Forms::TextBox^ txtP2_n;





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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtP1_out_ar = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_max = (gcnew System::Windows::Forms::TextBox());
			this->txt_min = (gcnew System::Windows::Forms::TextBox());
			this->buttonP1_a = (gcnew System::Windows::Forms::Button());
			this->buttonP1_save = (gcnew System::Windows::Forms::Button());
			this->buttonP1_b = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
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
			this->btP2_gen = (gcnew System::Windows::Forms::Button());
			this->txtP2_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(12, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(688, 476);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->txtP1_out_ar);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->txt_max);
			this->tabPage1->Controls->Add(this->txt_min);
			this->tabPage1->Controls->Add(this->buttonP1_a);
			this->tabPage1->Controls->Add(this->buttonP1_save);
			this->tabPage1->Controls->Add(this->buttonP1_b);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
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
			this->tabPage1->Size = System::Drawing::Size(680, 450);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Задание 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 328);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Полученный массив";
			// 
			// txtP1_out_ar
			// 
			this->txtP1_out_ar->Location = System::Drawing::Point(14, 341);
			this->txtP1_out_ar->Name = L"txtP1_out_ar";
			this->txtP1_out_ar->ReadOnly = true;
			this->txtP1_out_ar->Size = System::Drawing::Size(649, 20);
			this->txtP1_out_ar->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(274, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"max";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(139, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"min";
			// 
			// txt_max
			// 
			this->txt_max->Location = System::Drawing::Point(306, 70);
			this->txt_max->Name = L"txt_max";
			this->txt_max->Size = System::Drawing::Size(49, 20);
			this->txt_max->TabIndex = 20;
			this->txt_max->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_max_TextChanged);
			this->txt_max->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_max_KeyPress);
			// 
			// txt_min
			// 
			this->txt_min->Location = System::Drawing::Point(169, 70);
			this->txt_min->Name = L"txt_min";
			this->txt_min->Size = System::Drawing::Size(53, 20);
			this->txt_min->TabIndex = 19;
			this->txt_min->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_min_TextChanged);
			this->txt_min->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_min_KeyPress);
			// 
			// buttonP1_a
			// 
			this->buttonP1_a->Location = System::Drawing::Point(566, 120);
			this->buttonP1_a->Name = L"buttonP1_a";
			this->buttonP1_a->Size = System::Drawing::Size(97, 34);
			this->buttonP1_a->TabIndex = 18;
			this->buttonP1_a->Text = L"Загрузить массив a";
			this->buttonP1_a->UseVisualStyleBackColor = true;
			this->buttonP1_a->Click += gcnew System::EventHandler(this, &MyForm::buttonP1_a_Click);
			// 
			// buttonP1_save
			// 
			this->buttonP1_save->Location = System::Drawing::Point(563, 411);
			this->buttonP1_save->Name = L"buttonP1_save";
			this->buttonP1_save->Size = System::Drawing::Size(100, 36);
			this->buttonP1_save->TabIndex = 18;
			this->buttonP1_save->Text = L"Сохранить в файл";
			this->buttonP1_save->UseVisualStyleBackColor = true;
			this->buttonP1_save->Click += gcnew System::EventHandler(this, &MyForm::buttonP1_save_Click);
			// 
			// buttonP1_b
			// 
			this->buttonP1_b->Location = System::Drawing::Point(566, 191);
			this->buttonP1_b->Name = L"buttonP1_b";
			this->buttonP1_b->Size = System::Drawing::Size(97, 37);
			this->buttonP1_b->TabIndex = 18;
			this->buttonP1_b->Text = L"Загрузить массив b";
			this->buttonP1_b->UseVisualStyleBackColor = true;
			this->buttonP1_b->Click += gcnew System::EventHandler(this, &MyForm::buttonP1_b_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(563, 380);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(566, 165);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(97, 20);
			this->textBox6->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(566, 94);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(97, 20);
			this->textBox5->TabIndex = 17;
			// 
			// txtP1_count
			// 
			this->txtP1_count->Location = System::Drawing::Point(275, 37);
			this->txtP1_count->Name = L"txtP1_count";
			this->txtP1_count->Size = System::Drawing::Size(100, 20);
			this->txtP1_count->TabIndex = 16;
			this->txtP1_count->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtP1_count_KeyPress);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(53, 37);
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
			this->txtP1_out_pl->Size = System::Drawing::Size(649, 20);
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
			this->bt_rand->Location = System::Drawing::Point(142, 192);
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
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(11, 250);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(208, 13);
			this->label22->TabIndex = 9;
			this->label22->Text = L"Результат выполнения операции:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(306, 191);
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
			this->txtP1_a->Size = System::Drawing::Size(418, 20);
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
			this->txtP1_b->Size = System::Drawing::Size(418, 20);
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
			this->label18->Location = System::Drawing::Point(5, 3);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 20);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Задание 1";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btP2_gen);
			this->tabPage2->Controls->Add(this->txtP2_n);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button5);
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
			this->tabPage2->Size = System::Drawing::Size(680, 450);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Задание2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btP2_gen
			// 
			this->btP2_gen->Location = System::Drawing::Point(265, 44);
			this->btP2_gen->Name = L"btP2_gen";
			this->btP2_gen->Size = System::Drawing::Size(75, 39);
			this->btP2_gen->TabIndex = 19;
			this->btP2_gen->Text = L"Генерация массива";
			this->btP2_gen->UseVisualStyleBackColor = true;
			this->btP2_gen->Click += gcnew System::EventHandler(this, &MyForm::btP2_gen_Click);
			// 
			// txtP2_n
			// 
			this->txtP2_n->Location = System::Drawing::Point(159, 52);
			this->txtP2_n->Name = L"txtP2_n";
			this->txtP2_n->Size = System::Drawing::Size(100, 20);
			this->txtP2_n->TabIndex = 18;
			this->txtP2_n->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtP2_n_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(365, 29);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(120, 20);
			this->textBox9->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Location = System::Drawing::Point(378, 395);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(120, 20);
			this->textBox7->TabIndex = 16;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button7->Location = System::Drawing::Point(378, 421);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Сохранить в файл";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(365, 55);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 28);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Загрузить из файла";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button6->AutoSize = true;
			this->button6->Location = System::Drawing::Point(352, 351);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(230, 25);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Выполнить операцию и отсортировать";
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
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(7, 357);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(208, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Результат выполнения операции:";
			// 
			// txtP2_out_number
			// 
			this->txtP2_out_number->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtP2_out_number->Location = System::Drawing::Point(127, 392);
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
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 395);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Количество четвёрок:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(3, 104);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(671, 241);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Размерность матрицы: nxn";
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
			this->tabPage5->Controls->Add(this->textBox4);
			this->tabPage5->Controls->Add(this->textBox3);
			this->tabPage5->Controls->Add(this->button4);
			this->tabPage5->Controls->Add(this->button3);
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
			this->tabPage5->Size = System::Drawing::Size(680, 450);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Задание 3";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(283, 320);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(111, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(283, 164);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(283, 344);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 32);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(283, 188);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 37);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Загрузить из файла";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
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
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(29, 237);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(204, 13);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Результат выполнения операции";
			// 
			// button_gen
			// 
			this->button_gen->Location = System::Drawing::Point(218, 122);
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
			this->tabPage6->Controls->Add(this->textBox2);
			this->tabPage6->Controls->Add(this->textBox1);
			this->tabPage6->Controls->Add(this->button2);
			this->tabPage6->Controls->Add(this->button1);
			this->tabPage6->Controls->Add(this->label29);
			this->tabPage6->Controls->Add(this->lblP4_res);
			this->tabPage6->Controls->Add(this->label28);
			this->tabPage6->Controls->Add(this->button9);
			this->tabPage6->Controls->Add(this->txtP4_inj);
			this->tabPage6->Controls->Add(this->label27);
			this->tabPage6->Controls->Add(this->label26);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(680, 450);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Задание 4";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(407, 204);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(532, 79);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(408, 234);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 25);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сохранить в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(531, 103);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Загрузить из файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
			this->lblP4_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblP4_res->Location = System::Drawing::Point(14, 290);
			this->lblP4_res->Name = L"lblP4_res";
			this->lblP4_res->Size = System::Drawing::Size(0, 31);
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
			this->button9->Location = System::Drawing::Point(531, 164);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(118, 35);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Выполнить операцию";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// txtP4_inj
			// 
			this->txtP4_inj->Location = System::Drawing::Point(3, 138);
			this->txtP4_inj->Name = L"txtP4_inj";
			this->txtP4_inj->Size = System::Drawing::Size(646, 20);
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
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(720, 491);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
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
				int n = Convert::ToInt64(txtP2_n->Text);
				const  int n1 = 4, m1 = 4;
				String^ num;
				String^ str;
				str = richTextBox1->Text;
				count = 0;
				array<int>^ data(gcnew array<int>(n*n));
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
				// перезапись матрицы в читаемый формат
				int str_count = 0;
				this->richTextBox1->Text = L"";
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						if (data[str_count] != 11) {
							this->richTextBox1->Text += " ";
						}
						this->richTextBox1->Text += Convert::ToString(data[str_count]);
						this->richTextBox1->Text += "   ";
						str_count++;
					}
					this->richTextBox1->Text += "\n";
				}
				//int b[4][4];
				
				int** b = new int* [n];
				for (int i = 0; i < n; i++)
					b[i] = new int[n];
				int count_of_4 = 0;
				//for (size_t i = 0, k = 0; i < n; ++i) {
					//for (size_t j = 0; j < n; ++j) {
					//	b[i][j] = data[k++];
					//}
				//}
				int kk = 0;
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						b[i][j] = data[kk];
						kk++;
					}
				}
				
				for (int i = 0; i < n-1; i++) {
					for (int j = 1; j < n; j++) {
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
	
			   //защита от дурака
private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '0' || e->KeyChar == ' ' || e->KeyChar == '1' || e->KeyChar == '5' ) {
			;
		}
		else {
			e->Handled = true;
		}
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	// Открытие объекта диалогового окна SaveFileDialog
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	// Настройка св-в диалогового окна
	saveFileDialog1->Title = "Сохранение файла";
	saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;
	saveFileDialog1->OverwritePrompt = false;
	// Открытие диалогового окна и запись в него полного имени заданного в окне файла в текстовое поле
	try {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox7->Text = saveFileDialog1->FileName;
			if (richTextBox1->TextLength > 0) {
				String^ path = textBox7->Text;
				String^ line;
				bool flagStartData = false;
				bool flagProcessData = false;
				//Операция открытия файла, записи в него и закрытия
				System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
				while ((line = sr->ReadLine()) != nullptr) {
					if (flagStartData) {
						if (line == txtP2_out_number->Text) { flagProcessData = true; break; }
					}
					else {
						if (line == "Исходные данные: " + "\n"+ richTextBox1->Text) { flagStartData = true; }
					}
				}
				sr->Close();
				System::IO::StreamWriter^ sa = System::IO::File::AppendText(path);
				if (!flagStartData) {
					sa->WriteLine("\nИсходные данные: \n{0} ", richTextBox1->Text); // Запись в файл
					sa->WriteLine("{0}", "Количество четвёрок: " + txtP2_out_number->Text);
				}
				else {
					if (!flagProcessData) { sa->WriteLine("{0}", txtP2_out_number->Text); }
				}
				sa->Close();
			}
			else {
				Windows::Forms::MessageBox::Show("Файл не выбран!", "Ошибка");
			}
		}

		else { textBox7->Text = ""; }
	}
	catch (...) {

	}
}
private: System::Void btP2_gen_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int str_count = 0;
		int flag = 0;
		int n = Convert::ToInt64(txtP2_n->Text);
		array<int>^ data(gcnew array<int>(n * n));
		for (int i = 0; i < n * n; i++) {

			flag = 0 + rand() % 4;
			if (flag == 0) {
				data[i] = 0;
			}
			if (flag == 1) {
				data[i] = 1;
			}
			if (flag == 2) {
				data[i] = 5;
			}
			if (flag == 3) {
				data[i] = 11;
			}

		}
		this->richTextBox1->Text = L"";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (data[str_count] != 11) {
					this->richTextBox1->Text += " ";
				}
				this->richTextBox1->Text += Convert::ToString(data[str_count]);
				this->richTextBox1->Text += "   ";
				str_count++;
			}
			this->richTextBox1->Text += "\n";
		}
		
	}
	catch (...) {
		MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void txtP2_n_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {

		if (e->KeyChar == (char)Keys::Back) {}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Создание объекта диалогового окна OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	if (textBox9->TextLength > 0) {
		openFileDialog1->FileName = textBox9->Text;
	}
	// Настройка св-в диалогового окна
	openFileDialog1->Title = "Открытие файла";
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->ShowReadOnly = true;
	openFileDialog1->RestoreDirectory = true;
	// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ path = openFileDialog1->FileName;
		textBox9->Text = path;
		txtP2_out_number->Text = "";
		String^ ln = "";
		String^ line = "";
		System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
		while ((line = sr->ReadLine()) != nullptr) {
			ln += " " + line;
		}
		////String^ outString = clearLine(ln);
		//if (ln->Equals("")) {
		//	//textBoxStart->Text = "";
		//	Windows::Forms::MessageBox::Show("Загружаемый файл пуст", "Ошибка");
		//}
		//else if (!clearLine(ln)->Contains("\d+")) {
		//	Windows::Forms::MessageBox::Show("Загружаемый файл не содержит цифр", "Ошибка");
		//}

		richTextBox1->Text = clearLine_P2(ln);


		sr->Close();
	}
	else { textBox9->Text = ""; }
	try {
		int count = 0;
		int n = Convert::ToInt64(txtP2_n->Text);
		const  int n1 = 4, m1 = 4;
		String^ num;
		String^ str;
		str = richTextBox1->Text;
		count = 0;
		array<int>^ data(gcnew array<int>(n * n));
		for (int i = 0; i < str->Length; i++) {
			if (str[i] == '0') {
				data[count] = 0;
				count++;
			}
			if (str[i] == '1') {
				if (i < str->Length - 1) {
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
		int str_count = 0;
		this->richTextBox1->Text = L"";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (data[str_count] != 11) {
					this->richTextBox1->Text += " ";
				}
				this->richTextBox1->Text += Convert::ToString(data[str_count]);
				this->richTextBox1->Text += "   ";
				str_count++;
			}
			this->richTextBox1->Text += "\n";
		}
	}
	catch (...) {
		MessageBox::Show("Ошибка! Неправильный формат данных или отсутствует размерность матрицы.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::String^ clearLine_P2(String^ line) {// очистка ввода файла от мусора
	bool minus = false;
	bool space = true;
	for (int i = 0; i < line->Length; i++) {
		if ((line[i] < 48 || line[i] > 53 || line[i]==51 || line[i] == 52 || line[i] == 50)
			&& line[i] != ' ' && line[i] != '-') {
			if (space) {
				line = line->Remove(i, 1);
				i--;
			}
			else {
				line = line->Replace(line[i], ' ');
				space = true;
			}

		}
		else if (line[i] == ' ' && space) {
			line = line->Remove(i, 1);
			i--;
		}
		else if (line[i] == '-' && minus) {
			line = line->Remove(i, 1);
			i--;
		}
		else if (line[i] == ' ') { space = true; }
		else if (line[i] == '-') { minus = true; }
		else {
			space = false;
			minus = false;
		}
	}
	try {
		if (line[line->Length - 1] == ' ') { line = line->Remove(line->Length - 1, 1); }
		if (line[line->Length - 1] == '-') { line = line->Remove(line->Length - 1, 1); }
		return line;
	}
	catch (...) {
		;
	}
	try {
		int count = 0;
		int n = Convert::ToInt64(txtP2_n->Text);
		const  int n1 = 4, m1 = 4;
		String^ num;
		String^ str;
		str = richTextBox1->Text;
		count = 0;
		array<int>^ data(gcnew array<int>(n * n));
		for (int i = 0; i < str->Length; i++) {
			if (str[i] == '0') {
				data[count] = 0;
				count++;
			}
			if (str[i] == '1') {
				if (i < str->Length - 1) {
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
		int str_count = 0;
		this->richTextBox1->Text = L"";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (data[str_count] != 11) {
					this->richTextBox1->Text += " ";
				}
				this->richTextBox1->Text += Convert::ToString(data[str_count]);
				this->richTextBox1->Text += "   ";
				str_count++;
			}
			this->richTextBox1->Text += "\n";
		}
	}
	catch (...) {
		MessageBox::Show("Ошибка! Неправильный формат данных или отсутствует размерность матрицы.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
	  
// Блок 3 страницы
	private: System::String^ clearLine_P3(String^ line) {// сортировка при вводе из файла
		bool space = true;
		for (int i = 0; i < line->Length; i++) {
			if (line[i] < 48 || line[i] > 57) {
				if (space) {
					line = line->Remove(i, 1);
					i--;
				}
				

			}	
		}
		try {
			if (line[line->Length - 1] == ' ') { line = line->Remove(line->Length - 1, 1); }
			if (line[line->Length - 1] == '-') { line = line->Remove(line->Length - 1, 1); }
			return line;
		}
		catch (...) {
			;
		}
	}

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
		try {
			if (textP3_in->Text != "") {
				int a = Convert::ToInt64(textP3_in->Text), res;
				res = Rev(a);
				this->textP3_out->Text = Convert::ToString(res);
			}
			else {
				MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (...) {
			MessageBox::Show("Ошибка! Неправильный формат данных.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button_gen_Click(System::Object^ sender, System::EventArgs^ e) {
		int a;
		a = rand();
		this->textP3_in->Text = Convert::ToString(a);
	}
	private: System::Void textP3_in_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {
		
		if (e->KeyChar == (char)Keys::Back){}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Открытие объекта диалогового окна SaveFileDialog
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	// Настройка св-в диалогового окна
	saveFileDialog1->Title = "Сохранение файла";
	saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;
	saveFileDialog1->OverwritePrompt = false;
	// Открытие диалогового окна и запись в него полного имени заданного в окне файла в текстовое поле
	try {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox4->Text = saveFileDialog1->FileName;
			if (textP3_in->TextLength > 0) {
				String^ path = textBox4->Text;
				String^ line;
				bool flagStartData = false;
				bool flagProcessData = false;
				//Операция открытия файла, записи в него и закрытия
				System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
				while ((line = sr->ReadLine()) != nullptr) {
					if (flagStartData) {
						if (line == textP3_out->Text) { flagProcessData = true; break; }
					}
					else {
						if (line == "Исходные данные: " + textP3_in->Text) { flagStartData = true; }
					}
				}
				sr->Close();
				System::IO::StreamWriter^ sa = System::IO::File::AppendText(path);
				if (!flagStartData) {
					sa->WriteLine("\nИсходные данные: {0}", textP3_in->Text); // Запись в файл
					sa->WriteLine("{0}", "Число в обратном порядке: "+ textP3_out->Text);
				}
				else {
					if (!flagProcessData) { sa->WriteLine("{0}", textP3_out->Text); }
				}
				sa->Close();
			}
			else {
				Windows::Forms::MessageBox::Show("Файл не выбран!", "Ошибка");
			}
		}
	
	else { textBox4->Text = ""; }
}
catch (...) {

	}
}

	   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		   // Создание объекта диалогового окна OpenFileDialog
		   OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		   if (textBox3->TextLength > 0) {
			   openFileDialog1->FileName = textBox3->Text;
		   }
		   // Настройка св-в диалогового окна
		   openFileDialog1->Title = "Открытие файла";
		   openFileDialog1->InitialDirectory = "c:\\";
		   openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		   openFileDialog1->FilterIndex = 1;
		   openFileDialog1->ShowReadOnly = true;
		   openFileDialog1->RestoreDirectory = true;
		   // Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		   if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			   String^ path = openFileDialog1->FileName;
			   textBox3->Text = path;
			   textP3_out->Text = "";
			   String^ ln = "";
			   String^ line = "";
			   System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
			   while ((line = sr->ReadLine()) != nullptr) {
				   ln += " " + line;
			   }
			   ////String^ outString = clearLine(ln);
			   //if (ln->Equals("")) {
			   //	//textBoxStart->Text = "";
			   //	Windows::Forms::MessageBox::Show("Загружаемый файл пуст", "Ошибка");
			   //}
			   //else if (!clearLine(ln)->Contains("\d+")) {
			   //	Windows::Forms::MessageBox::Show("Загружаемый файл не содержит цифр", "Ошибка");
			   //}

			   textP3_in->Text = clearLine_P3(ln);
			   

			   sr->Close();
		   }
		   else { textBox3->Text = ""; }
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

	  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		  // Создание объекта диалогового окна OpenFileDialog
		  OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		  if (textBox1->TextLength > 0) {
			  openFileDialog1->FileName = textBox3->Text;
		  }
		  // Настройка св-в диалогового окна
		  openFileDialog1->Title = "Открытие файла";
		  openFileDialog1->InitialDirectory = "c:\\";
		  openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		  openFileDialog1->FilterIndex = 1;
		  openFileDialog1->ShowReadOnly = true;
		  openFileDialog1->RestoreDirectory = true;
		  // Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		  if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			  String^ path = openFileDialog1->FileName;
			  textBox1->Text = path;
			  lblP4_res ->Text = "";
			  String^ ln = "";
			  String^ line = "";
			  System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
			  while ((line = sr->ReadLine()) != nullptr) {
				  ln += " " + line;
			  }
			  ////String^ outString = clearLine(ln);
			  //if (ln->Equals("")) {
			  //	//textBoxStart->Text = "";
			  //	Windows::Forms::MessageBox::Show("Загружаемый файл пуст", "Ошибка");
			  //}
			  //else if (!clearLine(ln)->Contains("\d+")) {
			  //	Windows::Forms::MessageBox::Show("Загружаемый файл не содержит цифр", "Ошибка");
			  //}

			  txtP4_inj->Text = "";
			  txtP4_inj->Text = ln;
			  

			  sr->Close();
		  }
		  else { textBox1->Text = ""; }
	  }
			 
			

	  private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		  // Открытие объекта диалогового окна SaveFileDialog
		  SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		  // Настройка св-в диалогового окна
		  saveFileDialog1->Title = "Сохранение файла";
		  saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		  saveFileDialog1->FilterIndex = 1;
		  saveFileDialog1->RestoreDirectory = true;
		  saveFileDialog1->OverwritePrompt = false;
		  // Открытие диалогового окна и запись в него полного имени заданного в окне файла в текстовое поле
		  try {
			  if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				  textBox2->Text = saveFileDialog1->FileName;
				  if (txtP4_inj->TextLength > 0) {
					  String^ path = textBox2->Text;
					  String^ line;
					  bool flagStartData = false;
					  bool flagProcessData = false;
					  //Операция открытия файла, записи в него и закрытия
					  System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
					  while ((line = sr->ReadLine()) != nullptr) {
						  if (flagStartData) {
							  if (line == lblP4_res->Text) { flagProcessData = true; break; }
						  }
						  else {
							  if (line == "Исходные данные: " + txtP4_inj->Text) { flagStartData = true; }
						  }
					  }
					  sr->Close();
					  System::IO::StreamWriter^ sa = System::IO::File::AppendText(path);
					  if (!flagStartData) {
						  sa->WriteLine("\nИсходные данные: {0}", txtP4_inj->Text); // Запись в файл
						  sa->WriteLine("{0}", lblP4_res->Text);
					  }
					  else {
						  if (!flagProcessData) { sa->WriteLine("{0}", lblP4_res->Text); }
					  }
					  sa->Close();
				  }
				  else {
					  Windows::Forms::MessageBox::Show("Файл не выбран!", "Ошибка");
				  }
			  }

			  else { textBox2->Text = ""; }
		  }
		  catch (...) {

		  }
	  }
	   // Блок 1 страницы

	private: System::String^ clearLine_P1(String^ line) {// очистка ввода файла от мусора
		bool minus = false;
		bool space = true;
		for (int i = 0; i < line->Length; i++) {
			if ((line[i] < 48 || line[i] > 57)
				&& line[i] != ' ' && line[i] != '-') {
				if (space) {
					line = line->Remove(i, 1);
					i--;
				}
				else {
					line = line->Replace(line[i], ' ');
					space = true;
				}

			}
			else if (line[i] == ' ' && space) {
				line = line->Remove(i, 1);
				i--;
			}
			else if (line[i] == '-' && minus) {
				line = line->Remove(i, 1);
				i--;
			}
			else if (line[i] == ' ') { space = true; }
			else if (line[i] == '-') { minus = true; }
			else {
				space = false;
				minus = false;
			}
		}
		try {
			if (line[line->Length - 1] == ' ') { line = line->Remove(line->Length - 1, 1); }
			if (line[line->Length - 1] == '-') { line = line->Remove(line->Length - 1, 1); }
			return line;
		}
		catch (...) {
			;
		}
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (txtP1_a->Text != "" && txtP1_b->Text != "") {
			int  cc = 0, count = 0, flag = 0, n;
			double cc1 = 0, tech = 0,tech1=0;
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
				String^ str_ar;
				for(int i = 0; i < n ; i++){
					data_ar[i] = data[i];
				}
				int count_araa = 0;
				for (int i = n ; i < n_2 + n; i++) {
					data_ar[i] = data_2[count_araa];
					count_araa++;
				}


				cc1 = 1.8446744e+19;
				for (int i = 0; i < n+n_2; i++) {
					for (int j = i; j < n+n_2; j++) {
						if (data_ar[j] <= cc1) {
							cc1 = data_ar[j];
							cc = j;
						}
					}
					tech1 = data_ar[i];
					data_ar[i] = cc1;
					data_ar[cc] = tech1;
					cc1 = 1.8446744e+19;
					str_ar += data_ar[i];
					str_ar += " ";
				}
				this->txtP1_out_pl->Text = str1_2;
				this->txtP1_out_ar->Text = str_ar;

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
// защита от дурака
private: System::Void txt_min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
// кнопка генерации
	private: System::Void bt_rand_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int n, diff;
			double min, max;
			String^ str;
			String^ str1;
			n = Convert::ToInt64(txtP1_count->Text);
			min = Convert::ToDouble(txt_min->Text);
			max = Convert::ToDouble(txt_max->Text);
			array<int>^ gen(gcnew array<int>(n));
			
			
			for (int k = 0; k < 2; k++) {
				str = "";
				array<double>^ gen = gcnew array<double>(n);
			diff = max - min+1 ;
				
				for (int i = 0; i < n; i++) {
					if (i > 0) {
						diff = max - gen[i-1]+1 ;
						gen[i] = (gen[i - 1]+1) + rand()  % 2; //RNG.Next(min, max);
						if (gen[i] > max) {
							MessageBox::Show("Ошибка! Слишком много элементов массива.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
							break;
						}
					}
					else {
						//gen[i] = 0 +rand() %10; //RNG.Next(min, max
						gen[i] = min + rand() % diff; //RNG.Next(min, max);
					}



				}
				for (int i = 0; i < n; i++) {

					str += gen[i];
					str += " ";
					if (k == 0) {
						str1 = str;
					}
				}
			diff = max - min+1 ;
			}
			this->txtP1_a->Text = str;
			this->txtP1_b->Text = str1;
		}
		catch (...) {
			MessageBox::Show("Ошибка! Вы забыли ввести данные.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
private: System::Void txtP1_a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	this->txtP1_count->Text = L"";
	this->txtP1_out_pl->Text = L"";
	this->txt_min->Text = L"";
	this->txt_max->Text = L"";
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
	this->txtP1_count->Text = L"";
	this->txtP1_out_pl->Text = L"";
	this->txt_min->Text = L"";
	this->txt_max->Text = L"";
	this->txtP1_out_ar->Text = L"";
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-' || e->KeyChar == ' ' || e->KeyChar == ',') {
			;
		}
		else {
			e->Handled = true;
		}
	}
}



private: System::Void buttonP1_a_Click(System::Object^ sender, System::EventArgs^ e) {
	// Создание объекта диалогового окна OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	if (textBox5->TextLength > 0) {
		openFileDialog1->FileName = textBox5->Text;
	}
	// Настройка св-в диалогового окна
	openFileDialog1->Title = "Открытие файла";
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->ShowReadOnly = true;
	openFileDialog1->RestoreDirectory = true;
	// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ path = openFileDialog1->FileName;
		textBox5->Text = path;
		txtP1_out_pl->Text = "";
		String^ ln = "";
		String^ line = "";
		System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
		while ((line = sr->ReadLine()) != nullptr) {
			ln += " " + line;
		}
		

		txtP1_a->Text = clearLine_P1(ln);


		sr->Close();
	}
	else { textBox5->Text = ""; }

}
private: System::Void buttonP1_b_Click(System::Object^ sender, System::EventArgs^ e) {
	// Создание объекта диалогового окна OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	if (textBox6->TextLength > 0) {
		openFileDialog1->FileName = textBox6->Text;
	}
	// Настройка св-в диалогового окна
	openFileDialog1->Title = "Открытие файла";
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->ShowReadOnly = true;
	openFileDialog1->RestoreDirectory = true;
	// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ path = openFileDialog1->FileName;
		textBox6->Text = path;
		txtP1_out_pl->Text = "";
		String^ ln = "";
		String^ line = "";
		System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
		while ((line = sr->ReadLine()) != nullptr) {
			ln += " " + line;
		}
		
		txtP1_b->Text = clearLine_P1(ln);


		sr->Close();
	}
	else { textBox6->Text = ""; }

}
private: System::Void buttonP1_save_Click(System::Object^ sender, System::EventArgs^ e) {
	// Открытие объекта диалогового окна SaveFileDialog
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	// Настройка св-в диалогового окна
	saveFileDialog1->Title = "Сохранение файла";
	saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;
	saveFileDialog1->OverwritePrompt = false;
	// Открытие диалогового окна и запись в него полного имени заданного в окне файла в текстовое поле
	try {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox8->Text = saveFileDialog1->FileName;
			if (txtP1_a->TextLength > 0 && txtP1_b->TextLength > 0) {
				String^ path = textBox8->Text;
				String^ line;
				bool flagStartData = false;
				bool flagProcessData = false;
				//Операция открытия файла, записи в него и закрытия
				System::IO::StreamReader^ sr = System::IO::File::OpenText(path);
				while ((line = sr->ReadLine()) != nullptr) {
					if (flagStartData) {
						if (line == txtP1_out_pl->Text) { flagProcessData = true; break; }
					}
					else {
						if (line == "Исходные данные: Последовательность a: " + txtP1_a->Text +"   Последовательность b"+ txtP1_b) { flagStartData = true; }
					}
				}
				sr->Close();
				System::IO::StreamWriter^ sa = System::IO::File::AppendText(path);
				if (!flagStartData) {
					sa->WriteLine("\nИсходные данные: {0}", "Последовательность a : " + txtP1_a->Text +"   Последовательность b: "+ txtP1_b->Text); // Запись в файл
					sa->WriteLine("{0}", "Позиции элементов b: "+txtP1_out_pl->Text);
					sa->WriteLine("{0}", "Полученный массив: " + txtP1_out_ar->Text);
				}
				else {
					if (!flagProcessData) { sa->WriteLine("{0}", txtP1_out_pl->Text); }
				}
				sa->Close();
			}
			else {
				Windows::Forms::MessageBox::Show("Файл не выбран!", "Ошибка");
			}
		}

		else { textBox8->Text = ""; }
	}
	catch (...) {

	}
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txt_min_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Защита от дурака
	
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-') {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void txt_max_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Защита от дурака
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back || e->KeyChar == '-') {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void txtP1_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Back ) {
			;
		}
		else {
			e->Handled = true;
		}
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


};
}