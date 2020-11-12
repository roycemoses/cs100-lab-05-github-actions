#include "../header/rectangle.hpp"
#include <stdexcept>

Rectangle::Rectangle() :
    width(0),
    height(0)
{}

Rectangle::Rectangle(int w, int h) :
    width(w),
    height(h)
{ 
    if (w < 0)
    { 
        std::invalid_argument ia = std::invalid_argument(std::to_string(w));
        throw ia;
    }
    if (h < 0) 
    {
        std::invalid_argument ia = std::invalid_argument(std::to_string(h));
        throw ia;
    }
}

void Rectangle::set_width(int w) 
{ 
    this->width = w;
    if (w < 0)
    { 
        std::invalid_argument ia = std::invalid_argument(std::to_string(w));
        throw ia;
    }
}
void Rectangle::set_height(int h) 
{ 
    this->height = h;
    if (h < 0) 
    {
        std::invalid_argument ia = std::invalid_argument(std::to_string(h));
        throw ia;
    }
}

int Rectangle::get_width() { return this->width; }

int Rectangle::get_height() { return this->height; }

int Rectangle::area() { return this->width * this->height; }

int Rectangle::perimeter() { return 2*this->width + 2*this->height; }