#ifndef AUDIOTRACK_HPP
#define AUDIOTRACK_HPP
#include <iostream>
#include <string>
using namespace std;


class AudioTrack{
    public:
    AudioTrack(string t, int d, string i) : title(t), audioDuration(d), audioImageFile(i) {}
    ~AudioTrack() {}

    string getTitle() const {
        return title;
    }

    void setTitle(const string &t) {
        title = t;
    }

    int getAudioDuration() const {
        return audioDuration;
    }

    void setAudioDuration(const int &d) {
        audioDuration = d;
    }

    string getAudioImageFile() const {
        return audioImageFile;
    }

    void setAudioImageFile(const string &i) {
        audioImageFile = i;
    }


    void play() {
        cout << "Riproduci audio track: " << title << "  per " << audioDuration << " secondi" << endl;
    }

    bool operator==(const AudioTrack &other) const{
        return title == other.getTitle();
    }

    private:
    string title;
    int audioDuration;
    string audioImageFile;
    
};

#endif // AUDIOTRACK_HPP