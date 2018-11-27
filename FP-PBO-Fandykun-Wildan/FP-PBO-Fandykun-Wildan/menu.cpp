#include "menu.h"

menu::menu()
	: wxFrame(NULL, wxID_ANY, "Dinosaurus", wxDefaultPosition, wxSize(1000, 500))
{

	int h, w;
	GetClientSize(&w, &h);	
	wxPanel *panel = new wxPanel(this, -1);
	label = new wxStaticText(panel, wxID_ANY, "Welcome to Dino Game", wxPoint(0, h*0.15), wxSize(w, h*0.1), wxALIGN_CENTRE | wxST_NO_AUTORESIZE);
}