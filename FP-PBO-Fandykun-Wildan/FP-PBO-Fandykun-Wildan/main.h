#include <wx\wx.h> 

class MyApp : public wxApp 
{ 
public: 
	virtual bool OnInit(); 
};

IMPLEMENT_APP(MyApp) DECLARE_APP(MyApp)