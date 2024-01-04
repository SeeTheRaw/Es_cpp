#ifndef MUSICLIBRARY_HPP
#define MUSICLIBRARY_HPP
#include "Playlist.hpp"

class MusicLibrary{

    public:
    MusicLibrary(string n) : libraryName(n) {}
    ~MusicLibrary() {}

    string getLibraryName() const {
        return libraryName;
    }

    void setLibraryName(const string &n) {
        libraryName = n;
    }

    void addPlaylist(Playlist &playlist){
        playlists.push_back(playlist);
    }

    void removePlaylist(string name){
        for(Playlist &it : playlists){
            if(it.getPlaylistName() == name){
                playlists.remove(it);
            }
        }
    }

    void playPlaylist(string name){
        for(Playlist &it : playlists){
            if(it.getPlaylistName() == name){
                it.playPlaylist();
            }
        }
    }

    Playlist &findPlaylist(string name){
        for(Playlist &it : playlists){
            if(it.getPlaylistName() == name){
                return it;
            }
        }
    }

    private:
    string libraryName;
    list<Playlist> playlists;

};

#endif // MUSICLIBRARY_HPP