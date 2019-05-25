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
	private: System::Windows::Forms::TextBox^ tbox_timer_input;
	private: System::Windows::Forms::Label^ label_Time;


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
			this->tbox_timer_input = (gcnew System::Windows::Forms::TextBox());
			this->label_Time = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_run
			// 
			this->btn_run->Location = System::Drawing::Point(12, 127);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(260, 23);
			this->btn_run->TabIndex = 0;
			this->btn_run->Text = L"Run";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &ShExt_main::btn_run_Click);
			// 
			// btn_stop
			// 
			this->btn_stop->Enabled = false;
			this->btn_stop->Location = System::Drawing::Point(12, 156);
			this->btn_stop->Name = L"btn_stop";
			this->btn_stop->Size = System::Drawing::Size(260, 23);
			this->btn_stop->TabIndex = 1;
			this->btn_stop->Text = L"Stop";
			this->btn_stop->UseVisualStyleBackColor = true;
			this->btn_stop->Click += gcnew System::EventHandler(this, &ShExt_main::btn_stop_Click);
			// 
			// tbox_timer_input
			// 
			this->tbox_timer_input->Location = System::Drawing::Point(121, 29);
			this->tbox_timer_input->Name = L"tbox_timer_input";
			this->tbox_timer_input->Size = System::Drawing::Size(151, 20);
			this->tbox_timer_input->TabIndex = 2;
			// 
			// label_Time
			// 
			this->label_Time->AutoSize = true;
			this->label_Time->ForeColor = System::Drawing::Color::White;
			this->label_Time->Location = System::Drawing::Point(9, 32);
			this->label_Time->Name = L"label_Time";
			this->label_Time->Size = System::Drawing::Size(91, 13);
			this->label_Time->TabIndex = 3;
			this->label_Time->Text = L"Time to shutdown";
			// 
			// ShExt_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(284, 191);
			this->Controls->Add(this->label_Time);
			this->Controls->Add(this->tbox_timer_input);
			this->Controls->Add(this->btn_stop);
			this->Controls->Add(this->btn_run);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"ShExt_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShutdownExt";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown -s -t 1800");
	}
	private: System::Void btn_stop_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown -a");
	}
	private: System::Void Btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
