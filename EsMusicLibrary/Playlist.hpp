#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include "AudioTrack.hpp"
#include <map>
#include <list>

class Playlist{
    public:
    Playlist(string n) : playlistName(n) {}
    ~Playlist() {}

    string getPlaylistName() const {
        return playlistName;
    }

    void setPlaylistName(const string &n) {
        playlistName = n;
    }

    void addAudioTrack(AudioTrack &track){
        listOfAudioTracks.push_back(track);

    }

    void removeAudioTrack(string title){
        for(AudioTrack &it : listOfAudioTracks){
            if(it.getTitle() == title){
                listOfAudioTracks.remove(it);
            }
            }
        }
    

    void playAudioTrack(string title){
        for(AudioTrack &it : listOfAudioTracks){
            if (it.getTitle() == title)
            {
                it.play();
            }
        }

    }

    void playPlaylist(){
        for (AudioTrack &it : listOfAudioTracks){
            it.play();
        }
    }

    bool operator==(const Playlist &other) const{
        return playlistName == other.getPlaylistName();
    }

    private:
    string playlistName;
    int identificatoreUnivoco = 1;
    list<AudioTrack> listOfAudioTracks;
};

#endif // PLAYLIST_HPP