#include "Box.h" 
Box::Box() 
{ 
	wxImageHandler *PNGLoader = new wxPNGHandler;
	wxImage::AddHandler(PNGLoader);

	wxImage	image(wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinorun0000.png"), wxBITMAP_TYPE_PNG);
	Dino1_bitmap = new wxBitmap(image);
}

void Box::Draw(wxPaintDC &dc) 
{ 
	if (Dino1_bitmap != nullptr) {
		dc.DrawBitmap(*Dino1_bitmap, wxPoint(30, 300), true);
	}
}

void Box::Move() {

	static bool pos = false;
	wxString a = (!pos)? wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinorun0001.png")
			: wxT("D:\\Files\\Informatika\\Pemrograman Berbasis Objek\\Code\\Project\\FP-PBO\\wx-Project\\dinorun0000.png");
		
	pos = !pos;
	wxImage	image(a, wxBITMAP_TYPE_PNG);
	image.Rescale(50, 50);
	Dino1_bitmap = new wxBitmap(image);
	
}
