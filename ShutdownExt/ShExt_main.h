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
			this->SuspendLayout();
			// 
			// btn_run
			// 
			resources->ApplyResources(this->btn_run, L"btn_run");
			this->btn_run->Name = L"btn_run";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &ShExt_main::Button1_Click);
			// 
			// btn_stop
			// 
			resources->ApplyResources(this->btn_stop, L"btn_stop");
			this->btn_stop->Name = L"btn_stop";
			this->btn_stop->UseVisualStyleBackColor = true;
			this->btn_stop->Click += gcnew System::EventHandler(this, &ShExt_main::Button2_Click);
			// 
			// ShExt_main
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Controls->Add(this->btn_stop);
			this->Controls->Add(this->btn_run);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"ShExt_main";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown -s -t 1800");
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown -a");
	}
	};
}
