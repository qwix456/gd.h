#ifndef __GJGROUNDLAYER_H__
#define __GJGROUNDLAYER_H__

#include <gd.h>

namespace gd {
    class GJGroundLayer : public cocos2d::CCLayer {
    public:
        void updateGround01Color(cocos2d::_ccColor3B color) {
                reinterpret_cast<void(__thiscall*)(GJGroundLayer*, cocos2d::_ccColor3B)>(
                    base + 0x1F7B10)(this, color);
            }

        void updateGround02Color(cocos2d::_ccColor3B color) {
            reinterpret_cast<void(__thiscall*)(GJGroundLayer*, cocos2d::_ccColor3B)>(
                base + 0x1F7AB0)(this, color);
        }
    };
}

#endif