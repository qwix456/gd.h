#ifndef __GAMEMANAGER_H__
#define __GAMEMANAGER_H__

#include <gd.h>

namespace gd {
    class GManager {};
    class GameManager : public GManager {
    public:
        PlayLayer* m_playLayer() {
            return from<PlayLayer*>(this, 0x198);
        }

        static GameManager* sharedState() {
            return reinterpret_cast<GameManager* (__stdcall*)()>(
                base + 0x121540
            )();
        }
    };
}

#endif