#include "TimerWindow.h" 
#include "Box.h"
#define TIMER_ID 2000 

BEGIN_EVENT_TABLE(TimerWindow, wxWindow)  
	EVT_PAINT(TimerWindow::OnPaint)  
	EVT_TIMER(TIMER_ID, TimerWindow::OnTimer) 
END_EVENT_TABLE()

TimerWindow::TimerWindow(wxFrame * frame)
	: wxWindow(frame, wxID_ANY)
{
	SetBackgroundColour(wxColour(*wxWHITE));

	timer = new wxTimer(this, TIMER_ID);  //memulai timer dengan interval 1000ms atau 1s.  
	timer->Start(100);

	dino = new Dino();
}

TimerWindow::~TimerWindow() 
{ 
	timer->Stop();  
	delete timer;  
	delete dino;
}


void TimerWindow::OnPaint(wxPaintEvent &event) 
{
	wxPaintDC pdc(this);  
	this->dino->Draw(pdc);
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