#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
//This attribute ensures that the main function runs on a single - threaded apartment(STA) thread, which is required for Windows Forms applications.
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	// This line sets a flag to use the default text rendering engine for the application, which can improve text rendering quality.
	Application::SetCompatibleTextRenderingDefault(false);
	CppCalculatorApp::MyForm form;
	// This line starts the Windows Forms application by running the message loop for the form instance.The% operator is used to handle the lifetime of the form object within the Run method.
	Application::Run(% form);
}

