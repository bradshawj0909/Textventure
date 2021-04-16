#include <iostream>
class Monsters {
public:
    int enemy_MaxHealth;
    int enemy_CurrentHealth;
    int enemy_DamageDone;
    int enemy_DamageTaken;
    int enemy_TempCurrentHealth;

    void MonsterAttributes() {
        std::cout << "Max Health - " << enemy_MaxHealth << std::endl;
        std::cout << "Current Health - " << enemy_CurrentHealth << std::endl;
        std::cout << "Damage Done - " << enemy_DamageDone << std::endl;
        std::cout << "Damage Taken - " << enemy_DamageTaken << std::endl;
    }
};
 int MonsterLevels()
{
    Monsters enemyLevel1;
    enemyLevel1.enemy_MaxHealth = 100;
    enemyLevel1.enemy_DamageDone = 10;
    enemyLevel1.enemy_DamageTaken = 15;
    enemyLevel1.enemy_CurrentHealth = 100;
    Monsters enemyLevel2;
    enemyLevel2.enemy_MaxHealth = 200;
    enemyLevel2.enemy_DamageDone = 20;
    enemyLevel2.enemy_DamageTaken = 25;
    enemyLevel2.enemy_CurrentHealth = 200;
    enemyLevel2.MonsterAttributes();
    Monsters enemyLevel3;
    enemyLevel3.enemy_MaxHealth = 300;
    enemyLevel3.enemy_DamageDone = 30;
    enemyLevel3.enemy_DamageTaken = 30;
    enemyLevel3.enemy_CurrentHealth = 300;
    enemyLevel3.MonsterAttributes();
    return 0;
}
