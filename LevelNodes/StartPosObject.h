#ifndef __STARTPOSOBJECT_H__
#define __STARTPOSOBJECT_H__

#include <gd.h>

namespace gd {
    class EffectGameObject : public GameObject {};
    class StartPosObject : public EffectGameObject {
    public:
        LevelSettingsObject* m_levelSettings() {
            return from<LevelSettingsObject*>(this, 0x678);
        }
    };
}

#endif