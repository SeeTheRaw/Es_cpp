#include "AppDownloaderIcon.hpp"
#include "AppDownloaderView.hpp"

int main(){

    // Creazione di un'istanza di AppDownloader
    AppDownloader appDownloader;

    // Creazione di istanze degli Observer
    AppDownloaderIcon icon(&appDownloader);
    AppDownloaderView view(&appDownloader);

    // Aggiunta di nuove app
    App app1("App1", 50);
    App app2("App2", 30);
    App app3("App3", 20);

    appDownloader.addNewApp(app1);
    appDownloader.addUpdatableApp(app2);
    appDownloader.addUpdatableApp(app3);

    // Download delle app
    appDownloader.download();

       return 0;
}