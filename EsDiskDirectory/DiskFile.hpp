#ifndef DISKFILE_H
#define DISKFILE_H
#include <iostream>
#include <string>
using namespace std;

class DiskFile{

    public:

    DiskFile(string n, int s, bool e) : name(n), size(s), editable(e) {}
    ~DiskFile() {}

    string getName() const {
        return name;
    }

    void setName(const string &n){
        name = n;
    }


    int getSize() const {
        return size;
    }

    void setSize(int s){
        size = s;
    }


    bool getEdit() const {
        return editable;
    }

    void setEdit(bool e)
    {
        editable = e;
    }


    void print(){
        cout << "\nnome file ==> " << name << "\ndimensione ==> " << size << " bytes\nmodificabile: " << editable << "\n\n";
    }

    private:

    string name;
    int size;
    bool editable;
};

#endif // DISKFILE_H
