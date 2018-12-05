#pragma once 
#include <wx\dcclient.h> 

class Box {
private:  
	wxBitmap *Dino1_bitmap = nullptr;
public:  
	Box();
	void Draw(wxPaintDC &dc);  
	void Move();
};