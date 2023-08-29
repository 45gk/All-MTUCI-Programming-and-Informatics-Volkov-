#pragma once
#include <map>
#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <dos.h>
#include <windows.h>

namespace BusDriver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_prepare;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ confirm_settings;

	private: System::Windows::Forms::RadioButton^ rb_std;
	private: System::Windows::Forms::RadioButton^ rb_long;


	private: System::Windows::Forms::RadioButton^ rb_r1;
	private: System::Windows::Forms::RadioButton^ rb_r2;
	private: System::Windows::Forms::RadioButton^ rb_r3;
	private: System::Windows::Forms::RadioButton^ rb_r4;
	private: System::Windows::Forms::Button^ button_open_doors;
	private: System::Windows::Forms::Button^ button_ramp_out;








	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ route_status;
	private: System::Windows::Forms::Label^ doors_status;
	private: System::Windows::Forms::Label^ pandus_status;
	private: System::Windows::Forms::Label^ deligate_status;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button_ramp_in;
	private: System::Windows::Forms::Button^ button_close_doors;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ bt_return_box;
	private: System::Windows::Forms::Label^ txt_info;
	private: System::Windows::Forms::Label^ txt_route_progress;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->bt_prepare = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->confirm_settings = (gcnew System::Windows::Forms::Button());
			this->rb_std = (gcnew System::Windows::Forms::RadioButton());
			this->rb_long = (gcnew System::Windows::Forms::RadioButton());
			this->rb_r1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_r2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_r3 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_r4 = (gcnew System::Windows::Forms::RadioButton());
			this->button_open_doors = (gcnew System::Windows::Forms::Button());
			this->button_ramp_out = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->route_status = (gcnew System::Windows::Forms::Label());
			this->doors_status = (gcnew System::Windows::Forms::Label());
			this->pandus_status = (gcnew System::Windows::Forms::Label());
			this->deligate_status = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_route_progress = (gcnew System::Windows::Forms::Label());
			this->txt_info = (gcnew System::Windows::Forms::Label());
			this->bt_return_box = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_close_doors = (gcnew System::Windows::Forms::Button());
			this->button_ramp_in = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// bt_prepare
			// 
			this->bt_prepare->Location = System::Drawing::Point(6, 29);
			this->bt_prepare->Name = L"bt_prepare";
			this->bt_prepare->Size = System::Drawing::Size(140, 43);
			this->bt_prepare->TabIndex = 0;
			this->bt_prepare->Text = L"���������� ��������";
			this->bt_prepare->UseVisualStyleBackColor = true;
			this->bt_prepare->Click += gcnew System::EventHandler(this, &MyForm::bt_prepare_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(399, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// confirm_settings
			// 
			this->confirm_settings->Location = System::Drawing::Point(159, 201);
			this->confirm_settings->Name = L"confirm_settings";
			this->confirm_settings->Size = System::Drawing::Size(160, 38);
			this->confirm_settings->TabIndex = 2;
			this->confirm_settings->Text = L"����������� ���������";
			this->confirm_settings->UseVisualStyleBackColor = true;
			this->confirm_settings->Click += gcnew System::EventHandler(this, &MyForm::confirm_settings_Click);
			// 
			// rb_std
			// 
			this->rb_std->AutoSize = true;
			this->rb_std->Checked = true;
			this->rb_std->Location = System::Drawing::Point(6, 19);
			this->rb_std->Name = L"rb_std";
			this->rb_std->Size = System::Drawing::Size(115, 17);
			this->rb_std->TabIndex = 3;
			this->rb_std->TabStop = true;
			this->rb_std->Text = L"������� �������";
			this->rb_std->UseVisualStyleBackColor = true;
			this->rb_std->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_std_CheckedChanged);
			// 
			// rb_long
			// 
			this->rb_long->AutoSize = true;
			this->rb_long->Location = System::Drawing::Point(6, 42);
			this->rb_long->Name = L"rb_long";
			this->rb_long->Size = System::Drawing::Size(136, 17);
			this->rb_long->TabIndex = 3;
			this->rb_long->Text = L"���������� �������";
			this->rb_long->UseVisualStyleBackColor = true;
			this->rb_long->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_long_CheckedChanged);
			// 
			// rb_r1
			// 
			this->rb_r1->AutoSize = true;
			this->rb_r1->Checked = true;
			this->rb_r1->Location = System::Drawing::Point(6, 19);
			this->rb_r1->Name = L"rb_r1";
			this->rb_r1->Size = System::Drawing::Size(79, 17);
			this->rb_r1->TabIndex = 3;
			this->rb_r1->TabStop = true;
			this->rb_r1->Text = L"������� 1";
			this->rb_r1->UseVisualStyleBackColor = true;
			this->rb_r1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_r1_CheckedChanged);
			// 
			// rb_r2
			// 
			this->rb_r2->AutoSize = true;
			this->rb_r2->Location = System::Drawing::Point(6, 42);
			this->rb_r2->Name = L"rb_r2";
			this->rb_r2->Size = System::Drawing::Size(79, 17);
			this->rb_r2->TabIndex = 3;
			this->rb_r2->Text = L"������� 2";
			this->rb_r2->UseVisualStyleBackColor = true;
			this->rb_r2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_r2_CheckedChanged);
			// 
			// rb_r3
			// 
			this->rb_r3->AutoSize = true;
			this->rb_r3->Location = System::Drawing::Point(6, 65);
			this->rb_r3->Name = L"rb_r3";
			this->rb_r3->Size = System::Drawing::Size(79, 17);
			this->rb_r3->TabIndex = 3;
			this->rb_r3->Text = L"������� 3";
			this->rb_r3->UseVisualStyleBackColor = true;
			this->rb_r3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_r3_CheckedChanged);
			// 
			// rb_r4
			// 
			this->rb_r4->AutoSize = true;
			this->rb_r4->Location = System::Drawing::Point(6, 88);
			this->rb_r4->Name = L"rb_r4";
			this->rb_r4->Size = System::Drawing::Size(79, 17);
			this->rb_r4->TabIndex = 3;
			this->rb_r4->Text = L"������� 4";
			this->rb_r4->UseVisualStyleBackColor = true;
			this->rb_r4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_r4_CheckedChanged);
			// 
			// button_open_doors
			// 
			this->button_open_doors->Location = System::Drawing::Point(257, 78);
			this->button_open_doors->Name = L"button_open_doors";
			this->button_open_doors->Size = System::Drawing::Size(139, 30);
			this->button_open_doors->TabIndex = 1;
			this->button_open_doors->Text = L"������� �����";
			this->button_open_doors->UseVisualStyleBackColor = true;
			this->button_open_doors->Click += gcnew System::EventHandler(this, &MyForm::button_open_doors_Click);
			// 
			// button_ramp_out
			// 
			this->button_ramp_out->Location = System::Drawing::Point(257, 114);
			this->button_ramp_out->Name = L"button_ramp_out";
			this->button_ramp_out->Size = System::Drawing::Size(139, 30);
			this->button_ramp_out->TabIndex = 1;
			this->button_ramp_out->Text = L"��������� ������";
			this->button_ramp_out->UseVisualStyleBackColor = true;
			this->button_ramp_out->Click += gcnew System::EventHandler(this, &MyForm::button_ramp_out_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(399, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(139, 30);
			this->button6->TabIndex = 1;
			this->button6->Text = L"�������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// route_status
			// 
			this->route_status->AutoSize = true;
			this->route_status->Location = System::Drawing::Point(573, 51);
			this->route_status->Name = L"route_status";
			this->route_status->Size = System::Drawing::Size(10, 13);
			this->route_status->TabIndex = 4;
			this->route_status->Text = L"-";
			// 
			// doors_status
			// 
			this->doors_status->AutoSize = true;
			this->doors_status->Location = System::Drawing::Point(573, 87);
			this->doors_status->Name = L"doors_status";
			this->doors_status->Size = System::Drawing::Size(10, 13);
			this->doors_status->TabIndex = 4;
			this->doors_status->Text = L"-";
			// 
			// pandus_status
			// 
			this->pandus_status->AutoSize = true;
			this->pandus_status->Location = System::Drawing::Point(573, 123);
			this->pandus_status->Name = L"pandus_status";
			this->pandus_status->Size = System::Drawing::Size(10, 13);
			this->pandus_status->TabIndex = 4;
			this->pandus_status->Text = L"-";
			// 
			// deligate_status
			// 
			this->deligate_status->AutoSize = true;
			this->deligate_status->Location = System::Drawing::Point(573, 160);
			this->deligate_status->Name = L"deligate_status";
			this->deligate_status->Size = System::Drawing::Size(10, 13);
			this->deligate_status->TabIndex = 4;
			this->deligate_status->Text = L"-";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->confirm_settings);
			this->groupBox1->Location = System::Drawing::Point(38, 373);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 256);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������� ";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rb_std);
			this->groupBox4->Controls->Add(this->rb_long);
			this->groupBox4->Location = System::Drawing::Point(17, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 66);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"����� ��������";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rb_r1);
			this->groupBox3->Controls->Add(this->rb_r2);
			this->groupBox3->Controls->Add(this->rb_r3);
			this->groupBox3->Controls->Add(this->rb_r4);
			this->groupBox3->Location = System::Drawing::Point(17, 91);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(196, 110);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"����� ��������";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txt_route_progress);
			this->groupBox2->Controls->Add(this->txt_info);
			this->groupBox2->Controls->Add(this->bt_return_box);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button_close_doors);
			this->groupBox2->Controls->Add(this->bt_prepare);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->deligate_status);
			this->groupBox2->Controls->Add(this->button_open_doors);
			this->groupBox2->Controls->Add(this->pandus_status);
			this->groupBox2->Controls->Add(this->button_ramp_in);
			this->groupBox2->Controls->Add(this->button_ramp_out);
			this->groupBox2->Controls->Add(this->doors_status);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->route_status);
			this->groupBox2->Location = System::Drawing::Point(394, 367);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(901, 253);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"����������";
			// 
			// txt_route_progress
			// 
			this->txt_route_progress->AutoSize = true;
			this->txt_route_progress->Location = System::Drawing::Point(573, 16);
			this->txt_route_progress->Name = L"txt_route_progress";
			this->txt_route_progress->Size = System::Drawing::Size(10, 13);
			this->txt_route_progress->TabIndex = 11;
			this->txt_route_progress->Text = L"-";
			// 
			// txt_info
			// 
			this->txt_info->AutoSize = true;
			this->txt_info->Location = System::Drawing::Point(31, 214);
			this->txt_info->Name = L"txt_info";
			this->txt_info->Size = System::Drawing::Size(129, 13);
			this->txt_info->TabIndex = 10;
			this->txt_info->Text = L"��������� �� �������.";
			// 
			// bt_return_box
			// 
			this->bt_return_box->Location = System::Drawing::Point(639, 201);
			this->bt_return_box->Name = L"bt_return_box";
			this->bt_return_box->Size = System::Drawing::Size(150, 32);
			this->bt_return_box->TabIndex = 9;
			this->bt_return_box->Text = L"��������� � ����";
			this->bt_return_box->UseVisualStyleBackColor = true;
			this->bt_return_box->Click += gcnew System::EventHandler(this, &MyForm::bt_return_box_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(399, 6);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(139, 30);
			this->progressBar1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"������";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button_close_doors
			// 
			this->button_close_doors->Location = System::Drawing::Point(399, 78);
			this->button_close_doors->Name = L"button_close_doors";
			this->button_close_doors->Size = System::Drawing::Size(139, 30);
			this->button_close_doors->TabIndex = 5;
			this->button_close_doors->Text = L"������� �����";
			this->button_close_doors->UseVisualStyleBackColor = true;
			this->button_close_doors->Click += gcnew System::EventHandler(this, &MyForm::button_close_doors_Click);
			// 
			// button_ramp_in
			// 
			this->button_ramp_in->Location = System::Drawing::Point(399, 114);
			this->button_ramp_in->Name = L"button_ramp_in";
			this->button_ramp_in->Size = System::Drawing::Size(139, 30);
			this->button_ramp_in->TabIndex = 1;
			this->button_ramp_in->Text = L"������ ������";
			this->button_ramp_in->UseVisualStyleBackColor = true;
			this->button_ramp_in->Click += gcnew System::EventHandler(this, &MyForm::button_ramp_in_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(247, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(896, 321);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(247, -5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(949, 324);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(223, 80);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(644, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(223, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(936, 336);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1349, 632);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"BusDriver";
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		ref class Bus
		{
			// �������� �����
		private:int route = 1;
		private:bool status_trip = false;
		private:bool doors_open_status = false;
		private:bool ramp_open_status = false;
		private:int bus_count = 0; 
		private:int route_count;
		private:bool confirm_status = false;
		private: bool stop_flag = false;
		public:
			Bus() {//�����������
				//route = route_input;

			}
			;
			void numberRoute(int route_input) {
				route = route_input;
				if (route == 1) {
					bus_count = 4;
					route_count = 4;
				}
				if (route == 2) {
					bus_count = 5;
					route_count = 5;
				}
				if (route == 3) {
					bus_count = 6;
					route_count = 6;
				}
				if (route == 4) {
					bus_count = 7;
					route_count = 7;
				}
			}
			void confirm() {
				confirm_status = true;
			}
			void unconfirm() {
				confirm_status = false;
			}
			bool getConfirmStatus() {
				return confirm_status;
			}
			void prepared() {//����� ���������� �������� � ��������
				status_trip = true;
				doors_open_status = false;
				ramp_open_status = false;
			}
			void unprepared() {// ����� ������ ����������
				status_trip = false;
				doors_open_status = false;
				ramp_open_status = false;
			}


			bool goToNextStop() {// �������� � ��������� ���������
				
				if (doors_open_status == true ) {
					return false;
				}
				else {
					
						bus_count--;
						return true;
						
					
				}
			}
			int getCountOfStops() {
				return bus_count;
			}
			bool openDoors() {// ����� �������� ������
				if (doors_open_status == false) {
					doors_open_status = true;
					return true;
				}
				else {
					return false;
				}

			}
			bool lowRamp() {//����� �������� ������
				if (ramp_open_status == false) {
					ramp_open_status = true;
					return true;
				}
				else {
					return false;
				}
			}
			bool closeDoors() {
				if (doors_open_status == true) {
					doors_open_status = false;
					return true;
				}
				else {
					return false;
				}

			}
			bool raiseRamp() {
				if (ramp_open_status == true) {
					ramp_open_status = false;
					return true;
				}
				else {
					return false;
				}
			}
			bool sobitie() {
				return true;
			}
			bool getDoorsStatus(){
				return doors_open_status;
			}
			bool getRampStatus() {
				return ramp_open_status;
			}
			bool getPreparationStatus() {
				return status_trip;
			}
			int getRouteLength() {
				return route_count;
			}
			bool stopCheck() {
				return stop_flag;
			}
			void busStop() {
				stop_flag = true;
			}
			void busStopFinished(){
				stop_flag = false;
			}
		
		};
		ref class LongBus : public Bus {

		};
		ref class BusStop {

		};

Bus^ stdBus = gcnew Bus;
LongBus^ longBus = gcnew LongBus;
bool is_std = true;

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void confirm_settings_Click(System::Object^ sender, System::EventArgs^ e) {// ������ ������������� ��������
	if (rb_long->Checked == true) {
		is_std = false;
		if (longBus->getConfirmStatus() == false) {
			if (rb_r1->Checked == true) {
				longBus->numberRoute(1);
			}
			if (rb_r2->Checked == true) {
				longBus->numberRoute(2);
			}
			if (rb_r3->Checked == true) {
				longBus->numberRoute(3);
			}
			if (rb_r4->Checked == true) {
				longBus->numberRoute(4);
			}
			longBus->confirm();
			this->txt_info->Text = "��������� ������������, ����������� �������, ����� ��������� � ��������� ���������.";
		}

		else {
			MessageBox::Show("�� ��� ����������� ���������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else{
		is_std = true;
	if (stdBus->getConfirmStatus() == false) {
		if (rb_r1->Checked == true) {
			stdBus->numberRoute(1);
		}
		if (rb_r2->Checked == true) {
			stdBus->numberRoute(2);
		}
		if (rb_r3->Checked == true) {
			stdBus->numberRoute(3);
		}
		if (rb_r4->Checked == true) {
			stdBus->numberRoute(4);
		}
		stdBus->confirm();
		this->txt_info->Text = "��������� ������������, ����������� �������, ����� ��������� � ��������� ���������.";
	}
	
	else {
		MessageBox::Show("�� ��� ����������� ���������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	}
}

	   void waiit() {
		   this->txt_info->Text = "����������� �������� � ��������� ���������.";
		   Sleep(2000);
		   if (is_std == true) {
			   this->route_status->Text = "��������� �������� " + Convert::ToString(stdBus->getCountOfStops());
		   }
		   else {
			   this->route_status->Text = "��������� �������� " + Convert::ToString(longBus->getCountOfStops());
		   }
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {// ��������
	if (is_std == true) {
	if (stdBus->getPreparationStatus() == true) {
		bool flag;
		int i = 1;
			if (stdBus->getCountOfStops() > 0) {
				flag = stdBus->goToNextStop();
				if (flag == true) {
					if (stdBus->stopCheck() == false) {
						//this->doors_status->Text = "kzkz"+Convert::ToString(i);
						waiit();
						double res = (1 / double(stdBus->getRouteLength())) * 100;
						int res_1 = int(res);
						this->txt_info->Text = Convert::ToString(res_1);
						this->progressBar1->Increment(res_1);
						this->txt_info->Text = "�� ��������� � ���������, �������� �����, ����� �������� ����������.";
						stdBus->busStop();

						if (stdBus->getCountOfStops() == 0) {
							this->progressBar1->Increment(100);
							this->txt_info->Text = "�� �������� ��������� ���������, ��������� ���������� � ������������� � ����.";
						}

					}
					else {
						MessageBox::Show("�� ������ ������� ����� � ��������� ����������.", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else {
					MessageBox::Show("�������� � ��������� ��������� ����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}

			}
			else {
				this->route_status->Text = "������� �������� ";
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {//�������
		if (longBus->getPreparationStatus() == true) {
			bool flag;
			int i = 1;
			if (longBus->getCountOfStops() > 0) {
				flag = longBus->goToNextStop();
				if (flag == true) {
					if (longBus->stopCheck() == false) {
						//this->doors_status->Text = "kzkz"+Convert::ToString(i);
						waiit();
						double res = (1 / double(longBus->getRouteLength())) * 100;
						int res_1 = int(res);
						this->txt_info->Text = Convert::ToString(res_1);
						this->progressBar1->Increment(res_1);
						this->txt_info->Text = "�� ��������� � ���������, �������� �����, ����� �������� ����������.";
						longBus->busStop();

						if (longBus->getCountOfStops() == 0) {
							this->progressBar1->Increment(100);
							this->txt_info->Text = "�� �������� ��������� ���������, ��������� ���������� � ������������� � ����.";
						}

					}
					else {
						MessageBox::Show("�� ������ ������� ����� � ��������� ����������.", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else {
					MessageBox::Show("�������� � ��������� ��������� ����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}

			}
			else {
				this->route_status->Text = "������� �������� ";
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
private: System::Void button_open_doors_Click(System::Object^ sender, System::EventArgs^ e) {//�������� ������
	if (is_std == true) {// �������
		if (stdBus->getPreparationStatus() == true) {
			bool flag;
			flag = stdBus->openDoors();
			if (flag == true) {
				if (stdBus->getCountOfStops() == 0) {
					this->txt_info->Text = "��� ��������� �����, �������� �����.";
				}
				else {
					doors_status->Text = "����� �������";
					pictureBox2->Visible = false;
					pictureBox1->Visible = true;
					this->txt_info->Text = "������� ��������, �������� �����.";
					stdBus->busStopFinished();
				}
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else { //�������
		if (longBus->getPreparationStatus() == true) {
			bool flag;
			flag = longBus->openDoors();
			if (flag == true) {
				if (longBus->getCountOfStops() == 0) {
					this->txt_info->Text = "��� ��������� �����, �������� �����.";
				}
				else {
					doors_status->Text = "����� �������";
					pictureBox2->Visible = false;
					pictureBox1->Visible = true;
					this->txt_info->Text = "������� ��������, �������� �����.";
					longBus->busStopFinished();
				}
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
private: System::Void button_close_doors_Click(System::Object^ sender, System::EventArgs^ e) {//�������� ������
	if (is_std == true) {// �������
		if (stdBus->getPreparationStatus() == true) {
			if (stdBus->getRampStatus() == false) {
				bool flag;
				flag = stdBus->closeDoors();
				if (flag == true) {
					if (stdBus->getCountOfStops() == 0) {
						MessageBox::Show("�� ������� ��������� �������", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
						this->txt_info->Text = "�� ������� ��������� �������, ������������� � ����.";
					}
					else {
						doors_status->Text = "����� �������";
						pictureBox2->Visible = true;
						pictureBox1->Visible = false;
						this->txt_info->Text = "������� ��������, �� ������ ���������� �������.";
					}
				}
			}
			else {
				MessageBox::Show("������ �� �����.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {// �������
		if (longBus->getPreparationStatus() == true) {
			if (longBus->getRampStatus() == false) {
				bool flag;
				flag = longBus->closeDoors();
				if (flag == true) {
					if (longBus->getCountOfStops() == 0) {
						MessageBox::Show("�� ������� ��������� �������", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
						this->txt_info->Text = "�� ������� ��������� �������, ������������� � ����.";
					}
					else {
						doors_status->Text = "����� �������";
						//pictureBox2->Visible = true;
						//pictureBox1->Visible = false;
						this->txt_info->Text = "������� ��������, �� ������ ���������� �������.";
					}
				}
			}
			else {
				MessageBox::Show("������ �� �����.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}

private: System::Void button_ramp_in_Click(System::Object^ sender, System::EventArgs^ e) {//��������� �������
	if (is_std == true) {// �������
		if (stdBus->getPreparationStatus() == true) {
			if (stdBus->getDoorsStatus() == true) {
				bool flag;
				flag = stdBus->raiseRamp();
				if (flag == true) {
					pictureBox4->Visible = false;
					pictureBox1->Visible = true;
					pandus_status->Text = "������ �����";
				}
			}
			else {
				MessageBox::Show("����� �� �������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {// �������
		if (longBus->getPreparationStatus() == true) {
			if (longBus->getDoorsStatus() == true) {
				bool flag;
				flag = longBus->raiseRamp();
				if (flag == true) {
					//pictureBox4->Visible = false;
					//pictureBox1->Visible = true;
					pandus_status->Text = "������ �����";
				}
			}
			else {
				MessageBox::Show("����� �� �������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
private: System::Void button_ramp_out_Click(System::Object^ sender, System::EventArgs^ e) {//�������� �������
	if (is_std == true) {// �������
		if (stdBus->getPreparationStatus() == true) {
			if (stdBus->getDoorsStatus() == true) {
				bool flag;
				flag = stdBus->lowRamp();
				if (flag == true) {
					pictureBox4->Visible = true;
					pictureBox1->Visible = false;
					pandus_status->Text = "������ ������";
				}
			}
			else {
				MessageBox::Show("����� �� �������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {//������
		if (longBus->getPreparationStatus() == true) {
			if (longBus->getDoorsStatus() == true) {
				bool flag;
				flag = longBus->lowRamp();
				if (flag == true) {
					//pictureBox4->Visible = true;
					//pictureBox1->Visible = false;
					pandus_status->Text = "������ ������";
				}
			}
			else {
				MessageBox::Show("����� �� �������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("������� �� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
private: System::Void bt_prepare_Click(System::Object^ sender, System::EventArgs^ e) {// ������ ���������� ��������
	if (is_std == true) {// �������
		if (rb_std->Checked == true || rb_long->Checked == true) {
			if (stdBus->getPreparationStatus() == true) {// �������� �� ��� ����������������
				MessageBox::Show("������� ��� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				doors_status->Text = "����� �������";
				pandus_status->Text = "������ �����";
				route_status->Text = "��������� ���������-����";
				deligate_status->Text = "����";
				stdBus->prepared();
				this->route_status->Text = "��������� �������� " + Convert::ToInt32(stdBus->getCountOfStops());
				this->txt_info->Text = "������� �����������, �� ������ ��������� � ��������� ���������.";
				this->txt_route_progress->Text = "�������� ��������.";

			}
		}
		else {
			MessageBox::Show("�� �� ������� ���������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {// �������
		if (rb_std->Checked == true || rb_long->Checked == true) {
			if (longBus->getPreparationStatus() == true) {// �������� �� ��� ����������������
				MessageBox::Show("������� ��� �����������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				doors_status->Text = "����� �������";
				pandus_status->Text = "������ �����";
				route_status->Text = "��������� ���������-����";
				deligate_status->Text = "����";
				longBus->prepared();
				this->route_status->Text = "��������� �������� " + Convert::ToInt32(longBus->getCountOfStops());
				this->txt_info->Text = "������� �����������, �� ������ ��������� � ��������� ���������.";
				this->txt_route_progress->Text = "�������� ��������.";

			}
		}
		else {
			MessageBox::Show("�� �� ������� ���������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}


private: System::Void bt_return_box_Click(System::Object^ sender, System::EventArgs^ e) {// ������ ����������� � ����
	if (is_std == true) {// �������
		if (stdBus->getConfirmStatus() == true) {
			doors_status->Text = "-";
			pandus_status->Text = "-";
			route_status->Text = "-";
			txt_route_progress->Text = "-";
			deligate_status->Text = "-";
			stdBus->busStopFinished();
			this->stdBus->unprepared();
			this->stdBus->unconfirm();
			this->txt_info->Text = "��������� �� �������.";
			this->progressBar1->Increment(-100);

		}
		else {
			MessageBox::Show("�� ��� ���������� � ����.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {//�������
		if (longBus->getConfirmStatus() == true) {
			doors_status->Text = "-";
			pandus_status->Text = "-";
			route_status->Text = "-";
			txt_route_progress->Text = "-";
			deligate_status->Text = "-";
			longBus->busStopFinished();
			this->longBus->unprepared();
			this->longBus->unconfirm();
			this->txt_info->Text = "��������� �� �������.";
			this->progressBar1->Increment(-100);

		}
		else {
			MessageBox::Show("�� ��� ���������� � ����.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
// ����������� ������ �������� ��� ��������		


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (longBus->getConfirmStatus() == true || stdBus->getConfirmStatus() == true) {
		//rb
		MessageBox::Show("�� ��� ����������� ���������.", "��������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

private: System::Void rb_std_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = false;
}

private: System::Void rb_long_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox2->Visible = false;
	this->pictureBox3->Visible=true;
}

private: System::Void rb_r1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void rb_r2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void rb_r3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void rb_r4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
