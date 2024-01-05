#include "FitnessApp.hpp"

int main(){
    Activity corsa("Corsa","correre per un determinato tempo", 1, 3, 3000);
    Activity nuoto("Nuoto","nuotare per un determinato tempo", 2, 3, 3000);
    corsa.printActivity();
    cout << "\n\n";

    FitnessApp fitnessApp;
    cout << "Prima di fare sport: \n";
    fitnessApp.printStatistics();
    cout << "\n";

    fitnessApp.addActivity(corsa);
    fitnessApp.addActivity(nuoto);
    cout << "Dopo aver fatto sport: \n";

    fitnessApp.printStatistics();
    cout << "\n";

    fitnessApp.printActivities();
    cout << "\n\n";

    fitnessApp.removeActivity(corsa);
    cout << "Non contando la corsa: \n";
    fitnessApp.printStatistics();

    cout << "\n\n";

 

    return 0;
}