#ifndef VIDEO_HPP
#define VIDEO_HPP
#include "MultiMediaDocumet.hpp"

class Video : public MultiMediaDocument{
    
    public:

    Video(string p, int d, int du) : path(p), dimensione(d), durata(du) {}
    
    void show() override{
        cout << "\npath: " << path << "       dimensione: " << dimensione << "       durata: " << durata << endl;
    }
    
    private:

    string path;
    int dimensione;
    int durata;
    
};

#endif // VIDEO_HPP
