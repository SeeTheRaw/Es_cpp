#ifndef APP_HPP
#define APP_HPP
#include <iostream>
#include <string>
using namespace std;

class App{
    public:

    App(string n, int s) : name(n), size(s) {}
    ~App() {}

    const string &getName() const {
        return name;
    }

    void setName(const string &n) {
        name = n;
    }

    int getSize() const {
        return size;
    }

    void setSize(int s) {
        size = s;
    }

    bool operator==(const App &a) const{
        return name == a.name && size == a.size;
    }



    private:
    string name;
    int size;
};



#endif // APP_HPP