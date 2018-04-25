#include "Header.h"
#include "RegistrationForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^> ^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Bank01::RegistrationForm registration;
	Application::Run(%registration);
}
