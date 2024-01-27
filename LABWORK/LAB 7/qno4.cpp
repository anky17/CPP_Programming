/*Create a C++ program to exemplify multiple inheritance and ambiguity resolution in a multimedia player hierarchy. Define classes AudioPlayer,
VideoPlayer, and MediaPlayer. Both base classes have a shared attribute contentType. Your task is to demonstrate how to handle ambiguity using
scope resolution.
AudioPlayer Class:
➢ Base class with contentType attribute and method playAudio() prints "Playing audio content."
VideoPlayer Class:
➢ Base class with contentType attribute and method playVideo() prints "Playing video content."
MediaPlayer Class:
➢ Derived from AudioPlayer and VideoPlayer and method playMedia() prints "Playing media."
Write a program that:
a. Creates a MediaPlayer instance and assigns contentType for audio and video and demonstrates ambiguity resolution with proper method calls.*/

#include <iostream>
using namespace std;
class AudioPlayer
{
protected:
    string contentType;

public:
    AudioPlayer(string type) : contentType(type) {}
    void playAudio()
    {
        cout << "Playing audio content." << endl;
    }
};
class VideoPlayer
{
protected:
    string contentType;

public:
    VideoPlayer(string type) : contentType(type) {}
    void playVideo()
    {
        cout << "Playing video content." << endl;
    }
};
class MediaPlayer : public AudioPlayer, public VideoPlayer
{
public:
    MediaPlayer(string audio, string video) : AudioPlayer(audio), VideoPlayer(video) {}
    void playMedia()
    {
        AudioPlayer::playAudio();
        VideoPlayer::playVideo();
        cout << "Playing media." << endl;
    }
};
int main()
{
    MediaPlayer m1("audio", "video");
    cout << "Calling the base classes using Derived Class:" << endl;
    m1.playMedia();
    return 0;
};