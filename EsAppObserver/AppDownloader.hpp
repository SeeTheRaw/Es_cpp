#ifndef APPDOWNLOADER_HPP
#define APPDOWNLOADER_HPP
#include "App.hpp"
#include <list>
#include "Observer.hpp"
#include "Subject.hpp"

class AppDownloader : public Subject{

    public:

    void AddObserver(Observer *o) {
        observers.push_back(o);
    }

    void RemoveObserver(Observer *o) {
        observers.remove(o);
    }

    void Notify() {
        for (auto &itr : observers) {
            itr->update();
        }
    }

    void addNewApp(const App &a) {
        newApps.push_back(a);
        Notify();
    }

    void addUpdatableApp(const App &a) {
        updatableApps.push_back(a);
        Notify();
    }

    void removeNewApp(const App &a) {
        newApps.remove(a);
        Notify();
    }

    void removeUpdatableApp(const App &a) {
        updatableApps.remove(a);
        Notify();
    }

    const list<App> &getNewApps() const {
        return newApps;
    }

    const list<App> &getUpdatableApps() const {
        return updatableApps;
    }

    void download() {

        for (auto &itr : newApps) {
            cout << "Downloading " << itr.getName() << "...  size: " << itr.getSize() << " mb" << endl;
        }

        newApps.clear();

        for (auto &itr : updatableApps) {
            cout << "Updating " << itr.getName() << "...  size: " << itr.getSize() << " mb" << endl;
        }

        updatableApps.clear();
        Notify();
    }

    private:
    list<App> updatableApps;
    list<App> newApps;
    list<Observer*> observers;


};


#endif // APPDOWNLOADER_HPP