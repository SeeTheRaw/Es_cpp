#include "Server.hpp"
#include "User.hpp"

int main(){
    // creo un server, un canale e un utente
    Server server("GameDevServer");
    Channel channel("General");
    User user("Bob");

    
    server.addChannel(&channel);
    // iscrivo l'utente al canale
    channel.addObserver(&user);

    list<string> mentions = {"Mark", "Dave"};
    // aggiungo un messaggio al canale
    Message message("Hello, everyone!", mentions);
    cout << "\n";
    channel.addMessage(message);
    cout << "\n";
    
    cout << "Menzioni: " ;
    message.showMentions();
    

    return 0;
}
