#ifndef SERVER_HPP
#define SERVER_HPP
#include "Channel.hpp"

class Server{
    
    public:

    Server(const string &name) : name(name) {}

    void addChannel(Channel *channel){
        channels.push_back(channel);
    }
    
    private:

    string name;
    list<Channel *> channels;
};

#endif // SERVER_HPP