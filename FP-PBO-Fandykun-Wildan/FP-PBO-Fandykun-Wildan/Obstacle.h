#pragma once
#include "wx/wx.h" 

class Obstacle
{
private:
	wxBitmap *object = nullptr;
public:
	int x, y;
	Obstacle();
	~Obstacle();
	void Draw(wxPaintDC &dc);
};

