//Name : Kyle
//Instructor : Dr. Tiziana Ligorio
//Project 1

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

enum Race {NONE, HUMAN, ELF, DWARF, LIZARD, UNDEAD};

class Character
{
    private:
        std::string name_;
        Race race_;
        int vitality_;
        int armor_;
        int level_;
        bool enemy_flag_;

    public:
        //constructors
        Character();
        Character(std::string pName, std::string pRace = "NONE", int pVitality = 0,int pArmor = 0, int pLevel = 0, bool pEnemy = false);//p for parameter

        
        //accessor and mutators, organized based on memberVariable
        //name accessor and mutator
        void setName(const std::string &pName);
        std::string getName() const;

        //Race accessor and mutator
        void setRace(const std::string &pRace);
        std::string getRace() const;

        //vitality accesor and mutator
        void setVitality(const int &pVitality);
        int getVitality() const;

        //armor accesor and mutators
        void setArmor(const int &pArmor);
        int getArmor() const;

        //Level accesors and mutators
        void setLevel(const int &pLevel);
        int getLevel() const;

        //Enemy accesors and mutators
        void setEnemy();
        bool isEnemy() const;
};



#endif//CHARACTER_HPP