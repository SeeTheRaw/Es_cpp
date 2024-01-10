#ifndef NOTE_HPP
#define NOTE_HPP
#include "MultiMediaDocumet.hpp"
#include "Image.hpp"
#include "Audio.hpp"
#include "Video.hpp"



class Note{

    public:

    Note(const string &title, const string &text, list<MultiMediaDocument*> allegati) : title(title), text(text), allegati(allegati) {}
    ~Note(){}

    void addAllegato(MultiMediaDocument* a){
        allegati.push_back(a);
    }

    void showAllegati(){
        for(auto &it : allegati){
            it->show();
        }
    }

    const string &getTitle() const{
        return title;
    }

    const string &getText() const{
        return text;
    }

    private:

    string title;
    string text;
    list<MultiMediaDocument*> allegati;

};

#endif // NOTE_HPP
