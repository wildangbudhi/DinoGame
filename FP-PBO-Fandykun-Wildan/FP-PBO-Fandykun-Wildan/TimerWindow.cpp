#include "TimerWindow.h" 
#include "Box.h"
#include "Obstacle.h"
#define TIMER_ID 2000 

BEGIN_EVENT_TABLE(TimerWindow, wxWindow)
	EVT_KEY_UP(TimerWindow::OnKeyUp)
	EVT_KEY_DOWN(TimerWindow::OnKeyDown)
	EVT_PAINT(TimerWindow::OnPaint)  
	EVT_TIMER(TIMER_ID, TimerWindow::OnTimer) 
END_EVENT_TABLE()

TimerWindow::TimerWindow(wxFrame * frame)
	: wxWindow(frame, wxID_ANY)
{
	SetBackgroundColour(wxColour(*wxWHITE));

	timer = new wxTimer(this, TIMER_ID);  //memulai timer dengan interval 1000ms atau 1s.  
	timer->Start(50);

	dino = new Dino();
	kaktus = new Obstacle();
}

TimerWindow::~TimerWindow() 
{ 
	timer->Stop();  
	delete timer;  
	delete dino;
}

void TimerWindow::OnKeyDown(wxKeyEvent & event)
{
	wxMessageOutputDebug().Printf("Down : %d", event.GetKeyCode());

	if (event.GetKeyCode() == WXK_DOWN)
		dino->Down(true);
	if (event.GetKeyCode() == 32)
		dino->Jump(true);
}

void TimerWindow::OnKeyUp(wxKeyEvent & event)
{
	dino->Down(false);
	dino->Jump(false);
}


void TimerWindow::OnPaint(wxPaintEvent &event) 
{
	wxPaintDC pdc(this);  
	this->dino->Draw(pdc);
	this->kaktus->Draw(pdc);
}

void TimerWindow::OnTimer(wxTimerEvent &event) 
{ 
	static int counter = 0;  
	wxMessageOutputDebug().Printf("wxTimer event %d.", counter++); 

	if (dino != nullptr) {
		dino->Move();
		Refresh(); 
	}
}