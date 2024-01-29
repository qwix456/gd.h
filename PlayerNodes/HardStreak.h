#ifndef __HARDSTREAK_H__
#define __HARDSTREAK_H__

#include <gd.h>

namespace gd {
    class HardStreak : public cocos2d::CCDrawNode {
    public:
        cocos2d::CCArray* m_pointsArr() {
            return from<cocos2d::CCArray*>(this, 0x158);
        }

        cocos2d::CCPoint m_currentPoint() {
            return from<cocos2d::CCPoint>(this, 0x15c);
        }

        float m_waveSize() {
            return from<float>(this, 0x164);
        }

        bool m_showTrail() { // what robtop
            return from<bool>(this, 0x16e);
        }
    };
}

#endif