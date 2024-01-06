#ifndef APPDOWNLOADERVIEW_HPP
#define APPDOWNLOADERVIEW_HPP
#include "AppDownloader.hpp"
#include "Observer.hpp"

class AppDownloaderView : public Observer{

    public:

    AppDownloaderView(AppDownloader *a) : appDownloader(a) {
        appDownloader->AddObserver(this);
    }

    ~AppDownloaderView() {
        appDownloader->RemoveObserver(this);
    }

    virtual void update() override{
        cout << "Ecco i programmi ancora da aggiornare:" << endl;
        for (auto &app : appDownloader->getUpdatableApps()) {
            cout << app.getName() << endl;
        }
        cout << "\n";
    }

    private:
    AppDownloader *appDownloader;

};

#endif // APPDOWNLOADERVIEW_HPP