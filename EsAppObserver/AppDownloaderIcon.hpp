#ifndef APPDOWNLOADERICON_HPP
#define APPDOWNLOADERICON_HPP
#include "AppDownloader.hpp"
#include "Observer.hpp"

class AppDownloaderIcon : public Observer{

    public:

    AppDownloaderIcon(AppDownloader *a) : appDownloader(a) {
        appDownloader->AddObserver(this);
    }

    ~AppDownloaderIcon() {
        appDownloader->RemoveObserver(this);
    }

    virtual void update() override{
        cout << "\nEcco i programmi ancora da scaricare:" << endl;
        for (auto &app : appDownloader->getNewApps()) {
            cout << app.getName() << endl;
        }
    }

    private:
    AppDownloader *appDownloader;

};

#endif // APPDOWNLOADERICON_HPP