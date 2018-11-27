#include "main.h"
#include <cstdlib>

bool main::OnInit()
{
	menu* mainmenu = new menu();
	mainmenu->Show();


	
	return true;
}

wxIMPLEMENT_APP(main);
