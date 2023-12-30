#ifndef MAIL_H
#define MAIL_H
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Mail{

    public:
    Mail(string t, string s, string m, bool i) : title(t), sender(s), mailText(m), isRead(i) {}
    ~Mail() {}


    void setTitle(const string &t){
        title = t;
    }

    string getTitle() const{
        return title;
    }

    void setSeder(const string &s){
        sender = s;
    }

    string getSender() const {
        return sender;
    }

    void setMailText(const string &m){
        mailText = m;
    }

    string getMailText() const{
        return mailText;
    }

    void setRead(bool &i){
        isRead = i;
    }

    bool getRead() {
        return isRead;
    }


    void displayMail() const{
        cout << "Title: " << title << endl;
        cout << "Sender: " << sender << endl;
        cout << "Mail: " << mailText << endl;
        cout << "Read: " << isRead << endl;
    }



    private:

    string title;
    string sender;
    string mailText;
    bool isRead;
};

#endif // MAIL_H