#pragma once 
#include "wx/wx.h" 

class Dino {
private:  
	wxBitmap *Dino1_bitmap = nullptr;
	bool isDown = false;
	
public:  
	int x;
	int y;
	Dino();
	void Draw(wxPaintDC &dc);  
	void Move();
	void Down(bool con);
	void Jump(bool con);
	//void OnKeyDown(wxKeyEvent& event);
};