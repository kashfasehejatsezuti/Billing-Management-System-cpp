#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	//Write the name of your Project.
	Application::SetCompatibleTextRenderingDefault(false);
	CppBillingSystem::MyForm form;
	Application::Run(% form);
}

