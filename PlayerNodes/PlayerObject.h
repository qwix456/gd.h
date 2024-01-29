#ifndef __PLAYEROBJECT_H__
#define __PLAYEROBJECT_H__

#include <gd.h>

namespace gd {
    class AnimatedSpriteDelegate {};

    class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
    public:
        bool m_isHolding() {
            return from<bool>(this, 0x775);
        }

        cocos2d::CCSprite* m_pSecondarySprite() {
            return from<cocos2d::CCSprite*>(this, 0x5f0);
        }

        bool m_isSliding() {
            return from<bool>(this, 0x7fc);
        }

        float m_playerSize() {
            return from<float>(this, 0x7e0);
        }

        float m_playerSpeed() {
            return from<float>(this, 0x7e4);
        }

        double m_yAccel() {
            return from<double>(this, 0x790);
        }

        double m_xAccel() {
            return from<double>(this, 0x630);
        }

        bool m_isFlying() {
            return from<bool>(this, 0x7a9);
        }

        float m_pGravity() {
            return from<float>(this, 0x934);
        }

        cocos2d::CCMotionStreak* m_pWave() {
            return from<cocos2d::CCMotionStreak*>(this, 0x620);
        }
        
        HardStreak* m_pWaveTrail() {
            return from<HardStreak*>(this, 0x628);
        }
    };
}

#endif