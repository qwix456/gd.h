#ifndef __GJGAMELEVEL_H__
#define __GJGAMELEVEL_H__

namespace gd {
    class GJGameLevel : public cocos2d::CCNode {
    public:
        enum GJLevelType {
            kGJLevelTypeLocal = 1,
            kGJLevelTypeEditor = 2,
            kGJLevelTypeSaved = 3
        };

        enum GJDifficulty {
            kGJDifficultyAuto = 0,
            kGJDifficultyEasy = 1,
            kGJDifficultyNormal = 2,
            kGJDifficultyHard = 3,
            kGJDifficultyHarder = 4,
            kGJDifficultyInsane = 5,
            kGJDifficultyDemon = 6,
            kGJDifficultyDemonEasy = 7,
            kGJDifficultyDemonMedium = 8,
            kGJDifficultyDemonInsane = 9,
            kGJDifficultyDemonExtreme = 10
        };

        std::string m_nLevelCreator() {
            return from<std::string>(this, 0x160);
        }
        std::string m_nLevelName() {
            return from<std::string>(this, 0x118);
        }
        int m_levelIDRand() {
            return from<int>(this, 0x10c);
        }
        int m_levelIDRand2() {
            return from<int>(this, 0x110);
        }
        int m_levelID() {
            return m_levelIDRand() - m_levelIDRand2(); // ssshhhiiittt!
        }
        int m_totalAttemptsRand() {
            return from<int>(this, 0x268);
        }
        int m_totalAttemptsRand2() {
            return from<int>(this, 0x26c);
        }
        int m_totalAttempts() {
            return m_totalAttemptsRand() - m_totalAttemptsRand2();
        }
        int m_totalJumpsRand() {
            return from<int>(this, 0x274);
        }
        int m_totalJumpsRand2() {
            return from<int>(this, 0x278);
        }
        int m_totalJumps() {
            return m_totalJumpsRand() - m_totalJumpsRand2();
        }
        int m_totalObjectsRand() {
            return from<int>(this, 0x224);
        }
        int m_totalObjectsRand2() {
            return from<int>(this, 0x228);
        }
        int m_totalObjects() {
            return m_totalObjectsRand() - m_totalObjectsRand2();
        }
        int m_nPracticePercent() {
            return from<int>(this, 0x2c4);
        }
        int m_nNormalPercentRand() {
            return from<int>(this, 0x2a8);
        }
        int m_nNormalPercentRand2() {
            return from<int>(this, 0x2a4);
        }
        int m_nNormalPercent() {
            return m_nNormalPercentRand() - m_nNormalPercentRand2();
        }
        int m_starsRand() {
            return from<int>(this, 0x300);
        }
        int m_starsRand2() {
            return from<int>(this, 0x304);
        }
        int m_stars() {
            return m_starsRand() - m_starsRand2();
        }
        int m_songID() {
            return from<int>(this, 0x218);
        }
        GJDifficulty m_pDemonDifficulty() {
            return from<GJDifficulty>(this, 0x2fc);
        }
        GJLevelType m_pLevelType() {
            return from<GJLevelType>(this, 0x218);
        }
        int m_nLevelLength() {
            return from<int>(this, 0x2d0);
        }
        bool m_isPlatformerLevel() {
            return m_nLevelLength() == 5;
        }
    };
}

#endif