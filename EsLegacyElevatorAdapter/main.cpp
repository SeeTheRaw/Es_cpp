#include "LegacyElevatorAdapter2.hpp"


int main(){
    
    LegacyElevator elevator0;

    cout <<"\nUtilizzo il LegacyElevator:\n" << endl;

    elevator0.move_by(5); // il legacy elevator non può muoversi direttamente ad un piano in quanto non possiede un metodo move_to
    cout << "\nCi stiamo muovendo di " << 5 << " piani" << endl;
    elevator0.open_doors();
    elevator0.close_doors();
    cout <<"\n\n";

    LegacyElevatorAdapter elevator1;

    cout <<"\nUtilizzo il LegacyElevator tramite l'adapter:\n" << endl;

    // Utilizzo dell'oggetto Elevator tramite l'adapter
    elevator1.move_to(5);
    cout << "\nCi stiamo muovendo al piano " << 5 << endl;
    elevator1.open_doors();
    elevator1.close_doors();
    cout <<"\n";

    return 0;
}
