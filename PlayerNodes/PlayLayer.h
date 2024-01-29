#ifndef __PLAYLAYER_H__
#define __PLAYLAYER_H__

#include <gd.h>

namespace gd {
    class PlayLayer : public cocos2d::CCLayer {
    public:
        PlayerObject* m_player1() {
            return from<PlayerObject*>(this, 0x878);
        }
        PlayerObject* m_player2() {
            return from<PlayerObject*>(this, 0x87c);
        }
        double m_time() {
            return from<double>(this, 0x2ef0);
        }
        GJGameLevel* m_level() {
            return from<GJGameLevel*>(this, 0x5e0);
        }
        cocos2d::CCLayer* m_objectLayer() {
            return from<cocos2d::CCLayer*>(this, 0x9b8); // also GJGroundLayer
        }
        cocos2d::CCLayer* m_pGroundLayer() {
            return from<cocos2d::CCLayer*>(this, 0x9cc);
        }
        cocos2d::CCSprite* m_pBackgroundSprite() {
            return from<cocos2d::CCSprite*>(this, 0x9c4);
        }
        bool m_bTwoPlayerMode() {
            return from<bool>(this, 0x36e);
        }
        bool m_isPracticeMode() {
            return from<bool>(this, 0x2a7c);
        }
        bool m_isAlive() {
            return from<bool>(this, 0x2da0);
        }
        bool m_isDead() {
            return from<bool>(this, 0x2ac0);
        }
        bool m_hasCompletedLevel() {
            return from<bool>(this, 0x2C28);
        }
        int m_nTypeTrigger() {
            return from<int>(this, 0x384); // tpdea again
        }
    };
}

#endif