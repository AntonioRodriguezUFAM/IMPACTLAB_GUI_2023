#include "IMPACTLAB_Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IMPACTLABGUI2023::IMPACTLAB_Form form;

	Application::Run(% form);

}
