#pragma once

namespace Algorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для infoform
	/// </summary>
	public ref class infoform : public System::Windows::Forms::Form
	{
	public:
		infoform(void)
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
		~infoform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  tagOWNER;
	private: System::Windows::Forms::Label^  tagSTAGE;
	protected:

	protected:

	private: System::Windows::Forms::Label^  tagGROUP;
	private: System::Windows::Forms::Label^  tagTASK;


	private: System::Windows::Forms::Label^  OWNER;

	private: System::Windows::Forms::Label^  STAGE;
	private: System::Windows::Forms::Label^  TASK;
	private: System::Windows::Forms::Label^  GROUP;




	private: System::Windows::Forms::Label^  tagGITHUB;
	private: System::Windows::Forms::LinkLabel^  GITHUB;

	private: System::Windows::Forms::Label^  tagCOLLEGE;
	private: System::Windows::Forms::Label^  COLLEGE;







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
			this->tagOWNER = (gcnew System::Windows::Forms::Label());
			this->tagSTAGE = (gcnew System::Windows::Forms::Label());
			this->tagGROUP = (gcnew System::Windows::Forms::Label());
			this->tagTASK = (gcnew System::Windows::Forms::Label());
			this->OWNER = (gcnew System::Windows::Forms::Label());
			this->STAGE = (gcnew System::Windows::Forms::Label());
			this->TASK = (gcnew System::Windows::Forms::Label());
			this->GROUP = (gcnew System::Windows::Forms::Label());
			this->tagGITHUB = (gcnew System::Windows::Forms::Label());
			this->GITHUB = (gcnew System::Windows::Forms::LinkLabel());
			this->tagCOLLEGE = (gcnew System::Windows::Forms::Label());
			this->COLLEGE = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tagOWNER
			// 
			this->tagOWNER->AutoSize = true;
			this->tagOWNER->Location = System::Drawing::Point(12, 30);
			this->tagOWNER->Name = L"tagOWNER";
			this->tagOWNER->Size = System::Drawing::Size(83, 20);
			this->tagOWNER->TabIndex = 0;
			this->tagOWNER->Text = L"Developer :";
			// 
			// tagSTAGE
			// 
			this->tagSTAGE->AutoSize = true;
			this->tagSTAGE->Location = System::Drawing::Point(40, 98);
			this->tagSTAGE->Name = L"tagSTAGE";
			this->tagSTAGE->Size = System::Drawing::Size(50, 20);
			this->tagSTAGE->TabIndex = 1;
			this->tagSTAGE->Text = L"Stage :";
			// 
			// tagGROUP
			// 
			this->tagGROUP->AutoSize = true;
			this->tagGROUP->Location = System::Drawing::Point(37, 132);
			this->tagGROUP->Name = L"tagGROUP";
			this->tagGROUP->Size = System::Drawing::Size(59, 20);
			this->tagGROUP->TabIndex = 2;
			this->tagGROUP->Text = L"Group :";
			// 
			// tagTASK
			// 
			this->tagTASK->AutoSize = true;
			this->tagTASK->Location = System::Drawing::Point(47, 165);
			this->tagTASK->Name = L"tagTASK";
			this->tagTASK->Size = System::Drawing::Size(46, 20);
			this->tagTASK->TabIndex = 3;
			this->tagTASK->Text = L"Task :";
			// 
			// OWNER
			// 
			this->OWNER->AutoSize = true;
			this->OWNER->Location = System::Drawing::Point(99, 30);
			this->OWNER->Name = L"OWNER";
			this->OWNER->Size = System::Drawing::Size(103, 20);
			this->OWNER->TabIndex = 4;
			this->OWNER->Text = L"Фадеев И. С.";
			// 
			// STAGE
			// 
			this->STAGE->AutoSize = true;
			this->STAGE->Location = System::Drawing::Point(99, 98);
			this->STAGE->Name = L"STAGE";
			this->STAGE->Size = System::Drawing::Size(17, 20);
			this->STAGE->TabIndex = 5;
			this->STAGE->Text = L"2";
			// 
			// TASK
			// 
			this->TASK->AutoSize = true;
			this->TASK->Location = System::Drawing::Point(100, 165);
			this->TASK->Name = L"TASK";
			this->TASK->Size = System::Drawing::Size(633, 20);
			this->TASK->TabIndex = 6;
			this->TASK->Text = L"Реализовать Очередь (АТД) + Сортировка (Шелл) + время инициализации и сортировки";
			// 
			// GROUP
			// 
			this->GROUP->AutoSize = true;
			this->GROUP->Location = System::Drawing::Point(99, 132);
			this->GROUP->Name = L"GROUP";
			this->GROUP->Size = System::Drawing::Size(91, 20);
			this->GROUP->TabIndex = 7;
			this->GROUP->Text = L"ВПБВ 01-16";
			// 
			// tagGITHUB
			// 
			this->tagGITHUB->AutoSize = true;
			this->tagGITHUB->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tagGITHUB->Location = System::Drawing::Point(325, 216);
			this->tagGITHUB->Name = L"tagGITHUB";
			this->tagGITHUB->Size = System::Drawing::Size(65, 20);
			this->tagGITHUB->TabIndex = 8;
			this->tagGITHUB->Text = L"GitHub :";
			// 
			// GITHUB
			// 
			this->GITHUB->AutoSize = true;
			this->GITHUB->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GITHUB->Location = System::Drawing::Point(391, 216);
			this->GITHUB->Name = L"GITHUB";
			this->GITHUB->Size = System::Drawing::Size(309, 20);
			this->GITHUB->TabIndex = 9;
			this->GITHUB->TabStop = true;
			this->GITHUB->Tag = L"https://github.com/ImortalMashine/Algorithm";
			this->GITHUB->Text = L"https://github.com/ImortalMashine/Algorithm";
			// 
			// tagCOLLEGE
			// 
			this->tagCOLLEGE->AutoSize = true;
			this->tagCOLLEGE->Location = System::Drawing::Point(30, 65);
			this->tagCOLLEGE->Name = L"tagCOLLEGE";
			this->tagCOLLEGE->Size = System::Drawing::Size(65, 20);
			this->tagCOLLEGE->TabIndex = 10;
			this->tagCOLLEGE->Text = L"College :";
			// 
			// COLLEGE
			// 
			this->COLLEGE->AutoSize = true;
			this->COLLEGE->Location = System::Drawing::Point(100, 65);
			this->COLLEGE->Name = L"COLLEGE";
			this->COLLEGE->Size = System::Drawing::Size(43, 20);
			this->COLLEGE->TabIndex = 11;
			this->COLLEGE->Text = L"MTU";
			// 
			// infoform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 250);
			this->Controls->Add(this->COLLEGE);
			this->Controls->Add(this->tagCOLLEGE);
			this->Controls->Add(this->GITHUB);
			this->Controls->Add(this->tagGITHUB);
			this->Controls->Add(this->GROUP);
			this->Controls->Add(this->TASK);
			this->Controls->Add(this->STAGE);
			this->Controls->Add(this->OWNER);
			this->Controls->Add(this->tagTASK);
			this->Controls->Add(this->tagGROUP);
			this->Controls->Add(this->tagSTAGE);
			this->Controls->Add(this->tagOWNER);
			this->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"infoform";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &infoform::infoform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void infoform_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
