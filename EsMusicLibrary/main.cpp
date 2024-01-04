#include "MusicLibrary.hpp"

int main(){
    AudioTrack Song1("Get Lucky", 200, "Song1.jpg");
    AudioTrack Song2("Song2", 120, "Song2.jpg");
    AudioTrack Song3("Gagnam Style", 180, "Song3.jpg");
    AudioTrack Song4("Alphabet song", 30, "kidDrawing.jpeg");

    Song2.play();

    Playlist playlist1 ("RandomSongs");
    playlist1.addAudioTrack(Song1);
    playlist1.addAudioTrack(Song2);

    Playlist playlist2 ("KidsSongs");
    playlist2.addAudioTrack(Song3);
    playlist2.addAudioTrack(Song4);
    

    cout << "\nIn riproduzione la PLAYLIST ==> " << playlist1.getPlaylistName() << " : \n\n";
    playlist1.playPlaylist();

    cout << "\n\n";

    MusicLibrary library1 ("MyLibrary");
    library1.addPlaylist(playlist1);
    library1.addPlaylist(playlist2);

    cout << "Dalla Library: " << library1.getLibraryName() << "\n";
    library1.playPlaylist("RandomSongs");
    library1.playPlaylist("KidsSongs");


        return 0;
}