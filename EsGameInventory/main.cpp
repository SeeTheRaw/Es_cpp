#include "Inventory.hpp"

int main()
{
    try
    {
        // Creazione di un inventario di Robot con dimensione massima 3
        Inventory<Robot> robotInventory(3);

        // Aggiunta di Robot all'inventario
        robotInventory.addItem(Robot());
        robotInventory.addItem(Robot());
        robotInventory.insertItem(Robot(), 6); // Posizione 6 non esiste (dovrebbe lanciare un'eccezione)
        


        // Tentativo di aggiungere un Robot oltre la dimensione massima (dovrebbe lanciare un'eccezione)
        // robotInventory.addItem(Robot()); // Scommenta per testare l'eccezione

        // Stampa degli elementi nell'inventario
        std::cout << "Elementi nell'inventario: " << std::endl;
        robotInventory.getItem(0).display();
        robotInventory.getItem(1).display();
        robotInventory.getItem(2).display();

        // Rimozione di un Robot dall'inventario
        robotInventory.removeItem(1);

        // Stampa degli elementi dopo la rimozione
        std::cout << "Elementi dopo la rimozione: " << std::endl;
        robotInventory.getItem(0).display();
        robotInventory.getItem(1).display(); // Posizione 1 non esiste più dopo la rimozione (dovrebbe lanciare un'eccezione)
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Errore: " << e.what() << std::endl;
    }

    return 0;
}