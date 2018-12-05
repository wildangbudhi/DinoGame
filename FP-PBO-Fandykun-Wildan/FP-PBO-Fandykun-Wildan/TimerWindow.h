#pragma once 
#include <wx\wx.h> 

class Dino;

class TimerWindow : public wxWindow 
{ 
public:  
	TimerWindow(wxFrame *frame);
	~TimerWindow();
	void OnPaint(wxPaintEvent &event);  
	void OnTimer(wxTimerEvent &event); 
private:  
	wxTimer *timer;
	Dino *dino;
	DECLARE_EVENT_TABLE() 
};