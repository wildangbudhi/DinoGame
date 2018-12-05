#include "Box.h" 
Dino::Dino() 
{ 
	wxImageHandler *PNGLoader = new wxPNGHandler;
	wxImage::AddHandler(PNGLoader);

	wxImage	image(wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinorun0000.png"), wxBITMAP_TYPE_PNG);
	Dino1_bitmap = new wxBitmap(image);

	this->x = 30;
	this->y = 300;
}

void Dino::Draw(wxPaintDC &dc)
{
	if (Dino1_bitmap != nullptr) {
		dc.DrawBitmap(*Dino1_bitmap, wxPoint(this->x, this->y), true);
	}
}
void Dino::Move() {

	static bool pos = false;
	if (isDown) {
		wxImage	image(wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinoduck0000.png"), wxBITMAP_TYPE_PNG);
		image.Rescale(70, 30);
		Dino1_bitmap = new wxBitmap(image);
	}
	else {
		wxString a = (!pos) ? wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinorun0001.png")
			: wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinorun0000.png");

		pos = !pos;
		wxImage	image(a, wxBITMAP_TYPE_PNG);
		image.Rescale(50, 50);
		Dino1_bitmap = new wxBitmap(image);
	}
}

void Dino::Down(bool con)
{
	isDown = con;
	this->y = (con) ? 325 : 300;
}

void Dino::Jump(bool con)
{
	this->y = (con)? 200 : 300;
}
