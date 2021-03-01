#include <iostream>

int main()
{
    cout << "Welcome to the character creation of your super badass dungeon conqueror" <<endl;
    cout << "Here you will be able to customise your character" <<endl;
    cout << "You will also be able to roll random stats in strength, charisma, dexterity but that will be later on in the program" <<endl;
    
}


// There will be random rolls incorporated for the final project


string characterName;
cout << "What would you like your characters name to be?: ";
cin >> characterName;
cout << "Your name is: " << characterName;

string age;
cout << "How old is your character?: ";
cin >> age;
cout << "Your characters age is: " << age;

string height;
cout << "How tall do you want your character to be?: ";
cin >> height;
cout << "Your characters height is: " << height;

class CharacterCreation {
public:
    int character_Name;
    int character_Age;
    int character_Height;
