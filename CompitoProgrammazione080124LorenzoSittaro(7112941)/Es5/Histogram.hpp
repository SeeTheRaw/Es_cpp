#ifndef HISTOGRAM_HPP
#define HISTOGRAM_HPP
#include "Student.hpp"
#include <list>
#include <math.h>

class Histogram{

    public:
    Histogram() : green(green), blue(blue), yellow(yellow), red(red) {}
    ~Histogram() {}

    void setColor(int g, int b, int y, int r){
        green = g;
        blue = b;
        yellow = y;
        red = r;
    }

    void addStudent(const Student &s) {
        if (s.getFavoriteColor() == "green") {
            green++;
        } else if (s.getFavoriteColor() == "blue") {
            blue++;
        } else if (s.getFavoriteColor() == "yellow") {
            yellow++;
        } else if (s.getFavoriteColor() == "red") {
            red++;
        }
        students.push_back(s);
    }


    double showRelative(int colorCount) const{
        return static_cast<double>(colorCount) / students.size() * 100.0;
    }

    double showAbsolute(int colorCount) const{
        return std::abs(colorCount);
    }


    void showAll(){
        cout << "Green: \n" << "valore relativo == " << showRelative(green) <<"%" << "\n" << "valore assoluto == " << showAbsolute(green) << "\n\n";
        cout << "Blue: \n" << "valore relativo == " << showRelative(blue) <<"%" << "\n" << "valore assoluto == " << showAbsolute(blue) << "\n\n";
        cout << "Yellow: \n" << "valore relativo == " << showRelative(yellow) <<"%" << "\n" << "valore assoluto == " << showAbsolute(yellow) << "\n\n";
        cout << "Red: \n" << "valore relativo == " << showRelative(red) <<"%" << "\n" << "valore assoluto == " << showAbsolute(red) << "\n\n";
    }

    void showGreen(){
        cout << "Green: " << "valore relativo == " << showRelative(green) <<"%"<< "  valore assoluto == " << showAbsolute(green) << "\n\n";
    }

    void showBlue(){
        cout << "Blue: " << "valore relativo == " << showRelative(blue) <<"%"<< "  valore assoluto == " << showAbsolute(blue) << "\n\n";
    }

    void showYellow(){
        cout << "Yellow: " << "valore relativo == " << showRelative(yellow) <<"%"<< "  valore assoluto == " << showAbsolute(yellow) << "\n\n";
    }

    void showRed(){
        cout << "Red: " << "valore relativo == " << showRelative(red) <<"%"<< "  valore assoluto == " << showAbsolute(red) << "\n\n";
    }

    private:

    int green;
    int blue;
    int yellow;
    int red;
    list<Student> students;

};

#endif // HISTOGRAM_HPP

