#include "Histogram.hpp"

int main(){
    
    Histogram histogram;
    // faccio partire i colori da 0
    histogram.setColor(0, 0, 0, 0);

    // aggiungo alcuni studenti
    histogram.addStudent(Student("green"));
    histogram.addStudent(Student("blue"));
    histogram.addStudent(Student("yellow"));
    histogram.addStudent(Student("red"));
    histogram.addStudent(Student("green"));
    histogram.addStudent(Student("blue"));
    histogram.addStudent(Student("green"));
    histogram.addStudent(Student("red"));
    histogram.addStudent(Student("green"));

    cout << "\n\n";
    // mostra le statistiche
    histogram.showAll();

    cout << "\n\n"; 
    histogram.showGreen();

    return 0;
}
