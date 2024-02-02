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
        int m_nRatings() {
            return from<int>(this, 0x234);
        }
        int m_nRatingsSum() {
            return from<int>(this, 0x238);
        }
        int m_pDailyIDRand() {
            return from<int>(this, 0x2e4);
        }
        int m_pDailyIDRand2() {
            return from<int>(this, 0x2e8);
        }
        int m_pDailyID() {
            return m_pDailyIDRand() - m_pDailyIDRand2();
        }
        bool m_isPlatformerLevel() {
            return m_nLevelLength() == 5;
        }

        std::string convertRobTopLevelToAssetKey(int lvlID) {
            switch (lvlID) {
                case 1:
                    return "easy"; // Stereo Madness
                case 2:
                    return "easy"; // Back On Track
                case 3:
                    return "normal"; // Polargeist
                case 4:
                    return "normal"; // Dry Out
                case 5:
                    return "hard"; // Base After Base
                case 6:
                    return "hard"; // Can't Let Go
                case 7:
                    return "harder"; // Jumper
                case 8:
                    return "harder"; // Time Machine
                case 9:
                    return "harder"; // Cycles
                case 10:
                    return "insane"; // xStep
                case 11:
                    return "insane"; // Clutterfunk
                case 12:
                    return "insane"; // Theory of Everything
                case 13:
                    return "insane"; // Electroman Adventures
                case 14:
                    return "hard_demon"; // Clubstep
                case 15:
                    return "insane"; // Electrodynamix
                case 16:
                    return "insane"; // Hexagon Force
                case 17:
                    return "harder"; // Blast Processing
                case 18:
                    return "hard_demon"; // TOE 2
                case 19:
                    return "harder"; // Geometrical Dominator
                case 20:
                    return "hard_demon"; // Deadlocked
                case 21:
                    return "insane"; // Fingerdash
                case 22:
                    return "insane"; // Dash
                case 5001:
                    return "hard"; // The Tower
                case 5002:
                    return "harder"; // The Sewers
                case 5003:
                    return "harder"; // The Cellar
                case 5004:
                    return "harder"; // The Secret Hollow
                case 3001:
                    return "hard"; // The Challenge
            }
            return "na";
        }

        std::string convertGJDifficultyDemonToAssetKey(int difficulty) {
            switch (difficulty) {
                case 3:
                    return "easy_demon";
                case 4:
                    return "medium_demon";
                case 0:
                    return "hard_demon";
                case 5:
                    return "insane_demon";
                case 6:
                    return "extreme_demon";
            }
            return "na";
        }

        std::string convertGJDifficultyToAssetKey(GJDifficulty difficulty) {
            switch (static_cast<int>(difficulty)) {
                case -1:
                    return "auto";
                case 0:
                    return "na";
                case static_cast<int>(GJDifficulty::kGJDifficultyEasy):
                    return "easy";
                case static_cast<int>(GJDifficulty::kGJDifficultyNormal):
                    return "normal";
                case static_cast<int>(GJDifficulty::kGJDifficultyHard):
                    return "hard";
                case static_cast<int>(GJDifficulty::kGJDifficultyHarder):
                    return "harder";
                case static_cast<int>(GJDifficulty::kGJDifficultyInsane):
                    return "insane";
            }
            return "na";
        }

         GJDifficulty getAverageDifficulty() {
            return reinterpret_cast<GJDifficulty(__thiscall*)(
                GJGameLevel*
            )>(
                base + 0x114180
            )(this);
        }

        std::string getAssetKey(GJGameLevel* m_level) {
            int stars = m_level->m_stars();
            GJDifficulty diff = m_level->getAverageDifficulty();
            if (stars == 0) {
                return convertGJDifficultyToAssetKey(diff);
            }
            if (stars == 10) {
                return convertGJDifficultyDemonToAssetKey(m_level->m_pDemonDifficulty());   
            }
            if (m_level->m_levelID() < 5004 && m_level->m_levelID() > 0) {
                return convertRobTopLevelToAssetKey(m_level->m_levelID());
            }

            switch (stars) {
                case 1:
                    return "auto";
                case 2:
                    return "easy";
                case 3:
                    return "normal";
                case 4:
                    return "hard";
                case 5:
                    return "hard";
                case 6:
                    return "harder";
                case 7:
                    return "harder";
                case 8:
                    return "insane";
                case 9:
                    return "insane";
            }
            return "na";
        }
    };
}

#endif