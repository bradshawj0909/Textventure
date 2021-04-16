#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <random>
using namespace std;
int maxHealth = 100;
int currentHealth = 100;
int enemy_MaxHealth = 100;
int enemy_CurrentHealth = 100;
int enemy_DamageDone = 10;
int enemy_DamageTaken = 15; //place holders for now but I will inherit from monster.h once I finish. 
bool attack(int option) {
	int attackPercentage = rand() % 100;
	if (option == 1) {
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
bool combat() {
	while (currentHealth >= 0 || enemy_CurrentHealth >= 0) {
		int choice;
		cout << "Press 1 to light attack or press 2 to heavy attack" << endl;
		cout << "Your HP: "<< currentHealth << endl;
		cout << "Monster HP: " << enemy_CurrentHealth << endl;
		cin >> choice;
		if (attack(choice) == true) {
			enemy_CurrentHealth = enemy_CurrentHealth - enemy_DamageTaken;
			cout << "You hit the monster dealing 15 damage" << endl;
			
		}
		else {
			cout << "You miss, fool." << endl;
		}
			
		if (monsterAttack() == true) {
			currentHealth = currentHealth - enemy_DamageDone;
			cout << "The monster does 10 damage to you. " << endl;
		}
		else {
			cout << "The monster misses you, stupid monsters." << endl;
		}
	}
	if (currentHealth <= 0) {
		return false;

	}
	else {
		return true;
	}
}
