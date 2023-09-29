#include <iostream>
#include <string>
#include "ListManager.hpp"


int main() {
cout << "\n\nciao mostrami cosa hai preso al Supermercato!\n\n";

Item mela {"mela", "frutto rosso", 3, "frutta", true};
Item banana {"banana", "frutto giallo lungo", 1, "frutta", true};
Item penna {"penna", "strumento per scrivere", 4, "cancelleria", true};
Item bistecca {"bistecca", "carne di bovino", 1, "carni", false};
Item pane {"pane", "pane fresco di forno", 1, "lievitato", true};
Item quaderno {"quaderno", "blocco note su cui scrivere", 2, "cancelleria", true};
Item latte {"latte", "latte vaccino", 1, "latticini", false};
Item uova {"uova", "uova di gallina", 6, "latticini", false};
Item ciambella {"ciambella", "dolce a forma di ciambella", 1, "dolci", false};
Item patatine {"patatine", "patatine fritte", 1, "snack", false};

ShoppingList lista1 {"lista1", std::list<Item *> {&mela, &banana, &penna, &bistecca, &pane, &quaderno}};

lista1.printList();

cout << "\n\nQuale di questi vorresti aggiungere alla lista?\n latte  uova  ciambella  patatine\n immetti l'iniziale della parola scelta\n\n";
string scelta;
cin >> scelta;

switch (scelta[0]) {
    case 'l':
        lista1.addElement(&latte);
        break;
    case 'u':
        lista1.addElement(&uova);
        break;
    case 'c':
        lista1.addElement(&ciambella);
        break;
    case 'p':
        lista1.addElement(&patatine);
        break;
    default:
        cout << "scelta non valida";
        break;
}

cout << "\n\nEcco la lista aggiornata:\n\n";
lista1.printList();

cout << "\n Ecco il mio primo archivio delle liste:\n\n";
ListManager archivio01 {std::list<ShoppingList *> {&lista1}};
archivio01.printListNames();

cout << "\n\nEcco la lista di elementi non ancora acquistati:\n\n";
archivio01.printMissing();



return 0;
}
