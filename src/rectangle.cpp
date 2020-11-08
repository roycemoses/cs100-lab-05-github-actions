#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h) :
    width(w),
    height(h)
{}

void Rectangle::set_width(int w) { this->width = w; }