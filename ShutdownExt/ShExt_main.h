#pragma once

namespace ShutdownExt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShExt_main
	/// </summary>
	public ref class ShExt_main : public System::Windows::Forms::Form
	{
	private: bool dragging;



	private: System::Windows::Forms::ComboBox^ shext_methodSelector;

	private: System::Windows::Forms::FlowLayoutPanel^ shext_TopBorder;
	private: System::Windows::Forms::FlowLayoutPanel^ shext_bottomPanel;
	private: System::Windows::Forms::Button^ btn_minimize;







	private: Point offset;

	public:
		ShExt_main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShExt_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_run;
	private: System::Windows::Forms::Button^ btn_stop;
	private: System::Windows::Forms::TextBox^ tbox_In_Time;



	private: System::Windows::Forms::Label^ label_Time;
	private: System::Windows::Forms::Button^ btn_close;


	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShExt_main::typeid));
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->btn_stop = (gcnew System::Windows::Forms::Button());
			this->tbox_In_Time = (gcnew System::Windows::Forms::TextBox());
			this->label_Time = (gcnew System::Windows::Forms::Label());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->shext_methodSelector = (gcnew System::Windows::Forms::ComboBox());
			this->shext_TopBorder = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_minimize = (gcnew System::Windows::Forms::Button());
			this->shext_bottomPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->shext_TopBorder->SuspendLayout();
			this->shext_bottomPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_run
			// 
			this->btn_run->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_run->FlatAppearance->BorderSize = 0;
			this->btn_run->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_run->Location = System::Drawing::Point(3, 3);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(105, 23);
			this->btn_run->TabIndex = 0;
			this->btn_run->Text = L"Run";
			this->btn_run->UseVisualStyleBackColor = false;
			this->btn_run->Click += gcnew System::EventHandler(this, &ShExt_main::btn_run_Click);
			// 
			// btn_stop
			// 
			this->btn_stop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_stop->Enabled = false;
			this->btn_stop->FlatAppearance->BorderSize = 0;
			this->btn_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_stop->Location = System::Drawing::Point(114, 3);
			this->btn_stop->Name = L"btn_stop";
			this->btn_stop->Size = System::Drawing::Size(105, 23);
			this->btn_stop->TabIndex = 1;
			this->btn_stop->Text = L"Stop";
			this->btn_stop->UseVisualStyleBackColor = false;
			this->btn_stop->Click += gcnew System::EventHandler(this, &ShExt_main::btn_stop_Click);
			// 
			// tbox_In_Time
			// 
			this->tbox_In_Time->Location = System::Drawing::Point(162, 29);
			this->tbox_In_Time->Name = L"tbox_In_Time";
			this->tbox_In_Time->Size = System::Drawing::Size(118, 20);
			this->tbox_In_Time->TabIndex = 2;
			this->tbox_In_Time->Text = L"00:00:00:00";
			this->tbox_In_Time->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_Time
			// 
			this->label_Time->AutoSize = true;
			this->label_Time->ForeColor = System::Drawing::Color::White;
			this->label_Time->Location = System::Drawing::Point(9, 29);
			this->label_Time->Name = L"label_Time";
			this->label_Time->Size = System::Drawing::Size(147, 13);
			this->label_Time->TabIndex = 3;
			this->label_Time->Text = L"Time to shutdown (D/H/M/S)";
			this->label_Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_close->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(386, 3);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(20, 18);
			this->btn_close->TabIndex = 4;
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &ShExt_main::Btn_close_Click);
			// 
			// shext_methodSelector
			// 
			this->shext_methodSelector->BackColor = System::Drawing::Color::White;
			this->shext_methodSelector->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->shext_methodSelector->FormattingEnabled = true;
			this->shext_methodSelector->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Shutdown", L"Reboot", L"Hibernation" });
			this->shext_methodSelector->Location = System::Drawing::Point(162, 55);
			this->shext_methodSelector->Name = L"shext_methodSelector";
			this->shext_methodSelector->Size = System::Drawing::Size(118, 21);
			this->shext_methodSelector->TabIndex = 5;
			// 
			// shext_TopBorder
			// 
			this->shext_TopBorder->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->shext_TopBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->shext_TopBorder->Controls->Add(this->btn_close);
			this->shext_TopBorder->Controls->Add(this->btn_minimize);
			this->shext_TopBorder->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->shext_TopBorder->Location = System::Drawing::Point(0, 0);
			this->shext_TopBorder->Name = L"shext_TopBorder";
			this->shext_TopBorder->Size = System::Drawing::Size(409, 23);
			this->shext_TopBorder->TabIndex = 6;
			this->shext_TopBorder->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShExt_main::Shext_TopBorder_Paint);
			this->shext_TopBorder->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ShExt_main::Shext_TopBorder_MouseDown);
			this->shext_TopBorder->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ShExt_main::Shext_TopBorder_MouseMove);
			this->shext_TopBorder->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ShExt_main::Shext_TopBorder_MouseUp);
			// 
			// btn_minimize
			// 
			this->btn_minimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->btn_minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_minimize->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_minimize->FlatAppearance->BorderSize = 0;
			this->btn_minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minimize->Location = System::Drawing::Point(360, 3);
			this->btn_minimize->Name = L"btn_minimize";
			this->btn_minimize->Size = System::Drawing::Size(20, 18);
			this->btn_minimize->TabIndex = 5;
			this->btn_minimize->UseVisualStyleBackColor = false;
			this->btn_minimize->Click += gcnew System::EventHandler(this, &ShExt_main::Btn_minimize_Click);
			// 
			// shext_bottomPanel
			// 
			this->shext_bottomPanel->Controls->Add(this->btn_run);
			this->shext_bottomPanel->Controls->Add(this->btn_stop);
			this->shext_bottomPanel->Location = System::Drawing::Point(93, 149);
			this->shext_bottomPanel->Name = L"shext_bottomPanel";
			this->shext_bottomPanel->Size = System::Drawing::Size(227, 30);
			this->shext_bottomPanel->TabIndex = 7;
			// 
			// ShExt_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(409, 191);
			this->Controls->Add(this->shext_bottomPanel);
			this->Controls->Add(this->label_Time);
			this->Controls->Add(this->shext_TopBorder);
			this->Controls->Add(this->shext_methodSelector);
			this->Controls->Add(this->tbox_In_Time);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ShExt_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShutdownExt";
			this->shext_TopBorder->ResumeLayout(false);
			this->shext_bottomPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Shext_TopBorder_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void Shext_TopBorder_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Shext_TopBorder_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Shext_TopBorder_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false;
	}
	//Movable window by Top Border element
	private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ t_date = this->tbox_In_Time->Text;
		std::string t_date_str = msclr::interop::marshal_as<std::string>(t_date);
		int shext_date_parsed = shext_parseTime(t_date_str);
		std::string shext_seconds = std::to_string(shext_convertToSeconds(&shext_date_parsed));

		std::string shext_methodSelected = shext_selectExecMethod(this->shext_methodSelector->SelectedIndex);
		std::string shext_sysCom = "shutdown -" + shext_methodSelected + " -t " + shext_seconds;

		system(shext_sysCom.c_str());
		this->btn_stop->Enabled = true;
		this->btn_run->Enabled = false;
	}
	private: System::Void btn_stop_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown -a");
		this->btn_stop->Enabled = false;
		this->btn_run->Enabled = true;
	}
	private: System::Void Btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Btn_minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
};
}
