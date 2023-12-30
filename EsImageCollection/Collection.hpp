#ifndef COLLECTION_H
#define COLLECTION_H
#include "Photo.hpp"

class Collection{

public:

    void addPhoto(const Photo &foto){
        photoCollection.insert(std::pair<int, Photo>(identificatoreUnivoco, foto));
        identificatoreUnivoco++;
    }

    void removePhoto(const int &id){
        photoCollection.erase(id);
    }

    void printCollection(){
        for (std::map<int, Photo>::iterator it = photoCollection.begin(); it != photoCollection.end(); ++it){
            cout << it->first << " => " << it->second.getResolution() << "  " << it->second.getPlace() << "  " << it->second.getStar() << "  " << it->second.getKnownPeople() << '\n';
        }
    }

    void makeFavorite(Photo &foto, bool favorite){
        foto.setStar(favorite);
    }




    void printFavorite(){
        for (std::map<int, Photo>::iterator it = photoCollection.begin(); it != photoCollection.end(); ++it){
            if (it->second.getStar() == true){
                cout << it->first << " => " << it->second.getResolution() << "  " << it->second.getPlace() << "  " << it->second.getStar() << "  " << it->second.getKnownPeople() << '\n';
            }
        }
    }

    void printPlace(const string &place){
        for (std::map<int, Photo>::iterator it = photoCollection.begin(); it != photoCollection.end(); ++it){
            if (it->second.getPlace() == place){
                cout << it->first << " => " << it->second.getResolution() << "  " << it->second.getPlace() << "  " << it->second.getStar() << "  " << it->second.getKnownPeople() << '\n';
            }
        }
    }

    void printPerson(const string &person){
        for (std::map<int, Photo>::iterator it = photoCollection.begin(); it != photoCollection.end(); ++it){
            if (it->second.getKnownPeople().find(person) != std::string::npos){
                cout << it->first << " => " << it->second.getResolution() << "  " << it->second.getPlace() << "  " << it->second.getStar() << "  " << it->second.getKnownPeople() << '\n';
            }
        }
    }

private:

    int identificatoreUnivoco = 1;
    std::map<int, Photo> photoCollection;
};

#endif // COLLECTION_H