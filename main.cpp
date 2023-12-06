#include <iostream>
using namespace std;

#include "Character.hpp"
//#include "Character.cpp"
//#include

void printCharacterAttributes(Character pCharacter)
{
    cout << "Character Name: " << pCharacter.getName() << endl;
    cout << "Character Race: " << pCharacter.getRace() << endl;
    cout << "Character Vitality: " << pCharacter.getVitality() << endl;
    cout << "Character Armor: " << pCharacter.getArmor() << endl;
    cout << "Character Level: " << pCharacter.getLevel() << endl;
    cout << "Character isEnemy: " << pCharacter.isEnemy() << endl;
}

void testMutators(Character *pCharacter)
{
    pCharacter->setName("tweedledum");
    pCharacter->setRace("HUMAN");
    pCharacter->setVitality(1000);
    pCharacter->setArmor(10000);
    pCharacter->setLevel(1000000);
}

void testMutators2(Character *pCharacter)
{
    pCharacter->setName("Tw3edleDum");
    pCharacter->setRace("ballz");
    pCharacter->setVitality(-50);
    pCharacter->setArmor(-50);
    pCharacter->setLevel(-50);
    pCharacter->setEnemy();
}

int main()
{
    cout << "test" << endl;
    Character testCharacter = Character();
    //cout<< "test2";
    printCharacterAttributes(testCharacter);

    testMutators(&testCharacter);
    
    cout << "Test Mutators: " << endl;
    printCharacterAttributes(testCharacter);

    cout << "Test Mutators 2:" << endl;
    testMutators2(&testCharacter);
    printCharacterAttributes(testCharacter);

    
    cout << "Test Paramertized Constructor" << endl;
    Character testCharacter2 = Character("Kyle", "HUMAN", 1000, 2000, 3000, false);
    printCharacterAttributes(testCharacter2);

    cout << "Test default Paramertized Constructor" << endl;
    Character testCharacter3 = Character("Kyle");
    printCharacterAttributes(testCharacter3);
    
    cout << "Test default Paramertized Constructor" << endl;
    Character testCharacter4 = Character("Tw3", "UNDEAD", 0, 0, 0, true);
    printCharacterAttributes(testCharacter4);

}


