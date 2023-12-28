#include "TrackElement.hpp"
int main(){

ImageElement foto1{"cane", 600};
ImageElement foto2{"matrimonio", 300};
ImageElement foto3{"paesaggio", 1030};
VideoElement video1{"Laurea", 300, 20};
VideoElement video2{"safari", 350, 7};
VideoElement video3{"viaggioAmerica", 250, 500};


cout << "\n\ndurata in secondi delle foto : " << foto1.getDuration() << " secondi\n\n\n";

// Creazione di una traccia video
    TrackElement track1;

    // Aggiunta di elementi alla traccia
    track1.addElement(foto1);
    track1.addElement(foto2);
    track1.addElement(video1);
    track1.addElement(video2);

    // Riproduzione della traccia
    std::cout << "\nRiproduzione track1: \n\n";
    track1.play();

    // Ottenimento della durata totale della traccia
    std::cout << "\ndurata totale di Track1: " << track1.getDuration() << " secondi\n\n\n";

    TrackElement track2;

    track2.addElement(track1);
    track2.addElement(foto3);
    track2.addElement(video3);

    std::cout << "\nRiproduzione track2: \n\n";
    track2.play();

    std::cout << "\ndurata totale di Track2: " << track2.getDuration() << " secondi\n\n\n";

    return 0;
}
