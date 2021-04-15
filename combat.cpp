#include <iostream>
#include "monster.h"
#include "combat.h"
#include "charcreation.h"
#include <stdio.h>
#include <stdlib.h>


int maxHealth = 100; 
int currentHealth = 100;
int enemy_MaxHealth = 100;
int enemy_CurrentHealth = 100; 
int enemy_DamageDone = 10;
int enemy_DamageTaken = 15; //place holders for now but I will inherit from monster.h once I finish. 
int main() {
}
bool combat() {
	while (currentHealth != 0 || enemy_CurrentHealth != 0) {
		int choice; 
		cout << "Press 1 to light attack or press 2 to heavy attack" >>
		cin >> choice; 
		if (attack(choice) == true) {
			enemy_CurrentHealth = enemy_CurrentHealth - enemy_DamageTaken; 
			cout << "You hit the monster dealing 15 damage" >>
		}
		else {
			cout << "You miss, fool." >>
		}
		if (monsterAttack() == true) {
			currentHealth = currentHealth - enemy_DamageDone;
			cout << "The monster does 10 damage to you. HP:", currentHealth >>
		}
		else {
			cout << "The monster misses you, stupid monsters." >>
		}
	}
}
bool attack(int option) {
	int attackPercentage = rand() % 100;
	if (option == 1){
		if (attackPercentage >= 20) {
			return true;
		}
	}
	if (option == 2) {
		if (attackPercentage >= 40) {
			return true;
		}
	}
	return false;
}
bool monsterAttack() {
	int monAttackPercentage = rand() % 100;
	if (monAttackPercentage >= 60) {
		return true;
	}
	return false;
}
