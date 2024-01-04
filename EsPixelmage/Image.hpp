#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <string>
#include <vector>
#include <iostream>

struct Pixel{
    int r;
    int g;
    int b;
};


class Image{

public:

Image(int w, int h) : width(w), height(h) { buffer = new Pixel[width*height]; }


//////////////////////////////////////////////////////////////////////////////// DEEP COPY

// Copy constructor (costruttore di copia)
Image(const Image &other) : width(other.width), height(other.height){
    // Alloca un nuovo buffer e copia i pixel
    buffer = new Pixel[width * height];
    std::copy(other.buffer, other.buffer + width * height, buffer);
}

// Operatore di assegnazione (copy assignment operator)
Image &operator=(const Image &other)
{
    if (this != &other)
    { // Verifica l'autoassegnazione
        // Dealloca il buffer corrente
        delete[] buffer;

        // Copia le dimensioni
        width = other.width;
        height = other.height;

        // Alloca un nuovo buffer e copia i pixel
        buffer = new Pixel[width * height];
        std::copy(other.buffer, other.buffer + width * height, buffer);
    }
    return *this;
}

~Image() { delete[] buffer; }

////////////////////////////////////////////////////////////////////////////////////////////


void setPixel(int x, int y, Pixel p){
    if(x<0 || x>=width || y<0 || y>=height){
        throw std::out_of_range("PIXEL OUT OF RANGE");
    }

    if(p.r<0 || p.r>255 || p.g<0 || p.g>255 || p.b<0 || p.b>255){
        throw std::invalid_argument("INVALID ARGUMENT");
    }

    buffer[y*width+x] = p; 
}

Pixel getPixel(int x, int y){

    if(x<0 || x>=width || y<0 || y>=height){
        throw std::out_of_range("PIXEL OUT OF RANGE");
    }

    return buffer[y*width+x];
}


private:

Pixel* buffer;
int width;
int height;

};

#endif // IMAGE_HPP