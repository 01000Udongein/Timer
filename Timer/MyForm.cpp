#include "MyForm.h"

using namespace Timer;

[STAThreadAttribute]
int main(void) {
	Application::Run(gcnew MyForm());
	return 0;
}
