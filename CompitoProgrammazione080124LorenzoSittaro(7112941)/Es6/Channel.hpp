#ifndef CHANNEL_HPP
#define CHANNEL_HPP
#include "Subject.hpp"
#include "Observer.hpp"
#include "Message.hpp"

class Channel : public Subject{
    
    public:

    Channel(const string &name) : name(name) {}

    void addObserver(Observer *observer) override{
        observers.push_back(observer);
    }

    void removeObserver(Observer *observer) override{
        observers.remove(observer);
    }

    void notifyObservers(const string &message) override{
        for (Observer *observer : observers){
            observer->update(message);
        }
    }


    void addMessage(const Message &message){
        messages.push_back(message);
        //Notifica di un nuovo messaggio da parte di un utente del canale
        notifyObservers("Nuovo Messaggio in " + name + "!!!");
    }

private:
    string name;
    list<Observer *> observers;
    list<Message> messages;
};

#endif // CHANNEL_HPP
