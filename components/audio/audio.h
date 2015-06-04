#ifndef AUDIO_H
#define AUDIO_H

#include <string>

#include <stdint.h>

namespace Audio
{
    void init(size_t channelCount);
    void quit();

    typedef void Music;
    typedef void Sound;

    Music* loadMusic(const std::string& path);
    void freeMusic(Music* mus);
    void playMusic(Music* mus);

    Sound* loadSound(const std::string& path);
    void freeSound(Sound* sound);
    int32_t playSound(Sound* sound);

    bool channelPlaying(int32_t channel);
}

#endif
