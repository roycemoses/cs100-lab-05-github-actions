#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h) :
    width(w),
    height(h)
{}

void Rectangle::set_width(int w) { this->width = w; }
void Rectangle::set_height(int h) { this->height = h; }
int Rectangle::area() { return this->width * this->height; }