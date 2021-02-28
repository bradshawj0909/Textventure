#include <iostream>

class Monsters {
public:
    int enemy_MaxHealth;
    int enemy_CurrentHealth;
    int enemy_DamageDone;
    int enemy_DamageTaken;

    void MonsterAttributes() {
        std::cout << "Max Health - " << enemy_MaxHealth << std::endl;
        std::cout << "Current Health - " << enemy_CurrentHealth << std::endl;
        std::cout << "Damage Done - " << enemy_DamageDone << std::endl;
        std::cout << "Damage Taken - " << enemy_DamageTaken << std::endl;
    }
};
int main()
{
    Monsters enemyLevel1;
    enemyLevel1.enemy_MaxHealth = 100;
    enemyLevel1.enemy_DamageDone = 10;
    enemyLevel1.enemy_DamageTaken = 15;
    enemyLevel1.enemy_CurrentHealth = enemyLevel1.enemy_MaxHealth - enemyLevel1.enemy_DamageTaken;
    enemyLevel1.MonsterAttributes();
}
