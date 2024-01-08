#ifndef USER_HPP
#define USER_HPP
#include "Observer.hpp"

class User : public Observer{
    
    public:

    User(const string &username) : username(username) {}

    void update(const string &message) override{
        cout << "Notifica per l'utente " << username << ":    " << message << "\n";
    }
    
    private:

    string username;
};

#endif // USER_HPP