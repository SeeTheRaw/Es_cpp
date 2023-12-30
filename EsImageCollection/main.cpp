#include "Collection.hpp"

int main(){

    Photo foto1(100, "Roma", true, {"Marco", "Luca"});
    Photo foto2(200, "Firenze", false, {"Marco", "Luca", "Gianni"});
    Photo foto3(300, "Firenze", true, {"Marco", "Luca", "Gianni", "Paolo"});
    Photo foto4(400, "Napoli", false, {"Marco", "Luca", "Gianni", "Paolo", "Giovanni"});

    


    foto1.printPhoto(foto1, 1);
  
    Collection collezione01;
    collezione01.addPhoto(foto1);
    collezione01.addPhoto(foto2);
    collezione01.addPhoto(foto3);

    cout << "collezione01: " << "\n" << endl;
    collezione01.printCollection();
    cout << "\n\n" << endl;

    cout << "collezione01 con foto preferite: " << "\n" << endl;
    collezione01.printFavorite();

    cout << "\n\n" << endl;

    cout << "collezione01 con foto scattate a Firenze: " << "\n" << endl;
    collezione01.printPlace("Firenze");

    cout << "\n\n" << endl;

    cout << "collezione01 con foto con Gianni: " << "\n" << endl;
    collezione01.printPerson("Gianni");

    cout << "\n\n" << endl;

    

    return 0;
}