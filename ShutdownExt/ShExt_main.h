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
	private: System::Windows::Forms::TextBox^ tbox_In_Hours;
	private: System::Windows::Forms::TextBox^ tbox_In_Mins;
	private: System::Windows::Forms::TextBox^ tbox_In_Seconds;

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
	private: System::Windows::Forms::TextBox^ tbox_In_Days;


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
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->btn_stop = (gcnew System::Windows::Forms::Button());
			this->tbox_In_Days = (gcnew System::Windows::Forms::TextBox());
			this->label_Time = (gcnew System::Windows::Forms::Label());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->tbox_In_Hours = (gcnew System::Windows::Forms::TextBox());
			this->tbox_In_Mins = (gcnew System::Windows::Forms::TextBox());
			this->tbox_In_Seconds = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_run
			// 
			this->btn_run->Location = System::Drawing::Point(12, 156);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(105, 23);
			this->btn_run->TabIndex = 0;
			this->btn_run->Text = L"Run";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &ShExt_main::btn_run_Click);
			// 
			// btn_stop
			// 
			this->btn_stop->Enabled = false;
			this->btn_stop->Location = System::Drawing::Point(292, 156);
			this->btn_stop->Name = L"btn_stop";
			this->btn_stop->Size = System::Drawing::Size(105, 23);
			this->btn_stop->TabIndex = 1;
			this->btn_stop->Text = L"Stop";
			this->btn_stop->UseVisualStyleBackColor = true;
			this->btn_stop->Click += gcnew System::EventHandler(this, &ShExt_main::btn_stop_Click);
			// 
			// tbox_In_Days
			// 
			this->tbox_In_Days->Location = System::Drawing::Point(162, 29);
			this->tbox_In_Days->Name = L"tbox_In_Days";
			this->tbox_In_Days->Size = System::Drawing::Size(25, 20);
			this->tbox_In_Days->TabIndex = 2;
			// 
			// label_Time
			// 
			this->label_Time->AutoSize = true;
			this->label_Time->ForeColor = System::Drawing::Color::White;
			this->label_Time->Location = System::Drawing::Point(9, 32);
			this->label_Time->Name = L"label_Time";
			this->label_Time->Size = System::Drawing::Size(147, 13);
			this->label_Time->TabIndex = 3;
			this->label_Time->Text = L"Time to shutdown (D/H/M/S)";
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(377, 12);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(20, 20);
			this->btn_close->TabIndex = 4;
			this->btn_close->Text = L"X";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &ShExt_main::Btn_close_Click);
			// 
			// tbox_In_Hours
			// 
			this->tbox_In_Hours->Location = System::Drawing::Point(193, 29);
			this->tbox_In_Hours->Name = L"tbox_In_Hours";
			this->tbox_In_Hours->Size = System::Drawing::Size(25, 20);
			this->tbox_In_Hours->TabIndex = 2;
			// 
			// tbox_In_Mins
			// 
			this->tbox_In_Mins->Location = System::Drawing::Point(224, 29);
			this->tbox_In_Mins->Name = L"tbox_In_Mins";
			this->tbox_In_Mins->Size = System::Drawing::Size(25, 20);
			this->tbox_In_Mins->TabIndex = 2;
			// 
			// tbox_In_Seconds
			// 
			this->tbox_In_Seconds->Location = System::Drawing::Point(255, 29);
			this->tbox_In_Seconds->Name = L"tbox_In_Seconds";
			this->tbox_In_Seconds->Size = System::Drawing::Size(25, 20);
			this->tbox_In_Seconds->TabIndex = 2;
			// 
			// ShExt_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(409, 191);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->label_Time);
			this->Controls->Add(this->tbox_In_Seconds);
			this->Controls->Add(this->tbox_In_Mins);
			this->Controls->Add(this->tbox_In_Hours);
			this->Controls->Add(this->tbox_In_Days);
			this->Controls->Add(this->btn_stop);
			this->Controls->Add(this->btn_run);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"ShExt_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShutdownExt";
			this->Load += gcnew System::EventHandler(this, &ShExt_main::ShExt_main_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ShExt_main::ShExt_main_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ShExt_main::ShExt_main_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ShExt_main::ShExt_main_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShExt_main_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void ShExt_main_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void ShExt_main_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void ShExt_main_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ t_days = this->tbox_In_Days->Text;
		String^ t_hours = this->tbox_In_Hours->Text;
		String^ t_mins = this->tbox_In_Mins->Text;
		String^ t_secs = this->tbox_In_Seconds->Text;

		if (t_days == "") t_days = "0";
		if (t_hours == "") t_hours = "0";
		if (t_mins == "") t_mins = "0";
		if (t_secs == "") t_secs = "0";

		int input_time[4];
		input_time[0] = (Convert::ToInt32(t_days));
		input_time[1] = (Convert::ToInt32(t_hours));
		input_time[2] = (Convert::ToInt32(t_mins));
		input_time[3] = (Convert::ToInt32(t_secs));

		std::string shext_seconds = std::to_string(shext_convertToSeconds(input_time));
		std::string shext_sysCom = "shutdown -s -t " + shext_seconds;

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
};
}
