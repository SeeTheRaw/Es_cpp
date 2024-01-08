#ifndef NOTEPAD_HPP
#define NOTEPAD_HPP
#include "Note.hpp"
#include <map>

template <typename T>
class NotePad{

    public:

    
    void addNote(const Note<T> &n){
        notes.insert(std::make_pair(n.getTitle(), n));
    }

    void removeNote(const string &title){
        auto it = notes.find(title);
        if (it != notes.end()){
            notes.erase(it);
        }
    }

    void showNote(const string &title){
        auto it = notes.find(title);
        if (it != notes.end()){
            cout << "\nTitolo: " << it->first << "\nTesto: " << it->second.getText() << "\nAllegati: \n";
            it->second.showAllegati();
        }
    }

private:
    map<string, Note<T>> notes;
};

#endif // NOTEPAD_HPP