#include "Main.h"
#include "TimerFrame.h" 

bool MyApp::OnInit() 
{ 
	TimerFrame *frame = new TimerFrame("Timer App");  
	frame->Show();  
	return true; 
}