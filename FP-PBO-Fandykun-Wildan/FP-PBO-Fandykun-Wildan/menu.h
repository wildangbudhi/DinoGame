#pragma once
#include <wx/wx.h>
#include <wx/frame.h>

class menu : public wxFrame
{
public:
	menu();

protected:
	wxStaticText* label;
};

