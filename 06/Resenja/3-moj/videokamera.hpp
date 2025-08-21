#ifndef VIDEOKAMERA_DEF
#define VIDEOKAMERA_DEF

#include "kamera.hpp"

class VideoKamera : public Kamera{
    protected:
    static int videoCount;
    public:
    VideoKamera() : Kamera() {}
    VideoKamera(int megaPikseli, int freeSpace) : Kamera(megaPikseli, freeSpace){}
    int getCount() { return videoCount; }
    bool snimi(int duzinaVidea) {
        if (freeSpace < duzinaVidea * megaPikseli)
            return false;
        freeSpace -= duzinaVidea * megaPikseli;
        videoCount++;
        return true;
    }
};

#endif // !VIDEOKAMERA_DEF
