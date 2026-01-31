#include <iostream>
#include <string>

using namespace std;

int menuChoice();
void attack(int& monsterHealth, int& playerHealth);
void heal(int& playerHealth);
int choice();



int main() {
	int choice;
	int playerHealth = 100;
	int monsterHealth = 120;

	cout << "Player HP: " << playerHealth << endl;
	cout << "Monster HP: " << monsterHealth << endl;
	if (){
		switch (choice) {
		case 1:
			attack(monsterHealth, playerHealth);
			break;

		case 2:
			heal(playerHealth);
			break;

		case 3:
			return false;
		default:
			return true;
		}
	}
	




}

bool 

void attack(int &monsterHealth, int &playerHealth) {
	int playerDamage = (rand() % 20) + 1;
	int monsterDamage = (rand() % 20) + 1;
    monsterHealth -= playerDamage;
	playerHealth -= monsterDamage;
    cout << "You attack the monster for " << playerDamage << " HP!" << endl;
    cout << "Monster HP: " << monsterHealth << endl;
	cout << "Monster attacks you for " << monsterDamage << " HP!" << endl;
}

void heal(int& playerHealth) {
	int healedHP = (rand() % 20) + 1;
	int monsterDamage = (rand() % 20) + 1;
	playerHealth += healedHP;
	playerHealth -= monsterDamage;
	cout << "You healed by " << healedHP << " HP!" << endl;
	cout << "Monster attacks you for " << monsterDamage << "HP!" << endl;
}

int menuChoice() {
	int choice;
	cout << "Choose Your Move:\n";
	cout << "1. Attack\n";
	cout << "2. Heal\n";
	cout << "3. Quit\n";

	cin >> choice;
	return choice;
}
		// Please have more than one function. At least one of them passing a value by reference :)