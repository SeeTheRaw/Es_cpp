#ifndef MAILBOX_H
#define MAILBOX_H
#include<map>
#include "Mail.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class MailBox : public Subject{

    public:

    MailBox(std::map<int, Mail> l) : listOfMails(l) {}
    ~MailBox() {}

    void addObserver(Observer *o){
        obs.push_back(o);
    }

    void removeObserver(Observer *o){
        obs.remove(o);
    }

    void notify(){
        for(auto &itr : obs ){
            itr->update();
        }
    }

    
    void addMail(Mail &mail){
        listOfMails.insert(std::pair<int, Mail>(identificatoreUnivoco, mail));
        identificatoreUnivoco++;
    }

    void readMail(int id, bool &i){
        listOfMails[id].setRead(i);
    }

    std::map<int, Mail> getListOfMails() const{
        return listOfMails;
    }

    Mail getLastMail() const{
        return listOfMails.end()->second;
    }

private:

std::map<int, Mail> listOfMails;
int identificatoreUnivoco = 1;
std::list<Observer *> obs;
};

#endif //MAILBOX_H