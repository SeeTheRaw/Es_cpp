#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include <iostream>
using namespace std;

class Student{
    public:

    Student(string favoriteColor) : favoriteColor(favoriteColor) {}

    const string& getFavoriteColor() const {
        return favoriteColor;
    }

    void setFavoriteColor(const string &f) {
        favoriteColor = f;
    }

    bool operator==(const Student &s) const {
        return favoriteColor == s.favoriteColor;
    }

    private:
    
    string favoriteColor;
};

#endif // STUDENT_HPP