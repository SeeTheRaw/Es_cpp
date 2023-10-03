#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item{

    public:
        Item(string n, string d, int q, string c, bool p) : name(n), description(d), quantity(q), category(c), purchased(p) {}
        

        const string &getName() const{
            return name;
        }

        void setName(const string &n){
            Item::name = n;
        }


        const string &getDescription() const
        {
            return description;
        }

        void setDescription(const string &d)
        {
            Item::description = d;
        }

        int getQuantity()
        {
            return quantity;
        }

        void setQuantity(int q)
        {
            Item::quantity = q;
        }


        const string &getCategory() const
        {
            return category;
        }
        void setCategory(const string &c)
        {
           Item::category = c;
        }


        bool isPurchased()
        {
            return purchased;
        }

        void setPurchased(bool p)
        {
            Item::purchased = p;
        }




// funzione che stampa la lista degli attributi dell'oggetto

        void printItem() const {

            cout << "Name: " << name << "\n";
            cout << "Description: " << description << "\n";
            cout << "Quantity: " << quantity << "\n";
            cout << "Category: " << category << "\n";
            cout << "Purchased: " << purchased << "\n\n";
        }

        

    private:

    string name, description, category;
    int quantity;
    bool purchased;
};

#endif // ITEM_H