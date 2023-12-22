#pragma once
#include <Windows.h>

namespace UniformNormalDistribution {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//---------

	ref class MyForm;

	//----------

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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

	protected:
















	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;









	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;


	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart9;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart11;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart12;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart13;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart14;























	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::StatusStrip^  statusStrip2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;



private: System::Windows::Forms::TabPage^  tabPage16;
private: System::Windows::Forms::TabPage^  tabPage18;






private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart15;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::CheckBox^ checkBox5;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->statusStrip2 = (gcnew System::Windows::Forms::StatusStrip());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart15))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(99, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Активный участок";
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(6, 32);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(96, 17);
			this->checkBox6->TabIndex = 3;
			this->checkBox6->Text = L"Угол наклона";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->statusStrip2->Location = System::Drawing::Point(0, 604);
			this->statusStrip2->Name = L"statusStrip2";
			this->statusStrip2->Size = System::Drawing::Size(989, 22);
			this->statusStrip2->SizingGrip = false;
			this->statusStrip2->TabIndex = 1;
			this->statusStrip2->Text = L"statusStrip2";
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(957, 576);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Формирование из белого шума случайного процесса";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Location = System::Drawing::Point(478, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(473, 564);
			this->tabControl2->TabIndex = 2;
			this->tabPage4->Controls->Add(this->chart1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(465, 538);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Rav";
			this->tabPage4->UseVisualStyleBackColor = true;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 78);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series1->ChartArea = L"ChartArea1";
			series1->CustomProperties = L"PointWidth=1";
			series1->Legend = L"Legend1";
			series1->Name = L"Rav";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(453, 342);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->tabPage5->Controls->Add(this->chart5);
			this->tabPage5->Controls->Add(this->chart4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(465, 538);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Сигма коридор";
			this->tabPage5->UseVisualStyleBackColor = true;
			chartArea2->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart5->Legends->Add(legend2);
			this->chart5->Location = System::Drawing::Point(6, 274);
			this->chart5->Name = L"chart5";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"D(g)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"e(g)";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"-e(g)";
			this->chart5->Series->Add(series2);
			this->chart5->Series->Add(series3);
			this->chart5->Series->Add(series4);
			this->chart5->Size = System::Drawing::Size(453, 258);
			this->chart5->TabIndex = 1;
			this->chart5->Text = L"chart5";
			chartArea3->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart4->Legends->Add(legend3);
			this->chart4->Location = System::Drawing::Point(6, 10);
			this->chart4->Name = L"chart4";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"m(g)";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"w(g)";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"-w(g)";
			this->chart4->Series->Add(series5);
			this->chart4->Series->Add(series6);
			this->chart4->Series->Add(series7);
			this->chart4->Size = System::Drawing::Size(453, 258);
			this->chart4->TabIndex = 0;
			this->chart4->Text = L"chart4";
			this->tabPage2->Controls->Add(this->chart15);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(465, 538);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"График y(t)";
			this->tabPage2->UseVisualStyleBackColor = true;
			chartArea4->Name = L"ChartArea1";
			this->chart15->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart15->Legends->Add(legend4);
			this->chart15->Location = System::Drawing::Point(6, 140);
			this->chart15->Name = L"chart15";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Legend = L"Legend1";
			series8->Name = L"y";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Legend = L"Legend1";
			series9->Name = L"x";
			this->chart15->Series->Add(series8);
			this->chart15->Series->Add(series9);
			this->chart15->Size = System::Drawing::Size(453, 258);
			this->chart15->TabIndex = 1;
			this->chart15->Text = L"chart15";
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Location = System::Drawing::Point(6, 241);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(466, 325);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Промежуточный результат";
			this->richTextBox1->Location = System::Drawing::Point(6, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(454, 300);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(466, 229);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальные данные";
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Время";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Шаг";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Сигма";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Вариант";
			this->textBox7->Location = System::Drawing::Point(99, 187);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(53, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"50";
			this->textBox6->Location = System::Drawing::Point(99, 161);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->Text = L"0,1";
			this->textBox5->Location = System::Drawing::Point(99, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"10";
			this->textBox4->Location = System::Drawing::Point(99, 109);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"4";
			this->button1->Location = System::Drawing::Point(360, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->textBox3->Location = System::Drawing::Point(128, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(48, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"1";
			this->textBox2->Location = System::Drawing::Point(32, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Параметры распределения Rav[0,1]";
			this->textBox1->Location = System::Drawing::Point(78, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"100";
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество моделируемых значений";
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(965, 602);
			this->tabControl1->TabIndex = 0;
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->checkBox5);
			this->groupBox3->Location = System::Drawing::Point(207, 9);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(253, 180);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Экспериментальный метод получения случайных процесса (дополнительная задача)";
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(14, 46);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(134, 17);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"Активировать задачу";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Масштаб турбулентности (L)";
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Скорость движения ЛА (V)";
			this->textBox8->Location = System::Drawing::Point(14, 146);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(53, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"700";
			this->textBox9->Location = System::Drawing::Point(14, 100);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 20);
			this->textBox9->TabIndex = 12;
			this->textBox9->Text = L"300";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 626);
			this->Controls->Add(this->statusStrip2);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart15))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (checkBox5->Checked)
			InitExperimentalMethodForObtainingRandomProcessesFromWhiteNoise(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text), Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox7->Text), Convert::ToDouble(textBox5->Text), Convert::ToDouble(textBox6->Text), Convert::ToDouble(textBox9->Text), Convert::ToDouble(textBox8->Text));
		else
			InitFormationOfRandomProcessFromWhiteNoise(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text), Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox7->Text), Convert::ToDouble(textBox5->Text), Convert::ToDouble(textBox6->Text));

		richTextBox1->Clear();
		richTextBox1->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));
	}

	private: System::Void InitFormationOfRandomProcessFromWhiteNoise(int N, int left, int right, int option, int time, float sigma, float H)
	{
	   clock_t Time = clock();
	   ofstream out("Data.txt", ios::out);

	   float* Ravn = new float[N];
	   for (int i = 0; i < N; i++)
		   Ravn[i] = 1.0 * rand() / (RAND_MAX + 1); // от 0 до 1

	   float max = Ravn[0], min = Ravn[0];
	   for (int i = 0; i < N; i++)
	   {
		   if (max < Ravn[i])
			   max = Ravn[i];
		   if (min > Ravn[i])
			   min = Ravn[i];
	   }

	   float h = (max - min) / (10.0);
	   out << "\t\tШаг распределения: " << h << endl << endl;

	   float* Pi = new float[20], * Coord = new float[20];
	   float l_border = 0;
	   float r_border = h;
	   int k = 0, kol = 0;
	   do
	   {
		   k = 0;
		   for (int i = 0; i < N; i++)
		   {
			   if (Ravn[i] > l_border && Ravn[i] < r_border)
				   k++;
		   }
		   Pi[kol] = k / (float)N;
		   Coord[kol] = l_border;
		   kol++;
		   l_border = r_border;
		   r_border += h;
	   } while (r_border < max);

	   chart1->Series["Rav"]->Points->Clear();
	   for (int i = 0; i < kol; i++)
		   chart1->Series["Rav"]->Points->AddXY(Coord[i], Pi[i]);

	   Rav(out, N, Ravn);

	   out << "\n\n";

	   float k1, k2, k3, k4, dy = 0, y = 0, sum = 0, summ = 0;
	   float mg = 0, Dg = 0, ky = 0;

	   float alpha = (float)option * 0.5;
	   float k11 = (sigma * sqrt(alpha * 2.0) / H);
	   k11 += k11 * 0.25;

	   out << " \n\n\t\t k11 " << k11 << endl << endl;

	   chart4->Series["m(g)"]->Points->Clear();
	   chart4->Series["w(g)"]->Points->Clear();
	   chart4->Series["-w(g)"]->Points->Clear();
	   chart5->Series["D(g)"]->Points->Clear();
	   chart5->Series["e(g)"]->Points->Clear();
	   chart5->Series["-e(g)"]->Points->Clear();
	   chart15->Series["y"]->Points->Clear();
	   chart15->Series["x"]->Points->Clear();

	   float* Y = new float[N];
	   float* KY = new float[N];
	   k = 0;
	   do
	   {
		   k1 = k11 * Ravn[k] - alpha * y;
		   k2 = k11 * Ravn[k] - alpha * (y + k1 * H * 0.5);
		   k3 = k11 * Ravn[k] - alpha * (y + k2 * H * 0.5);
		   k4 = k11 * Ravn[k] - alpha * (y + k3 * H * 0.5);

		   dy = (H / 6) * (k1 + 2 * (k2 + k3) + k4);
		   y += dy;

		   out << "y = " << y << endl;

		   sum += y;
		   Y[k] = y;

		   if (k > 1)
		   {
			   mg = sum * (1.0 / (k));
			   chart4->Series["m(g)"]->Points->AddXY(k, mg);
			   summ += pow((y - mg), 2.0);
			   Dg = summ * (1.0 / (k - 1.0));
			   chart5->Series["D(g)"]->Points->AddXY(k, Dg);
			   ky = pow(sigma, 2.0) * exp(-alpha * (k * 0.1));
			   chart15->Series["y"]->Points->AddXY(k, ky / 100.0);
		   }

		   k++;
	   } while (k < N);

	   out << "\n\n\n\t mx = " << mg;
	   out << "\n\t Dx = " << Dg;

	   float SUMM = 0, kx = 0;
	   for (int i = 2; i < N - 1; i++)
	   {
		   sum += Y[i];
		   mg = sum * (1.0 / (i));
		   SUMM = pow((Y[i + 1] - mg), 2.0);
		   kx = KY[i] * SUMM * (-1.0);
		   chart15->Series["x"]->Points->AddXY(i, kx / 10000.0);
	   }

	   double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	   out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

	   delete[]Ravn;
	   delete[]Pi;
	   delete[]Coord;
	   delete[]Y;
	   delete[]KY;

	   out.close();
	}

	private: System::Void InitExperimentalMethodForObtainingRandomProcessesFromWhiteNoise(int N, int left, int right, int option, int time, float sigma, float H, float V, float l)
	{
		clock_t Time = clock();
		ofstream out("Data.txt", ios::out);

		int k = 0, kol = 0;
		float* Ravn = new float[N];
		for (int i = 0; i < N; i++)
			Ravn[i] = 1.0 * rand() / (RAND_MAX + 1); // от 0 до 1

		float* Pi = new float[20], * Coord = new float[20], max = Ravn[0], min = Ravn[0];

		for (int i = 0; i < N; i++)
		{
			if (max < Ravn[i])
				max = Ravn[i];
			if (min > Ravn[i])
				min = Ravn[i];
		}

		float h = (max - min) * 0.1;
		out << "\t\tШаг распределения: " << h << endl << endl;

		float l_border = 0;
		float r_border = h;
		do
		{
			k = 0;
			for (int i = 0; i < N; i++)
				if (Ravn[i] > l_border && Ravn[i] < r_border)
					k++;
			Pi[kol] = k / (float)N;
			Coord[kol] = l_border;
			kol++;
			l_border = r_border;
			r_border += h;
		} while (r_border < max);

		chart1->Series["Rav"]->Points->Clear();
		for (int i = 0; i < kol; i++)
			chart1->Series["Rav"]->Points->AddXY(Coord[i], Pi[i]);

		Rav(out, N, Ravn);

		chart4->Series["m(g)"]->Points->Clear();
		chart4->Series["w(g)"]->Points->Clear();
		chart4->Series["-w(g)"]->Points->Clear();
		chart5->Series["D(g)"]->Points->Clear();
		chart5->Series["e(g)"]->Points->Clear();
		chart5->Series["-e(g)"]->Points->Clear();
		chart15->Series["y"]->Points->Clear();
		chart15->Series["x"]->Points->Clear();

		cout << "\n\n";

		float k1, k2, k3, k4, k11, k12, k13, k14, dy1 = 0, dy2 = 0, y = 0, sum = 0, summ = 0, SUMM = 0;
		float u = 0, u1 = 0, mg = 0, Dg = 0, ky = 0, kx = 0, c1, c2, c3, c4;

		float* Y = new float[N];
		float* KY = new float[N];

		float alpha = 0.5;
		float betta = 0.6;

		k = 0;
		do
		{
			c1 = sigma * sqrt(3.0) * sqrt(V / l);
			c2 = 2 * V / l;
			c3 = pow(V, 2.0) / pow(l, 2.0);
			c4 = -abs(2.0 * sqrt(3.0) - 1.0) * sigma * (V / l) * sqrt(V / l);

			k1 = u1 + c1 * Ravn[k];
			k11 = -c2 * u1 - c3 * u + c4 * Ravn[k] / sqrt(h);

			k2 = (u1 + k11 * h * 0.5) + c1 * Ravn[k];
			k12 = -c2 * (u1 + k11 * h * 0.5) - c3 * (u + k1 * h * 0.5) + c4 * Ravn[k] / sqrt(h);

			k3 = (u1 + k12 * h * 0.5) + c1 * Ravn[k];
			k13 = -c2 * (u1 + k12 * h * 0.5) - c3 * (u + k2 * h * 0.5) + c4 * Ravn[k] / sqrt(h);

			k4 = (u1 + k13 * h * 0.5) + c1 * Ravn[k];
			k14 = -c2 * (u1 + k13 * h * 0.5) - c3 * (u + k3 * h * 0.5) + c4 * Ravn[k] / sqrt(h);

			dy1 = (h / 6.0) * (k1 + 2 * (k2 + k3) + k4);
			dy2 = (h / 6.0) * (k11 + 2 * (k12 + k13) + k14);

			u += dy1;
			u1 += dy2;

			sum += Ravn[k];
			Y[k] = u1;

			if (k > 1)
			{
				mg = sum * (1.0 / (k));
				chart4->Series["m(g)"]->Points->AddXY(k, mg * 100);

				summ += pow((Ravn[k] - mg), 2.0);
				Dg = summ * (1.0 / (k - 1.0));
				chart5->Series["D(g)"]->Points->AddXY(k, Dg * 1000);

				ky = pow(sigma, 2.0) * exp(-abs(k * 0.1) * V / l) * (1.0 - abs(k * 0.1) * V / (2.0 * l));
				KY[k] = ky;
				chart15->Series["y"]->Points->AddXY(k, ky * 0.01);
			}

			k++;
		} while (k < N);

		out << "\n\n\n\t mx = " << mg * 100;
		out << "\n\t Dx = " << Dg * 1000;

		for (int i = 2; i < N - 1; i++)
		{
			sum += Y[i];
			mg = sum * (1.0 / (i));
			SUMM = pow((Y[i + 1] - mg), 2.0);
			kx = KY[i] * SUMM;
			chart15->Series["x"]->Points->AddXY(i, kx / 100000.0);
		}

		delete[]Ravn;
		delete[]Pi;
		delete[]Coord;
		delete[]Y;
		delete[]KY;

		double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
		out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

		out.close();
	}
};
}
