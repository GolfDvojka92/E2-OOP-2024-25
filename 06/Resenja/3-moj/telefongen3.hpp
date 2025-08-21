#ifndef TELEFON3_DEF
#define TELEFON3_DEF

#include "telefongen2.hpp"
#include "videokamera.hpp"

class TelefonGen3 : public TelefonGen2{
    protected:
    VideoKamera vk;
    public:
    TelefonGen3() : TelefonGen2(), vk() {}
    TelefonGen3(const DinString& broj, const Kamera& k, const VideoKamera& vk) : TelefonGen2(broj, k), vk(vk) {}
    bool snimiVideo(int sec) { return vk.snimi(sec); }
};

#endif // !TELEFON3_DEF
