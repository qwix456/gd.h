#ifndef __GD_H__
#define __GD_H__

#include "wrapper.h"

static auto base = (uintptr_t)(GetModuleHandleA(0)); //lnk2005
#include <cocos2d.h>
#include "PlayerNodes/HardStreak.h"
#include "LevelNodes/GJGameLevel.h"
#include "LevelNodes/OBB2D.h"
#include "LevelNodes/GameObject.h"
#include "PlayerNodes/PlayerObject.h"
#include "PlayerNodes/PlayLayer.h"

#endif