#include "main.h"

bool main::OnInit()
{
	frame* mainFrame = new frame("Dinosaurus");
	mainFrame->Show(true);
	return true;
}

wxIMPLEMENT_APP(main);
