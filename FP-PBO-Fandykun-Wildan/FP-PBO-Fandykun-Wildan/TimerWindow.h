#pragma once 
#include <wx\wx.h> 

class Dino;
class Obstacle;

class TimerWindow : public wxWindow 
{ 
public:  
	TimerWindow(wxFrame *frame);
	~TimerWindow();
	void OnKeyDown(wxKeyEvent &event);
	void OnKeyUp(wxKeyEvent &event);
	void OnPaint(wxPaintEvent &event);  
	void OnTimer(wxTimerEvent &event); 
private:  
	wxTimer *timer;
	Dino *dino;
	Obstacle *kaktus;
	DECLARE_EVENT_TABLE() 
};