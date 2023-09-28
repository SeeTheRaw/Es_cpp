#include <iostream>
#include <string>
#include "ShoppingList.hpp"


int main() {
cout << "\n\nciao mostrami cosa hai preso al Supermercato\n\n";

Item mela {"mela", "frutto rosso", 3, "frutta", true};
Item banana {"banana", "frutto giallo lungo", 1, "frutta", true};
Item penna {"penna", "strumento per scrivere", 4, "cancelleria", true};
Item bistecca {"bisteecca", "carne di bovino", 1, "carni", false};
Item pane {"pane", "pane fresco di forno", 1, "lievitato", true};
Item quaderno {"quaderno", "blocco note su cui scrivere", 2, "cancelleria", true};

mela.printItem();



return 0;
}
