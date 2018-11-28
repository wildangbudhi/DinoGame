#pragma once
#include <wx/wx.h>
#include <wx/frame.h>
#include <wx/animate.h>

class menu : public wxFrame
{
public:
	menu();

protected:
	wxStaticText* label;
	wxAnimationCtrl* m_animationCtrl;
};

