#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>

namespace gd {
    enum GameObjectType {
        kGameObjectTypeSolid = 0,
        kGameObjectTypeHazard = 2,
        kGameObjectTypeInverseGravityPortal = 3,
		kGameObjectTypeNormalGravityPortal = 4,
		kGameObjectTypeShipPortal = 5,
		kGameObjectTypeCubePortal = 6,
		kGameObjectTypeDecoration = 7,
		kGameObjectTypeYellowJumpPad = 8,
		kGameObjectTypePinkJumpPad = 9,
		kGameObjectTypeGravityPad = 10,
		kGameObjectTypeYellowJumpRing = 11,
		kGameObjectTypePinkJumpRing = 12,
		kGameObjectTypeGravityRing = 13,
		kGameObjectTypeInverseMirrorPortal = 14,
		kGameObjectTypeNormalMirrorPortal = 15,
		kGameObjectTypeBallPortal = 16,
		kGameObjectTypeRegularSizePortal = 17,
		kGameObjectTypeMiniSizePortal = 18,
		kGameObjectTypeUfoPortal = 19,
		kGameObjectTypeModifier = 20,
		kGameObjectTypeSecretCoin = 22,
		kGameObjectTypeDualPortal = 23,
		kGameObjectTypeSoloPortal = 24,
    };

    class GameObject : public cocos2d::CCSprite {
    public:
        OBB2D* m_pObjectOBB2D() {
            return from<OBB2D*>(this, 0x278);
        }
        int m_nObjectID() {
            return from<int>(this, 0x384);
        }
        cocos2d::CCLayer* m_glow() {
            return from<cocos2d::CCLayer*>(this, 0x280);
        }
        GameObjectType m_nObjectType() {
            return from<GameObjectType>(this, 0x31c); // thx tpdea
        }
    };
}

#endif