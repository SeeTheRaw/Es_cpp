#include "NotePad.hpp"

int main(){
    
    Image image("path_immagine.jpg", 1024);
    Audio audio("path_audio.mp3", 120);
    Video video("path_video.mp4", 2048, 180);

    // istanzio la lista degli allegati
    list<MultiMediaDocument *> allegati;
    allegati.push_back(&image);
    allegati.push_back(&audio);
    allegati.push_back(&video);

    // creo una nota a cui allego gli allegati
    Note myNote("Progetto", "Discussione del progetto", allegati);

    // creo un blocco note
    NotePad myNotePad;

    // aggiungo la nota al blocco note
    myNotePad.addNote(myNote);

    // visualizzo la nota
    cout << "\nEcco la nota: \n" << endl;
    myNotePad.showNote("Progetto");

    return 0;
}
