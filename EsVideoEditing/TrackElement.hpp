#ifndef TRACK_ELEMENT_H
#define TRACK_ELEMENT_H
#include "ImageElement.hpp"
#include "VideoElement.hpp"
#include <list>

class TrackElement
{
public:

    void addElement(const ImageElement &image){
        images.push_back(image);
    }

    void addElement(const VideoElement &video){
        videos.push_back(video);
    }

    void addElement(const TrackElement &track){
        tracks.push_back(track);
    }



    void play() const
    {
        for (const ImageElement &image : images){
            image.play();
        }
        
        for (const VideoElement &video : videos){
            video.play();
        }
        
        for (const TrackElement &track : tracks){
            track.play();
        }
    }



    int getDuration() const
    {
        int totalDuration = 0;

        for (const ImageElement &image : images){
            totalDuration += image.getDuration();
        }

        for (const VideoElement &video : videos){
            totalDuration += video.getDuration();
        }

        for (const TrackElement &track : tracks){
            totalDuration += track.getDuration();
        }

        return totalDuration;
    }



private:

    std::list<ImageElement> images;
    std::list<VideoElement> videos;
    std::list<TrackElement> tracks;
};

#endif //TRACK_ELEMENT_H