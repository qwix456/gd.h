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
		kGameObjectTypeSlope = 25,
		kGameObjectTypeWavePortal = 26,
		kGameObjectTypeRobotPortal = 27,
		kGameObjectTypeTeleportPortal = 28,
		kGameObjectTypeGreenRing = 29,
		kGameObjectTypeCollectible = 30,
		kGameObjectTypeUserCoin = 31,
		kGameObjectTypeDropRing = 32,
		kGameObjectTypeSpiderPortal = 33,
		kGameObjectTypeRedJumpPad = 34,
		kGameObjectTypeRedJumpRing = 35,
		kGameObjectTypeCustomRing = 36,
		kGameObjectTypeDashRing = 37,
		kGameObjectTypeGravityDashRing = 38,
		kGameObjectTypeCollisionObject = 39,
		kGameObjectTypeSpecial = 40,
    };

    class GameObject : public cocos2d::CCSprite {
    public:
        OBB2D* m_pObjectOBB2D() {
            return from<OBB2D*>(this, 0x278);
        }
        int m_nObjectID() {
            return from<int>(this, 0x384);
        }
        GameObjectType m_nObjectType() {
            return from<GameObjectType>(this, 0x31c); // thx tpdea
        }

		bool m_active() {
			return from<bool>(this, 0x5e4);
		}

		float m_fScale() {
			return from<float>(this, 0x308);
		}

		float m_objectRadius() {
			return from<float>(this, 0x3fc);
		}

        GameObjectType getType() {
            return reinterpret_cast<GameObjectType(__thiscall*)(
                GameObject*
            )>(base + 0xEB0C0)(this);
        }

        cocos2d::CCRect const& getObjectRect()
 		{
 			 return *reinterpret_cast<cocos2d::CCRect*(__thiscall*)(
 				GameObject*
 			)>(base + 0x13A570)(this);
 		}

		float getObjectRadius() {
			float radius = m_objectRadius();
			if (m_fScale() != 1.0f) {
				radius *= m_fScale();
			}
			return radius;
		}

		void updateOrientedBox() {

			return reinterpret_cast<void(__thiscall*)(GameObject*)>(
				base + 0x141E60
			)(this);
		}

		cocos2d::CCRect getObjectRect(float a, float b)
			{
				cocos2d::CCRect r = getObjectRect();
				r.origin.x += r.size.width / 2;
				r.origin.y += r.size.height / 2;
				r.size.width *= a;
				r.size.height *= b;
				r.origin.x -= r.size.width / 2;
				r.origin.y -= r.size.height / 2;
				return r;
			}
    };
}

#endif