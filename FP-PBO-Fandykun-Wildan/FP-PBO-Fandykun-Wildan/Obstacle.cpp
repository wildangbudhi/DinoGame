#include "Obstacle.h"

Obstacle::Obstacle()
{
	wxImageHandler *PNGLoader = new wxPNGHandler;
	wxImage::AddHandler(PNGLoader);

	wxImage	image(wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\cactusSmall0000.png"), wxBITMAP_TYPE_PNG);
	object = new wxBitmap(image);

	this->x = 60;
	this->y = 300;

}


Obstacle::~Obstacle()
{
}

void Obstacle::Draw(wxPaintDC & dc)
{
	if (object != nullptr) {
		dc.DrawBitmap(*object, wxPoint(this->x, this->y), true);
	}
}
