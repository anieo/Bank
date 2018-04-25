#include "Header.h"
#include "RegistrationForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Bank01;
[STAThreadAttribute]
void main(array<String^> ^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RegistrationForm registration;
	Application::Run(%registration);
}
