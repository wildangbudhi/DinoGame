#include "frame.h"

frame::frame(const wxString & title)
	: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(1000, 500))
{
}