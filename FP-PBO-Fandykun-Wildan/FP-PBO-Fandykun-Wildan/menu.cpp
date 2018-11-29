#include "menu.h"

menu::menu()
	: wxFrame(NULL, wxID_ANY, "Dinosaurus", wxDefaultPosition, wxSize(1000, 500))
{

	GetClientSize(&w, &h);	
	wxPanel *panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
	panel->Bind(wxEVT_CHAR_HOOK, &menu::OnKeyDown, this);
	label = new wxStaticText(panel, wxID_ANY, "Welcome to Dino Game", wxPoint(0, h*0.15), wxSize(w, h*0.1), wxALIGN_CENTRE | wxST_NO_AUTORESIZE);
	wxImage::AddHandler(new wxPNGHandler);
	img = new wxStaticBitmap(panel, wxID_ANY, wxBitmap("dinorun0000.png", wxBITMAP_TYPE_PNG), wxPoint(0, h*0.6), wxSize(100, 100));

	//for (int i = 0; i < 100; i++) {
		
		/*Sleep(100);
		img->SetBitmap(wxBitmap("dinorun0000.png", wxBITMAP_TYPE_PNG));
	}*/
		
}

void menu::OnKeyDown(wxKeyEvent & event)
{
	img->SetBitmap(wxBitmap("dinorun0001.png", wxBITMAP_TYPE_PNG));
}
