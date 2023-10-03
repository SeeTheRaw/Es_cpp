
#include "GestoreListe.hpp"

int main()
{
    // Create some items
    Item item1("banana", "frutto giallo", 5, "frutta", false);
    Item item2("cioccolato", "fondente", 3, "dolci", true);

    // Create a shopping list and add items to it
    ListaCompere shoppingList("Groceries", std::map<Item *, int>());
    shoppingList.addElement(&item1, 2);
    shoppingList.addElement(&item2, 1);

    // Create a list manager and add the shopping list to it
    std::map<std::string, ListaCompere *> listManager;
    GestoreListe listManagerObj(listManager);
    listManagerObj.addList(&shoppingList);

    // Print the names of all shopping lists in the list manager
    std::cout << "Shopping Lists:\n" << std::endl;
    listManagerObj.printListNames();

    // Print items in the shopping list
    std::cout << "\nItems in the 'Groceries' list:\n\n" << std::endl;
    shoppingList.printList();

    // Print items that are not purchased yet in all shopping lists
    std::cout << "\nItems that are not purchased yet:\n\n" << std::endl;
    listManagerObj.printMissing();

    return 0;
}
