#ifndef DISKDIRECTORY_H
#define DISKDIRECTORY_H
#include "DiskFile.hpp"
#include <map>
class DiskDirectory{

    public:
        DiskDirectory(string na) : name(na) {}

    string getName() const { 
        return name;
    }

    void setName(const string &na){
        name = na;
    }


    void addFile(DiskFile &file){
        files.insert(pair<int, DiskFile>(identificatoreUnivoco, file));
        identificatoreUnivoco++;
    }

    void addDirectory(DiskDirectory &directory){
        directories.insert(pair<int,DiskDirectory>(identificatoreUnivoco, directory));
        identificatoreUnivoco++;
    }

    void removeFile(const int &id){
        if (files.find(id) != files.end()){
            files.erase(id);
        }
        else{
            cout << "file non trovato\n";
        }
    }

    void removeDirectory(const int &id){
        if (directories.find(id) != directories.end()){
            directories.erase(id);
        }
        else{
            cout << "directory non trovata\n";
        }
    }

    void list(DiskDirectory &directory)
    {
        cout << directory.getName() << ": \n\n";
        for(map<int,DiskFile>::iterator it = files.begin(); it != files.end(); it++){
            cout << it->first << " ==> " << it->second.getName() << "   >> " << it->second.getSize() << " bytes    >> " << it->second.getEdit() << "\n";
        }
        for (map<int, DiskDirectory>::iterator it = directories.begin(); it != directories.end(); it++){
            cout << it ->first << " ==> " << it->second.getName() << "\n";

        }
    }

    private:
    string name;
    map<int,DiskFile> files;
    map<int,DiskDirectory> directories;
    int identificatoreUnivoco = 1;
};

#endif //DISKDIRECTORY_H