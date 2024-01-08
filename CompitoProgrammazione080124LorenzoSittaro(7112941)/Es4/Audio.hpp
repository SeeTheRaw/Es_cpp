#ifndef AUDIO_HPP
#define AUDIO_HPP
#include "MultiMediaDocumet.hpp"

class Audio : public MultiMediaDocument{

    public:

    Audio(string p, int du) : path(p), durata(du) {}

    void show() override{
        cout << "\npath: " << path << "       durata: " << durata << endl;
    }

    private:

    string path;
    int durata;

};

#endif // AUDIO_HPP