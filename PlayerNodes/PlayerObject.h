#ifndef __PLAYEROBJECT_H__
#define __PLAYEROBJECT_H__

#include <gd.h>

namespace gd {
    class AnimatedSpriteDelegate {};

    class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
    public:
        auto m_isHolding() {
            return from<bool>(this, 0x775);
        }

        auto m_isSliding() {
            return from<bool>(this, 0x7fc);
        }

        auto m_playerSize() {
            return from<float>(this, 0x7e0);
        }

        auto m_playerSpeed() {
            return from<float>(this, 0x7e4);
        }

        auto m_yAccel() {
            return from<double>(this, 0x790);
        }

        auto m_xAccel() {
            return from<double>(this, 0x630);
        }

        auto m_pWave() {
            return from<cocos2d::CCMotionStreak*>(this, 0x620);
        }
        
        auto m_pWaveTrail() {
            return from<HardStreak*>(this, 0x628);
        }
    };
}

#endif