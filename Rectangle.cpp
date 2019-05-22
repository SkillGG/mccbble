//---------------------------------------------------------------------------


#pragma hdrstop

#include "Rectangle.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Rectx::Rectangle::Rectangle(int x, int y, int w, int h){
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
}
int Rectx::Rectangle::X(){return this->x;}
int Rectx::Rectangle::Y(){return this->y;}
int Rectx::Rectangle::Width(){return this->w;}
int Rectx::Rectangle::Height(){return this->h;}
