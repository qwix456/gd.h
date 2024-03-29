#ifndef __GD_H__
#define __GD_H__

#include "wrapper.h"

static auto base = (uintptr_t)(GetModuleHandleA(0)); //lnk2005
static auto cocos_base = (uintptr_t)(GetModuleHandleA("libcocos2d.dll"));

#include <cocos2d.h>
#include "LevelNodes/OBB2D.h"
#include "LevelNodes/GameObject.h"
#include "LevelNodes/LevelSettingsObject.h"
#include "PlayerNodes/HardStreak.h"
#include "PlayerNodes/PlayerObject.h"
#include "LevelNodes/GJGroundLayer.h"
#include "LevelNodes/GJGameLevel.h"
#include "PlayerNodes/PlayLayer.h"
#include "PlayerNodes/GameManager.h"
#include "LevelNodes/StartPosObject.h"

#endif