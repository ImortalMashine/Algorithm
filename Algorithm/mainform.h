#pragma once
#include "tableform.h"
#include "infoform.h"

namespace Algorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
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
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  menutoolbar;
	protected:

	private: System::Windows::Forms::ToolStripButton^  doInfo;
	protected:

	private: System::Windows::Forms::GroupBox^  initbox;

	private: System::Windows::Forms::Button^  doClean;

	private: System::Windows::Forms::Button^  doStop;

	private: System::Windows::Forms::Button^  doStart;
	private: System::Windows::Forms::TextBox^  sizeMax;


	private: System::Windows::Forms::CheckBox^  actSort;

	private: System::Windows::Forms::CheckBox^  actRandom;
	private: System::Windows::Forms::Label^  tagN;
	private: System::Windows::Forms::GroupBox^  progressbox;




	private: System::Windows::Forms::Label^  showTime;

	private: System::Windows::Forms::Label^  tagTime;
	private: System::Windows::Forms::ProgressBar^  progressbar;


	private: System::Windows::Forms::Label^  tagProgress;

	private: System::Windows::Forms::Button^  doDownload;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  graphDesk;



	private: System::Windows::Forms::Label^  tagT;


	private: System::Windows::Forms::Button^  doDefault;



	private: System::Windows::Forms::Button^  doSave;
	private: System::Windows::Forms::Panel^  showpanel;



	private: System::Windows::Forms::Button^  doGraph;


	private: System::Windows::Forms::Button^  showTable;
	private: System::Windows::Forms::Panel^  resultpanel;


	private: System::Windows::Forms::Label^  timeSORT;

	private: System::Windows::Forms::Label^  tagResSORT;

	private: System::Windows::Forms::Label^  timeINIT;


	private: System::Windows::Forms::Label^  tagResINIT;
	private: System::Windows::Forms::ComboBox^  selectNUMBER;
	private: System::Windows::Forms::Label^  showDATE;
	private: System::Windows::Forms::Label^  tagDATE;
	private: System::Windows::Forms::Label^  tagNUMBER;
	private: System::Windows::Forms::ComboBox^  comboBox1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainform::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menutoolbar = (gcnew System::Windows::Forms::ToolStrip());
			this->doInfo = (gcnew System::Windows::Forms::ToolStripButton());
			this->initbox = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tagT = (gcnew System::Windows::Forms::Label());
			this->doClean = (gcnew System::Windows::Forms::Button());
			this->doStop = (gcnew System::Windows::Forms::Button());
			this->doStart = (gcnew System::Windows::Forms::Button());
			this->sizeMax = (gcnew System::Windows::Forms::TextBox());
			this->actSort = (gcnew System::Windows::Forms::CheckBox());
			this->actRandom = (gcnew System::Windows::Forms::CheckBox());
			this->tagN = (gcnew System::Windows::Forms::Label());
			this->progressbox = (gcnew System::Windows::Forms::GroupBox());
			this->doSave = (gcnew System::Windows::Forms::Button());
			this->doDefault = (gcnew System::Windows::Forms::Button());
			this->showTime = (gcnew System::Windows::Forms::Label());
			this->tagTime = (gcnew System::Windows::Forms::Label());
			this->progressbar = (gcnew System::Windows::Forms::ProgressBar());
			this->tagProgress = (gcnew System::Windows::Forms::Label());
			this->doDownload = (gcnew System::Windows::Forms::Button());
			this->graphDesk = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->showpanel = (gcnew System::Windows::Forms::Panel());
			this->showDATE = (gcnew System::Windows::Forms::Label());
			this->tagDATE = (gcnew System::Windows::Forms::Label());
			this->tagNUMBER = (gcnew System::Windows::Forms::Label());
			this->selectNUMBER = (gcnew System::Windows::Forms::ComboBox());
			this->doGraph = (gcnew System::Windows::Forms::Button());
			this->showTable = (gcnew System::Windows::Forms::Button());
			this->resultpanel = (gcnew System::Windows::Forms::Panel());
			this->timeSORT = (gcnew System::Windows::Forms::Label());
			this->tagResSORT = (gcnew System::Windows::Forms::Label());
			this->timeINIT = (gcnew System::Windows::Forms::Label());
			this->tagResINIT = (gcnew System::Windows::Forms::Label());
			this->menutoolbar->SuspendLayout();
			this->initbox->SuspendLayout();
			this->progressbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphDesk))->BeginInit();
			this->showpanel->SuspendLayout();
			this->resultpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menutoolbar
			// 
			this->menutoolbar->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menutoolbar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->doInfo });
			this->menutoolbar->Location = System::Drawing::Point(0, 0);
			this->menutoolbar->Name = L"menutoolbar";
			this->menutoolbar->Size = System::Drawing::Size(998, 27);
			this->menutoolbar->TabIndex = 0;
			// 
			// doInfo
			// 
			this->doInfo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->doInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"doInfo.Image")));
			this->doInfo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->doInfo->Name = L"doInfo";
			this->doInfo->Size = System::Drawing::Size(24, 24);
			this->doInfo->Click += gcnew System::EventHandler(this, &mainform::doInfo_Click);
			// 
			// initbox
			// 
			this->initbox->AutoSize = true;
			this->initbox->Controls->Add(this->comboBox1);
			this->initbox->Controls->Add(this->tagT);
			this->initbox->Controls->Add(this->doClean);
			this->initbox->Controls->Add(this->doStop);
			this->initbox->Controls->Add(this->doStart);
			this->initbox->Controls->Add(this->sizeMax);
			this->initbox->Controls->Add(this->actSort);
			this->initbox->Controls->Add(this->actRandom);
			this->initbox->Controls->Add(this->tagN);
			this->initbox->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->initbox->Location = System::Drawing::Point(12, 41);
			this->initbox->Name = L"initbox";
			this->initbox->Size = System::Drawing::Size(341, 159);
			this->initbox->TabIndex = 1;
			this->initbox->TabStop = false;
			this->initbox->Text = L"Settings";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(41, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox1->Size = System::Drawing::Size(176, 28);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"repeat number";
			// 
			// tagT
			// 
			this->tagT->AutoSize = true;
			this->tagT->Location = System::Drawing::Point(6, 69);
			this->tagT->Name = L"tagT";
			this->tagT->Size = System::Drawing::Size(28, 20);
			this->tagT->TabIndex = 7;
			this->tagT->Text = L"T :";
			// 
			// doClean
			// 
			this->doClean->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doClean->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doClean->Location = System::Drawing::Point(242, 98);
			this->doClean->Name = L"doClean";
			this->doClean->Size = System::Drawing::Size(75, 26);
			this->doClean->TabIndex = 6;
			this->doClean->Text = L"Clean";
			this->doClean->UseVisualStyleBackColor = false;
			// 
			// doStop
			// 
			this->doStop->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doStop->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doStop->Location = System::Drawing::Point(242, 66);
			this->doStop->Name = L"doStop";
			this->doStop->Size = System::Drawing::Size(75, 26);
			this->doStop->TabIndex = 5;
			this->doStop->Text = L"Stop";
			this->doStop->UseVisualStyleBackColor = false;
			// 
			// doStart
			// 
			this->doStart->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doStart->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doStart->Location = System::Drawing::Point(242, 34);
			this->doStart->Name = L"doStart";
			this->doStart->Size = System::Drawing::Size(75, 26);
			this->doStart->TabIndex = 4;
			this->doStart->Text = L"Start";
			this->doStart->UseVisualStyleBackColor = false;
			// 
			// sizeMax
			// 
			this->sizeMax->Location = System::Drawing::Point(41, 34);
			this->sizeMax->Name = L"sizeMax";
			this->sizeMax->Size = System::Drawing::Size(176, 27);
			this->sizeMax->TabIndex = 3;
			// 
			// actSort
			// 
			this->actSort->AutoSize = true;
			this->actSort->Location = System::Drawing::Point(127, 109);
			this->actSort->Name = L"actSort";
			this->actSort->Size = System::Drawing::Size(84, 24);
			this->actSort->TabIndex = 2;
			this->actSort->Text = L"Use Sort";
			this->actSort->UseVisualStyleBackColor = true;
			// 
			// actRandom
			// 
			this->actRandom->AutoSize = true;
			this->actRandom->Enabled = false;
			this->actRandom->Location = System::Drawing::Point(9, 109);
			this->actRandom->Name = L"actRandom";
			this->actRandom->Size = System::Drawing::Size(110, 24);
			this->actRandom->TabIndex = 1;
			this->actRandom->Text = L"Use Random";
			this->actRandom->UseVisualStyleBackColor = true;
			// 
			// tagN
			// 
			this->tagN->AutoSize = true;
			this->tagN->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tagN->Location = System::Drawing::Point(6, 37);
			this->tagN->Name = L"tagN";
			this->tagN->Size = System::Drawing::Size(29, 20);
			this->tagN->TabIndex = 0;
			this->tagN->Text = L"N :";
			// 
			// progressbox
			// 
			this->progressbox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->progressbox->AutoSize = true;
			this->progressbox->Controls->Add(this->doSave);
			this->progressbox->Controls->Add(this->doDefault);
			this->progressbox->Controls->Add(this->showTime);
			this->progressbox->Controls->Add(this->tagTime);
			this->progressbox->Controls->Add(this->progressbar);
			this->progressbox->Controls->Add(this->tagProgress);
			this->progressbox->Controls->Add(this->doDownload);
			this->progressbox->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->progressbox->Location = System::Drawing::Point(12, 191);
			this->progressbox->Name = L"progressbox";
			this->progressbox->Size = System::Drawing::Size(341, 172);
			this->progressbox->TabIndex = 2;
			this->progressbox->TabStop = false;
			this->progressbox->Text = L"Test state";
			// 
			// doSave
			// 
			this->doSave->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doSave->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doSave->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doSave->Location = System::Drawing::Point(116, 120);
			this->doSave->Name = L"doSave";
			this->doSave->Size = System::Drawing::Size(98, 26);
			this->doSave->TabIndex = 6;
			this->doSave->Text = L"Save";
			this->doSave->UseVisualStyleBackColor = false;
			// 
			// doDefault
			// 
			this->doDefault->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doDefault->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doDefault->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doDefault->Location = System::Drawing::Point(220, 120);
			this->doDefault->Name = L"doDefault";
			this->doDefault->Size = System::Drawing::Size(98, 26);
			this->doDefault->TabIndex = 5;
			this->doDefault->Text = L"Clean";
			this->doDefault->UseVisualStyleBackColor = false;
			// 
			// showTime
			// 
			this->showTime->AutoSize = true;
			this->showTime->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showTime->Location = System::Drawing::Point(238, 85);
			this->showTime->Name = L"showTime";
			this->showTime->Size = System::Drawing::Size(40, 20);
			this->showTime->TabIndex = 4;
			this->showTime->Text = L"none";
			// 
			// tagTime
			// 
			this->tagTime->AutoSize = true;
			this->tagTime->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tagTime->Location = System::Drawing::Point(174, 85);
			this->tagTime->Name = L"tagTime";
			this->tagTime->Size = System::Drawing::Size(51, 20);
			this->tagTime->TabIndex = 3;
			this->tagTime->Text = L"Time :";
			// 
			// progressbar
			// 
			this->progressbar->Location = System::Drawing::Point(9, 59);
			this->progressbar->Name = L"progressbar";
			this->progressbar->Size = System::Drawing::Size(315, 23);
			this->progressbar->TabIndex = 2;
			// 
			// tagProgress
			// 
			this->tagProgress->AutoSize = true;
			this->tagProgress->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tagProgress->Location = System::Drawing::Point(6, 39);
			this->tagProgress->Name = L"tagProgress";
			this->tagProgress->Size = System::Drawing::Size(62, 20);
			this->tagProgress->TabIndex = 1;
			this->tagProgress->Text = L"Progress";
			// 
			// doDownload
			// 
			this->doDownload->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doDownload->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doDownload->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doDownload->Location = System::Drawing::Point(12, 120);
			this->doDownload->Name = L"doDownload";
			this->doDownload->Size = System::Drawing::Size(98, 26);
			this->doDownload->TabIndex = 0;
			this->doDownload->Text = L"Download";
			this->doDownload->UseVisualStyleBackColor = false;
			// 
			// graphDesk
			// 
			this->graphDesk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->graphDesk->BackColor = System::Drawing::SystemColors::ControlLight;
			chartArea1->BackColor = System::Drawing::SystemColors::ControlLight;
			chartArea1->Name = L"ChartArea1";
			this->graphDesk->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::SystemColors::ControlLight;
			legend1->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"infoGraph";
			legend1->TitleFont = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->graphDesk->Legends->Add(legend1);
			this->graphDesk->Location = System::Drawing::Point(359, 41);
			this->graphDesk->Name = L"graphDesk";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"infoGraph";
			series1->Name = L"Initilize";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"infoGraph";
			series2->Name = L"Sorting";
			this->graphDesk->Series->Add(series1);
			this->graphDesk->Series->Add(series2);
			this->graphDesk->Size = System::Drawing::Size(627, 356);
			this->graphDesk->TabIndex = 3;
			this->graphDesk->Text = L"chart1";
			// 
			// showpanel
			// 
			this->showpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->showpanel->AutoSize = true;
			this->showpanel->Controls->Add(this->showDATE);
			this->showpanel->Controls->Add(this->tagDATE);
			this->showpanel->Controls->Add(this->tagNUMBER);
			this->showpanel->Controls->Add(this->selectNUMBER);
			this->showpanel->Controls->Add(this->doGraph);
			this->showpanel->Controls->Add(this->showTable);
			this->showpanel->Location = System::Drawing::Point(12, 343);
			this->showpanel->Name = L"showpanel";
			this->showpanel->Size = System::Drawing::Size(341, 98);
			this->showpanel->TabIndex = 4;
			// 
			// showDATE
			// 
			this->showDATE->AutoSize = true;
			this->showDATE->Location = System::Drawing::Point(193, 60);
			this->showDATE->Name = L"showDATE";
			this->showDATE->Size = System::Drawing::Size(42, 17);
			this->showDATE->TabIndex = 5;
			this->showDATE->Text = L"None";
			// 
			// tagDATE
			// 
			this->tagDATE->AutoSize = true;
			this->tagDATE->Location = System::Drawing::Point(124, 59);
			this->tagDATE->Name = L"tagDATE";
			this->tagDATE->Size = System::Drawing::Size(46, 17);
			this->tagDATE->TabIndex = 4;
			this->tagDATE->Text = L"Date :";
			// 
			// tagNUMBER
			// 
			this->tagNUMBER->AutoSize = true;
			this->tagNUMBER->Location = System::Drawing::Point(124, 26);
			this->tagNUMBER->Name = L"tagNUMBER";
			this->tagNUMBER->Size = System::Drawing::Size(66, 17);
			this->tagNUMBER->TabIndex = 3;
			this->tagNUMBER->Text = L"Number :";
			// 
			// selectNUMBER
			// 
			this->selectNUMBER->FormattingEnabled = true;
			this->selectNUMBER->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->selectNUMBER->Location = System::Drawing::Point(196, 23);
			this->selectNUMBER->Name = L"selectNUMBER";
			this->selectNUMBER->Size = System::Drawing::Size(128, 24);
			this->selectNUMBER->TabIndex = 2;
			this->selectNUMBER->Text = L"graph number";
			// 
			// doGraph
			// 
			this->doGraph->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->doGraph->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doGraph->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->doGraph->Location = System::Drawing::Point(12, 54);
			this->doGraph->Name = L"doGraph";
			this->doGraph->Size = System::Drawing::Size(98, 26);
			this->doGraph->TabIndex = 1;
			this->doGraph->Text = L"Graph";
			this->doGraph->UseVisualStyleBackColor = false;
			// 
			// showTable
			// 
			this->showTable->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->showTable->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showTable->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->showTable->Location = System::Drawing::Point(12, 22);
			this->showTable->Name = L"showTable";
			this->showTable->Size = System::Drawing::Size(98, 26);
			this->showTable->TabIndex = 0;
			this->showTable->Text = L"Table";
			this->showTable->UseVisualStyleBackColor = false;
			this->showTable->Click += gcnew System::EventHandler(this, &mainform::showTable_Click);
			// 
			// resultpanel
			// 
			this->resultpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->resultpanel->AutoSize = true;
			this->resultpanel->Controls->Add(this->timeSORT);
			this->resultpanel->Controls->Add(this->tagResSORT);
			this->resultpanel->Controls->Add(this->timeINIT);
			this->resultpanel->Controls->Add(this->tagResINIT);
			this->resultpanel->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultpanel->Location = System::Drawing::Point(359, 403);
			this->resultpanel->Name = L"resultpanel";
			this->resultpanel->Size = System::Drawing::Size(627, 38);
			this->resultpanel->TabIndex = 5;
			// 
			// timeSORT
			// 
			this->timeSORT->AutoSize = true;
			this->timeSORT->Location = System::Drawing::Point(397, 12);
			this->timeSORT->Name = L"timeSORT";
			this->timeSORT->Size = System::Drawing::Size(40, 20);
			this->timeSORT->TabIndex = 3;
			this->timeSORT->Text = L"none";
			// 
			// tagResSORT
			// 
			this->tagResSORT->AutoSize = true;
			this->tagResSORT->Location = System::Drawing::Point(304, 12);
			this->tagResSORT->Name = L"tagResSORT";
			this->tagResSORT->Size = System::Drawing::Size(87, 20);
			this->tagResSORT->TabIndex = 2;
			this->tagResSORT->Text = L"Result Sort :";
			// 
			// timeINIT
			// 
			this->timeINIT->AutoSize = true;
			this->timeINIT->Location = System::Drawing::Point(185, 12);
			this->timeINIT->Name = L"timeINIT";
			this->timeINIT->Size = System::Drawing::Size(40, 20);
			this->timeINIT->TabIndex = 1;
			this->timeINIT->Text = L"none";
			// 
			// tagResINIT
			// 
			this->tagResINIT->AutoSize = true;
			this->tagResINIT->Location = System::Drawing::Point(97, 12);
			this->tagResINIT->Name = L"tagResINIT";
			this->tagResINIT->Size = System::Drawing::Size(82, 20);
			this->tagResINIT->TabIndex = 0;
			this->tagResINIT->Text = L"Result Init :";
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(998, 453);
			this->Controls->Add(this->resultpanel);
			this->Controls->Add(this->showpanel);
			this->Controls->Add(this->graphDesk);
			this->Controls->Add(this->progressbox);
			this->Controls->Add(this->initbox);
			this->Controls->Add(this->menutoolbar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mainform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Алгоритм тест";
			this->menutoolbar->ResumeLayout(false);
			this->menutoolbar->PerformLayout();
			this->initbox->ResumeLayout(false);
			this->initbox->PerformLayout();
			this->progressbox->ResumeLayout(false);
			this->progressbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphDesk))->EndInit();
			this->showpanel->ResumeLayout(false);
			this->showpanel->PerformLayout();
			this->resultpanel->ResumeLayout(false);
			this->resultpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void showTable_Click(System::Object^  sender, System::EventArgs^  e) {
		tableform^tb = gcnew tableform();
		tb->ShowDialog();
	}
	private: System::Void doInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		infoform^inf = gcnew infoform();
		inf->ShowDialog();
	}
};
}
