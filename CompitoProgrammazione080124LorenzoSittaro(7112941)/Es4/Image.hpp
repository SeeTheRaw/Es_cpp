#ifndef IMAGE_HPP
#define IMAGE_HPP
#include "MultiMediaDocumet.hpp"


class Image : public MultiMediaDocument{

    public:
    Image(string p, int d) : path(p), dimensione(d) {}

    void show() override{
        cout << "\npath: " << path << "       dimensione: " << dimensione << endl;
    }

    private:

    string path;
    int dimensione;

};

#endif // IMAGE_HPP