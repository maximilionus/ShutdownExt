#include <iostream>
#include "ShExt_main.h"
#include "ShExt_FNCs.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ShutdownExt::ShExt_main main_form;
	Application::Run(%main_form);
}