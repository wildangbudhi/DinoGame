#pragma once
#include <wx/wx.h>
#include <wx/frame.h>
#include <wx/animate.h>

class menu : public wxFrame
{
public:
	menu();
	void run();
	void OnKeyDown(wxKeyEvent& event);

private:
	int h, w;

protected:
	wxStaticText* label;
	wxStaticBitmap *img;
};

