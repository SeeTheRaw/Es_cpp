#ifndef MESSAGE_HPP
#define MESSAGE_HPP
#include <iostream>
#include <string>
#include <list>

using namespace std;

class Message{
    
    public:

    Message(const string &text, const list<string> &mentions) : text(text), menzioni(mentions) {}

    const string &getText() const{
        return text;
    }

    const list<string> &getMentions() const{
        return menzioni;
    }

    void showMentions() const{
        for(auto &it : menzioni){
            cout << it << " ";
        }
        cout << "\n";
    }
    
    private:

    string text;
    list<string> menzioni;
};

#endif // MESSAGE_HPP