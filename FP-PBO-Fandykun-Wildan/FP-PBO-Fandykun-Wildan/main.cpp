#include "main.h"
#include <cstdlib>

bool main::OnInit()
{
	frame* menu = new frame("Dinosaurus",1000,500);
	menu->Show();


	
	return true;
}

wxIMPLEMENT_APP(main);
