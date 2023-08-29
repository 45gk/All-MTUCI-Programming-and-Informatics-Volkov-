#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

namespace modsorter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtmax;

	private: System::Windows::Forms::TextBox^ txtmin;

	private: System::Windows::Forms::TextBox^ txtAmount;
	private: System::Windows::Forms::Button^ btngen;
	private: System::Windows::Forms::Button^ btnOpenFile;
	private: System::Windows::Forms::TextBox^ textInput;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtinput;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioSort2;

	private: System::Windows::Forms::RadioButton^ radioSort1;

	private: System::Windows::Forms::RadioButton^ radioOdd;

	private: System::Windows::Forms::RadioButton^ radioEven;


	private: System::Windows::Forms::RadioButton^ radioMax;

	private: System::Windows::Forms::RadioButton^ radioMin;

	private: System::Windows::Forms::RadioButton^ radioAverage;


	private: System::Windows::Forms::RadioButton^ radioSum;

	private: System::Windows::Forms::Button^ btnResult;
	private: System::Windows::Forms::Button^ btnSaveFile;
	private: System::Windows::Forms::TextBox^ textOutput;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnClose;

	private: System::Windows::Forms::TextBox^ txtResult;

	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtmax = (gcnew System::Windows::Forms::TextBox());
			this->txtmin = (gcnew System::Windows::Forms::TextBox());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->btngen = (gcnew System::Windows::Forms::Button());
			this->btnOpenFile = (gcnew System::Windows::Forms::Button());
			this->textInput = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtinput = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioSort2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioSort1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioOdd = (gcnew System::Windows::Forms::RadioButton());
			this->radioEven = (gcnew System::Windows::Forms::RadioButton());
			this->radioMax = (gcnew System::Windows::Forms::RadioButton());
			this->radioMin = (gcnew System::Windows::Forms::RadioButton());
			this->radioAverage = (gcnew System::Windows::Forms::RadioButton());
			this->radioSum = (gcnew System::Windows::Forms::RadioButton());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnSaveFile = (gcnew System::Windows::Forms::Button());
			this->textOutput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtmax);
			this->groupBox1->Controls->Add(this->txtmin);
			this->groupBox1->Controls->Add(this->txtAmount);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 115);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные для генерации";
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(6, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Максимальное значение диапазона:";
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(7, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Минимальное значение диапазона:";
			// 
			// label1
			// 
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(7, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Количество элементов массива:";
			// 
			// txtmax
			// 
			this->txtmax->Location = System::Drawing::Point(276, 80);
			this->txtmax->Name = L"txtmax";
			this->txtmax->Size = System::Drawing::Size(100, 20);
			this->txtmax->TabIndex = 2;
			this->txtmax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtmax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtmax_KeyPress);
			// 
			// txtmin
			// 
			this->txtmin->Location = System::Drawing::Point(276, 54);
			this->txtmin->Name = L"txtmin";
			this->txtmin->Size = System::Drawing::Size(100, 20);
			this->txtmin->TabIndex = 1;
			this->txtmin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtmin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtmin_KeyPress);
			// 
			// txtAmount
			// 
			this->txtAmount->Location = System::Drawing::Point(276, 28);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(100, 20);
			this->txtAmount->TabIndex = 0;
			this->txtAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtAmount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtAmount_KeyPress);
			// 
			// btngen
			// 
			this->btngen->Location = System::Drawing::Point(424, 12);
			this->btngen->Name = L"btngen";
			this->btngen->Size = System::Drawing::Size(122, 23);
			this->btngen->TabIndex = 1;
			this->btngen->Text = L"Генерация массива";
			this->btngen->UseVisualStyleBackColor = true;
			this->btngen->Click += gcnew System::EventHandler(this, &MyForm::btngen_Click);
			// 
			// btnOpenFile
			// 
			this->btnOpenFile->Location = System::Drawing::Point(424, 104);
			this->btnOpenFile->Name = L"btnOpenFile";
			this->btnOpenFile->Size = System::Drawing::Size(122, 23);
			this->btnOpenFile->TabIndex = 2;
			this->btnOpenFile->Text = L"Ввод из файла";
			this->btnOpenFile->UseVisualStyleBackColor = true;
			this->btnOpenFile->Click += gcnew System::EventHandler(this, &MyForm::btnOpenFile_Click);
			// 
			// textInput
			// 
			this->textInput->Location = System::Drawing::Point(424, 63);
			this->textInput->Name = L"textInput";
			this->textInput->Size = System::Drawing::Size(122, 20);
			this->textInput->TabIndex = 3;
			this->textInput->Text = L"C:\\Программирование\\Запись текста\\textinput.txt";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(421, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Имя файла ввода:";
			// 
			// txtinput
			// 
			this->txtinput->Location = System::Drawing::Point(12, 162);
			this->txtinput->Name = L"txtinput";
			this->txtinput->Size = System::Drawing::Size(382, 20);
			this->txtinput->TabIndex = 5;
			this->txtinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtinput_KeyPress);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(382, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Исходный массив:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioSort2);
			this->groupBox2->Controls->Add(this->radioSort1);
			this->groupBox2->Controls->Add(this->radioOdd);
			this->groupBox2->Controls->Add(this->radioEven);
			this->groupBox2->Controls->Add(this->radioMax);
			this->groupBox2->Controls->Add(this->radioMin);
			this->groupBox2->Controls->Add(this->radioAverage);
			this->groupBox2->Controls->Add(this->radioSum);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox2->Location = System::Drawing::Point(12, 203);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(382, 120);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// radioSort2
			// 
			this->radioSort2->AutoSize = true;
			this->radioSort2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioSort2->Location = System::Drawing::Point(197, 89);
			this->radioSort2->Name = L"radioSort2";
			this->radioSort2->Size = System::Drawing::Size(154, 17);
			this->radioSort2->TabIndex = 7;
			this->radioSort2->Text = L"Сортировка по убыванию";
			this->radioSort2->UseVisualStyleBackColor = true;
			// 
			// radioSort1
			// 
			this->radioSort1->AutoSize = true;
			this->radioSort1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioSort1->Location = System::Drawing::Point(197, 66);
			this->radioSort1->Name = L"radioSort1";
			this->radioSort1->Size = System::Drawing::Size(170, 17);
			this->radioSort1->TabIndex = 6;
			this->radioSort1->Text = L"Сортировка по возрастанию";
			this->radioSort1->UseVisualStyleBackColor = true;
			// 
			// radioOdd
			// 
			this->radioOdd->AutoSize = true;
			this->radioOdd->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioOdd->Location = System::Drawing::Point(197, 43);
			this->radioOdd->Name = L"radioOdd";
			this->radioOdd->Size = System::Drawing::Size(129, 17);
			this->radioOdd->TabIndex = 5;
			this->radioOdd->Text = L"Нечётные элементы";
			this->radioOdd->UseVisualStyleBackColor = true;
			// 
			// radioEven
			// 
			this->radioEven->AutoSize = true;
			this->radioEven->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioEven->Location = System::Drawing::Point(197, 20);
			this->radioEven->Name = L"radioEven";
			this->radioEven->Size = System::Drawing::Size(118, 17);
			this->radioEven->TabIndex = 4;
			this->radioEven->Text = L"Чётные элементы";
			this->radioEven->UseVisualStyleBackColor = true;
			// 
			// radioMax
			// 
			this->radioMax->AutoSize = true;
			this->radioMax->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioMax->Location = System::Drawing::Point(7, 89);
			this->radioMax->Name = L"radioMax";
			this->radioMax->Size = System::Drawing::Size(150, 17);
			this->radioMax->TabIndex = 3;
			this->radioMax->Text = L"Максимальный элемент";
			this->radioMax->UseVisualStyleBackColor = true;
			// 
			// radioMin
			// 
			this->radioMin->AutoSize = true;
			this->radioMin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioMin->Location = System::Drawing::Point(7, 66);
			this->radioMin->Name = L"radioMin";
			this->radioMin->Size = System::Drawing::Size(144, 17);
			this->radioMin->TabIndex = 2;
			this->radioMin->Text = L"Минимальный элемент";
			this->radioMin->UseVisualStyleBackColor = true;
			// 
			// radioAverage
			// 
			this->radioAverage->AutoSize = true;
			this->radioAverage->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioAverage->Location = System::Drawing::Point(7, 43);
			this->radioAverage->Name = L"radioAverage";
			this->radioAverage->Size = System::Drawing::Size(118, 17);
			this->radioAverage->TabIndex = 1;
			this->radioAverage->Text = L"Среднее значение";
			this->radioAverage->UseVisualStyleBackColor = true;
			// 
			// radioSum
			// 
			this->radioSum->AutoSize = true;
			this->radioSum->Checked = true;
			this->radioSum->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioSum->Location = System::Drawing::Point(7, 20);
			this->radioSum->Name = L"radioSum";
			this->radioSum->Size = System::Drawing::Size(117, 17);
			this->radioSum->TabIndex = 0;
			this->radioSum->TabStop = true;
			this->radioSum->Text = L"Сумма элементов";
			this->radioSum->UseVisualStyleBackColor = true;
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(424, 217);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(122, 23);
			this->btnResult->TabIndex = 8;
			this->btnResult->Text = L"Выполнить";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// btnSaveFile
			// 
			this->btnSaveFile->Location = System::Drawing::Point(424, 300);
			this->btnSaveFile->Name = L"btnSaveFile";
			this->btnSaveFile->Size = System::Drawing::Size(122, 23);
			this->btnSaveFile->TabIndex = 9;
			this->btnSaveFile->Text = L"Сохранить в файл";
			this->btnSaveFile->UseVisualStyleBackColor = true;
			this->btnSaveFile->Click += gcnew System::EventHandler(this, &MyForm::btnSaveFile_Click);
			// 
			// textOutput
			// 
			this->textOutput->Location = System::Drawing::Point(424, 266);
			this->textOutput->Name = L"textOutput";
			this->textOutput->Size = System::Drawing::Size(119, 20);
			this->textOutput->TabIndex = 10;
			this->textOutput->Text = L"C:\\Программирование\\Запись текста\\textoutput.txt";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(421, 246);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Имя файла вывода:";
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(424, 382);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(122, 23);
			this->btnClose->TabIndex = 12;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(15, 382);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(379, 20);
			this->txtResult->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(13, 359);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Результат операции";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 420);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textOutput);
			this->Controls->Add(this->btnSaveFile);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtinput);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textInput);
			this->Controls->Add(this->btnOpenFile);
			this->Controls->Add(this->btngen);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Обработка массива";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int size;//для выбора кол-ва элементов массива.
		int maxl, //Запоминает максимальную длину
			maxn, //для генерации массива
			minn,
			S, //Сумма элементов
			Av, //Среднее значение
			min, //Минимальный элемент
			max, //Максимальный элемент
			k, //Для сортировки
			i, //Переменная - счетчик
			l; //Переменная - счетчик.
		String^ s3;
		String^ s4;
		String^ ComparePrev;
		bool Gen = 0, Res = 0, Compare = 0;
	public: System::Void btngen_Click(System::Object^ sender, System::EventArgs^ e) {
		Gen = 0;
		Res = 1;
		size = Convert::ToInt32(txtAmount->Text);
		int* arr = new int[size]; //массив
		maxn = Convert::ToInt16(txtmax->Text);
		minn = Convert::ToInt16(txtmin->Text);
		txtinput->Text = L"";
		txtResult->Text = L"";
		maxl = 0;
		min = maxn + 1;
		max = minn - 1;
		Random^ rnd = gcnew Random; // Создание объекта типа Random.
		for (int i = 0; i < size; i++) { // Цикл заполнения массива.
			arr[i] = rnd->Next(maxn + abs(minn) + 1);// Генерация случайных значений в диапазоне от 0 до maxn.
			if (arr[i] > maxn)
				arr[i] = arr[i] - maxn - abs(minn) - 1;
			txtinput->Text += (arr[i].ToString() + " ");
			/*
			S = S + arr[i];
			if (arr[i] < min)
				min = arr[i];
			if (arr[i] > max)
				max = arr[i];
			*/
		}
		s4 = txtinput->Text;
		delete[] arr;
	}
	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
		size = 0;
		if (txtinput->Text == "")
			return;
		Res = 0;
		long int r, //Переменная-счетчик
			n, //Переменная-счетчик
			count; //Для запоминания длины введенной строки
		r = 0;
		s3 = txtinput->Text;
		if (s3[0] == ' ')
			while (s3[0] == ' ')
				s3 = s3->Remove(0, 1);
		if (s3[s3->Length - 1] == ' ')
			while (s3[s3->Length - 1] == ' ')
				s3 = s3->Remove(s3->Length - 1, 1);
		if (Char::IsDigit(s3[s3->Length - 1]))
			s3 += " ";
		int nn = 0;
		while (txtinput->Text->Length - 1 > nn) //Для создания массива чисел из измененных элементов
		{
			if (txtinput->Text[nn] != ' ')
			{
				while (txtinput->Text[nn] != ' ')
				{
					nn++;
				}
				size++;
			}
			nn++;
		}
		int* arr = new int[size]; //массив
		count = s3->Length;
		while (r <= s3->Length) //Для того, чтобы убрать ненужные пробелы.
		{
			if (r == 0)
				if (s3[r] == ' ')
					while (s3[r] == ' ')
					{
						s3 = s3->Remove(r, 1);
						--count;
					}

			if (r != 0 & r <= count - 1)
				while (s3[r] == ' ' & s3[r - 1] == ' ')
				{
					s3 = s3->Remove(r - 1, 1);
					--count;
				}
			++r;
		}
		txtinput->Text = s3;
		s3 = "";
		l = 0;
		n = 0;
		if (txtinput->Text != s4)
		{
			txtmax->Text = L"";
			txtmin->Text = L"";
			txtAmount->Text = L"";
		}
		while (txtinput->Text->Length - 1 > n) //Для создания массива чисел из измененных элементов
		{
			if (txtinput->Text[n] != ' ')
			{
				while (txtinput->Text[n] != ' ')
				{
					s3 += txtinput->Text[n];
					++n;
				}
				arr[l] = Convert::ToInt16(s3);
				if (l == 0)
				{
					min = arr[l];
					max = arr[l];
				}
				else if (arr[l] > max)
					max = arr[l];
				else if (arr[l] < min)
					min = arr[l];
				++l;
				s3 = "";
			}
			++n;
		}
		i = 0;
		S = 0;
		Av = 0;
		txtResult->Text = L"";
		for (int i = 0; i < size; i++) { // Цикл нахождения суммы, минимального и максимального элементов
			S = S + arr[i];
			/*if (arr[i] < min)
				min = arr[i];
			if (arr[i] > max)
				max = arr[i];
				*/
		}
		Av = S / size; //Нахождение среднего значения.
		if (radioSum->Checked)
		{
			txtResult->Text += L"Сумма элементов: ";
			txtResult->Text += Convert::ToString(S);
		}
		if (radioAverage->Checked)
		{
			txtResult->Text += L"Среднее значение: ";
			txtResult->Text += Convert::ToString(Av);
		}
		if (radioMin->Checked)
		{
			txtResult->Text += L"Минимальный элемент: ";
			txtResult->Text += Convert::ToString(min);
		}
		if (radioMax->Checked)
		{
			txtResult->Text += L"Максимальный элемент: ";
			txtResult->Text += Convert::ToString(max);
		}
		if (radioEven->Checked)
		{
			txtResult->Text += L"Чётные элементы: ";
			for (int i = 0; i < size; i++)
			{
				if (arr[i] % 2 == 0)
				{
					txtResult->Text += (arr[i].ToString() + " ");
				}
			}
		}
		if (radioOdd->Checked)
		{
			txtResult->Text += L"Нечётные элементы: ";
			for (int i = 0; i < size; i++)
			{
				if (arr[i] % 2 != 0)
				{
					txtResult->Text += (arr[i].ToString() + " ");
				}
			}
		}
		if (radioSort1->Checked)
		{
			txtResult->Text += L"Сортировка по возрастанию: ";
			while (i + 1 < size)
			{
				if (arr[i + 1] < arr[i])
				{
					k = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = k;
					i = 0;
				}
				if (arr[i + 1] >= arr[i])
					++i;
			}
			for (int i = 0; i < size; i++)
			{
				txtResult->Text += (arr[i].ToString() + " ");
			}
		}
		if (radioSort2->Checked)
		{
			txtResult->Text += L"Сортировка по убыванию: ";
			while (i + 1 < size)
			{
				if (arr[i + 1] > arr[i])
				{
					k = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = k;
					i = 0;
				}
				if (arr[i + 1] <= arr[i])
					++i;
			}
			for (int i = 0; i < size; i++)
			{
				txtResult->Text += (arr[i].ToString() + " ");
			}
		}
		if (txtResult->Text != "")
			if (txtResult->Text == ComparePrev)
				Compare = 1;
			else
				Compare = 0;
		ComparePrev = txtResult->Text;
		delete[] arr;
	}
		   char ds;
		   int x1;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Определение десятичного разделителя (точки или запятой)
			// из региональных настроек.
		NumberFormatInfo^ nfi = NumberFormatInfo::CurrentInfo;
		ds = (char)nfi->NumberDecimalSeparator[0];
	}
		   void txtinput_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		   {
			   if (!Char::IsDigit(e->KeyChar) & e->KeyChar != '-' & e->KeyChar != ' ')
			   {
				   e->Handled = true;
				   return;
			   }
			   Gen = 0;
			   Res = 1;
			   if (e->KeyChar != ' ')
				   txtResult->Text = L"";

		   }
		   void txtAmount_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		   {
			   // Если нажатая клавиша не цифровая.
			   if (!Char::IsDigit(e->KeyChar))
				   // Запрет на ввод более одного знака минуса.
				   if (e->KeyChar != '-' || txtAmount->Text->IndexOf('-') != -1)
					   // Запрет на ввод более одного десятичного разделителя.
					   if (e->KeyChar != ds || txtAmount->Text->IndexOf(ds) != -1)
						   // Если нажатая клавиша не является клавишей BackSpace.
						   if (e->KeyChar != (char)Keys::Back)
							   e->Handled = true;          // Запрет ввода

				   // Запрет ввода повторных нулей в начале числа.
			   if (e->KeyChar == (char)Keys::D0 ||
				   e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
				   if (txtAmount->Text->Length >= 1)        // Если строка не пустая
					   if (txtAmount->Text[0] == '0' && txtAmount->SelectionStart < 2)
						   e->Handled = true;             // Запрет ввода
				   // Замена десятичного разделителя в начале числа на "0,".
			   if (e->KeyChar == ds)
			   {    // Если введен десятичный разделитель
				   x1 = 0;
				   if (txtAmount->Text != "" && txtAmount->Text[0] == '-') { x1 = 1; }
				   if (txtAmount->Text->IndexOf(ds) == -1 &&
					   txtAmount->SelectionStart == x1)
				   {
					   // Если десятичный разделитель уже есть, то 0 вставлять не нужно
					   txtAmount->Text = txtAmount->Text->Insert(x1, "0");  // Вставка 0
					   txtAmount->SelectionStart = x1 + 1;  // Текстовый курсор в конец
				   }
			   }

			   // Перенос точки ввода минуса в начало (ввод минуса только спереди)
			   if (e->KeyChar == '-' && txtAmount->Text->IndexOf('-') == -1)
				   txtAmount->SelectionStart = 0;         // Текстовый курсор в начало
		   }
		   void txtmin_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		   {
			   // Если нажатая клавиша не цифровая.
			   if (!Char::IsDigit(e->KeyChar))
				   // Запрет на ввод более одного знака минуса.
				   if (e->KeyChar != '-' || txtmin->Text->IndexOf('-') != -1)
					   // Запрет на ввод более одного десятичного разделителя.
					   if (e->KeyChar != ds || txtmin->Text->IndexOf(ds) != -1)
						   // Если нажатая клавиша не является клавишей BackSpace.
						   if (e->KeyChar != (char)Keys::Back)
							   e->Handled = true;          // Запрет ввода

				   // Запрет ввода повторных нулей в начале числа.
			   if (e->KeyChar == (char)Keys::D0 ||
				   e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
				   if (txtmin->Text->Length >= 1)        // Если строка не пустая
					   if (txtmin->Text[0] == '0' && txtmin->SelectionStart < 2)
						   e->Handled = true;             // Запрет ввода
				   // Замена десятичного разделителя в начале числа на "0,".
			   if (e->KeyChar == ds)
			   {    // Если введен десятичный разделитель
				   x1 = 0;
				   if (txtmin->Text != "" && txtmin->Text[0] == '-') { x1 = 1; }
				   if (txtmin->Text->IndexOf(ds) == -1 &&
					   txtmin->SelectionStart == x1)
				   {
					   // Если десятичный разделитель уже есть, то 0 вставлять не нужно
					   txtmin->Text = txtmin->Text->Insert(x1, "0");  // Вставка 0
					   txtmin->SelectionStart = x1 + 1;  // Текстовый курсор в конец
				   }
			   }

			   // Перенос точки ввода минуса в начало (ввод минуса только спереди)
			   if (e->KeyChar == '-' && txtmin->Text->IndexOf('-') == -1)
				   txtmin->SelectionStart = 0;         // Текстовый курсор в начало
		   }
		   void txtmax_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		   {
			   // Если нажатая клавиша не цифровая.
			   if (!Char::IsDigit(e->KeyChar))
				   // Запрет на ввод более одного знака минуса.
				   if (e->KeyChar != '-' || txtmax->Text->IndexOf('-') != -1)
					   // Запрет на ввод более одного десятичного разделителя.
					   if (e->KeyChar != ds || txtmax->Text->IndexOf(ds) != -1)
						   // Если нажатая клавиша не является клавишей BackSpace.
						   if (e->KeyChar != (char)Keys::Back)
							   e->Handled = true;          // Запрет ввода

				   // Запрет ввода повторных нулей в начале числа.
			   if (e->KeyChar == (char)Keys::D0 ||
				   e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
				   if (txtmax->Text->Length >= 1)        // Если строка не пустая
					   if (txtmax->Text[0] == '0' && txtmax->SelectionStart < 2)
						   e->Handled = true;             // Запрет ввода
				   // Замена десятичного разделителя в начале числа на "0,".
			   if (e->KeyChar == ds)
			   {    // Если введен десятичный разделитель
				   x1 = 0;
				   if (txtmax->Text != "" && txtmax->Text[0] == '-') { x1 = 1; }
				   if (txtmax->Text->IndexOf(ds) == -1 &&
					   txtmax->SelectionStart == x1)
				   {
					   // Если десятичный разделитель уже есть, то 0 вставлять не нужно
					   txtmax->Text = txtmax->Text->Insert(x1, "0");  // Вставка 0
					   txtmax->SelectionStart = x1 + 1;  // Текстовый курсор в конец
				   }
			   }

			   // Перенос точки ввода минуса в начало (ввод минуса только спереди)
			   if (e->KeyChar == '-' && txtmax->Text->IndexOf('-') == -1)
				   txtmax->SelectionStart = 0;         // Текстовый курсор в начало
		   }
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnOpenFile_Click(System::Object^ sender, System::EventArgs^ e) {
		txtinput->Text = "";
		size = 0;
		String^ Path = textInput->Text;
		String^ line = "test";
		if (!File::Exists(Path))
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Выбор файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			try {
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					textInput->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
			}
			catch (...) {

			}
		}
		Path = textInput->Text;
		if (!File::Exists(Path))
			return;
		// Открытие нового файла для чтения.
		StreamReader^ Inputstream = File::OpenText(Path);
		// Чтение строк из скопированного файла и вывод их на экран
		while (line = Inputstream->ReadLine()) // Чтение строк из файла
		{
			txtinput->Text += line;// Вывод считанных строк
			txtinput->Text += " ";
		}
		Inputstream->Close();
		array<wchar_t>^ ids = { ' ', '\t' };
		array<String^>^ TestS = txtinput->Text->Split(ids);
		txtinput->Text = "";
		for each (String ^ temp in TestS)
		{
			txtinput->Text += temp;
			txtinput->Text += " ";
			//size++;
		}
		String^ space1 = txtinput->Text;
		int i = 1;
		int k = 1;
		bool observer = 0;
		/*while (k < space1->Length - 1)
		{
			if (!Char::IsDigit(space1[k]) & space1[k] != ' ' & space1[k] != '-' & Char::IsDigit(space1[k-1]))
			{
				while (!Char::IsDigit(space1[k]) & space1[k] != ' ' & space1[k] != '-')
				{
					++k;
				}
				if (k < space1->Length - 1)
					if (Char::IsDigit(space1[k]) || space1[k] == '-')
					{
						++size;
					}
			}
			++k;
		}*/
		k = 0;
		while (k < space1->Length - 1)
		{
			if (!Char::IsDigit(space1[k]) & space1[k] != ' ' & space1[k] != '-')
			{
				if (k > 0)
					if ((Char::IsDigit(space1[k - 1]) || space1[k - 1] == '-'))
						observer = 1;
				while (!Char::IsDigit(space1[k]) & space1[k] != ' ' & space1[k] != '-')
				{
					if (k < space1->Length - 1 & observer == 1)
					{
						if (Char::IsDigit(space1[k + 1]) || space1[k + 1] == '-')
						{
							space1 = space1->Insert(k, " ");
							observer = 0;
							break;
						}
					}
					space1 = space1->Remove(k, 1);
				}
			}
			++k;
		}
		txtinput->Text = space1;
		String^ space2 = txtinput->Text;
		while (i < space2->Length - 1)//удаление ненужных пробелов
		{
			if (space2[i] == ' ')
				if (space2[i - 1] == ' ')
					while (space2[i - 1] == ' ' & space2[i] == ' ')
					{
						space2 = space2->Remove(i - 1, 1);
						//size--;
						if (i == space2->Length - 1)
							break;
					}
			if (i == space2->Length - 1 & space2[i] == ' ')
			{
				while (i == space2->Length - 1 & space2[i] == ' ')
				{
					space2 = space2->Remove(i, 1);
					--i;
					//--size;
				}
				//size++;
			}
			++i;
		}
		space2 += " ";
		txtinput->Text = space2;
	}
		   /*
		   * String ^str="String:need:split;this";
array<wchar_t> ^id = { ':' ,';'};
array<String^> ^StringArray =str->Split(':');
array<String^> ^StringArray2 =str->Split(id);
for each(String^ temp in StringArray)
	Console::WriteLine(temp);
Console::WriteLine();
for each(String^ temp in StringArray2)
	Console::WriteLine(temp);
		   */
	private: System::Void btnSaveFile_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Path = textOutput->Text;
		if (!File::Exists(Path))
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Выбор файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				textOutput->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
		}
		Path = textOutput->Text;
		if (!File::Exists(Path))
			return;
		if (txtinput->Text == "" && txtResult->Text == "")
			return;
		if (Compare == 1)
			return;
		String^ InputString;
		StreamWriter^ InputStream = File::AppendText(Path);
		if (Res == 0 & Gen == 0)
		{
			Res = 1; Gen = 1;
			InputStream->WriteLine("");
			InputStream->WriteLine("Исходные данные:");
			InputString = txtinput->Text;
			InputStream->WriteLine(InputString);
			InputString = txtResult->Text;
			InputStream->WriteLine(InputString);
		}
		if (Res == 1 & Gen == 0)
		{
			Gen = 1;
			InputStream->WriteLine("");
			InputStream->WriteLine("Исходные данные:");
			InputString = txtinput->Text;
			InputStream->WriteLine(InputString);
		}
		if (Res == 0 & Gen == 1)
		{
			Res = 1;
			InputString = txtResult->Text;
			InputStream->WriteLine(InputString);
		}
		if (Res == 1 & Gen == 1) {}
		InputStream->Close();
	}
	};
}
