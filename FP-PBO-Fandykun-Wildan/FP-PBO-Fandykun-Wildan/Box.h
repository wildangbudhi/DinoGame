#pragma once 
#include <wx\dcclient.h> 

class Dino {
private:  
	wxBitmap *Dino1_bitmap = nullptr;
public:  
	Dino();
	void Draw(wxPaintDC &dc);  
	void Move();
};