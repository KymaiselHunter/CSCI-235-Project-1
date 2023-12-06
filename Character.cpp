//Name : Kyle
//Instructor : Dr. Tiziana Ligorio
//Project 1

//
#include "Character.hpp"
#include <cctype>
#include <string>

 /**
      Default constructor.
      Default-initializes all private members. 
      Default character name: "NAMELESS". 
      Booleans are default-initialized to False. 
      Default enum value: NONE. 
      Default Vitality, Max Armor, and Level: 0.
   */
Character::Character()
{
    name_ = "NAMELESS";
    race_ = NONE;
    vitality_ = 0;
    armor_ = 0;
    level_ = 0;
    enemy_flag_ = false;
}

  /**
  Parameterized constructor.
  @param      : The name of the character (a string in UPPERCASE)
  @param      : The race of the character (a string)
  @param      : The character's vitality (a non-negative integer) , with default  
                value 0
  @param      : The character's max armor level (a non-negative integer), with 
                default value 0
  @param      : The character's level (non-negative integer), with default value 0
  @param      : A flag indicating whether the character is an enemy, with default 
                value false
  @post       : The private members are set to the values of the corresponding 
                parameters.
  */
Character::Character(std::string pName, std::string pRace, int pVitality, int pArmor, int pLevel, bool pEnemy)//p for parameter
{
    this->setName(pName);
    this->setRace(pRace);

    //each of these have an if string to set value to zero if a negative number is passed through
    if(pVitality >= 0)this->setVitality(pVitality);
    else this->setVitality(0);
    
    if(pArmor >= 0) this->setArmor(pArmor);
    else this->setVitality(0);
    
    if(pLevel >= 0)this->setLevel(pLevel);
    else this->setVitality(0);
    
    if(pEnemy) this->setEnemy();
    else this->enemy_flag_ = false;
    //std:: cout<< enemy_flag_;
}

//name accessor and mutator
   /**
            @param  : the name of the Character
            @post   : sets the Character's title to the value of the parameter, 
                      in UPPERCASE. Only alphabetical characters are allowed. 
                      For example, attempting to create a character named 
                      "TW3EDLEDUM2" should create a character named "TWEDLEDUM".
                    : If the given parameter does not have any valid alphabetical
                      characters, the character's name should be set to "NAMELESS".
*/
void Character::setName(const std::string &pName)
{
    //std::cout << pName;
    //create empty string to hold all letters
    std::string new_name = "";

    //iterates through passed string
    int length = pName.length();
    for(int i = 0; i < length; i++)
    {
        //checks, adds and capitalizes all letters
        if(std::isalpha(pName[i])) new_name += std::toupper(pName.at(i));
    }
    
    //set the character name
    if(new_name != "") name_ = new_name;
    else name_ = "NAMELESS";
}

//returns the name of character
std::string Character::getName() const
{
    return name_;
}

//Race accessor and mutator
/**
       @param  : the race of the Character (a string)
       @post   : sets the Character's race to the value of the parameter.
                 If the given race was invalid, set race_ to NONE.
*/
void Character::setRace(const std::string &pRace)
{
    if(pRace == "HUMAN") race_ = HUMAN;
    else if(pRace == "ELF") race_ = ELF;
    else if(pRace == "DWARF") race_ = DWARF;
    else if(pRace == "LIZARD") race_ = LIZARD;
    else if(pRace == "UNDEAD") race_ = UNDEAD;
    else race_ = NONE;
}

//returns the race of the character as a string
std::string Character::getRace() const
{
    if(race_ == HUMAN) return "HUMAN";
    else if(race_ == ELF) return "ELF";
    else if(race_ == DWARF) return "DWARF";
    else if(race_ == LIZARD) return "LIZARD";
    else if(race_ == UNDEAD) return "UNDEAD";
    else return "NONE";
}

//vitality accesor and mutator
  /**
    @param  : an integer vitality
    @pre    : vitality >= 0 : Characters cannot have negative health
    @post   : sets the vitality private member to the value of the parameter
              if vitality is negative, do nothing.
  */
void Character::setVitality(const int &pVitality)
{
    if(pVitality >= 0) vitality_ = pVitality;
}

//return vitality int
int Character::getVitality() const
{
    return vitality_;
}

//armor accesor and mutators
  /**
    @param  : an integer armor level
    @pre    : armor >= 0 : Characters cannot have negative armor
    @post   : sets the armor private member to the value of the parameter
              if armor is negative, do nothing.
  */
void Character::setArmor(const int &pArmor)
{
    if(pArmor >= 0) armor_ = pArmor;
}

//returns armor value
int Character::getArmor() const
{
    return armor_;
}

//Level accesors and mutators
  /**
    @param  : an integer level
    @pre    : level >= 0 : Characters cannot have a negative
    @post   : sets the level private member to the value of the parameter
              if level is negative, do nothing.
  */
void Character::setLevel(const int &pLevel)
{
    if(pLevel >= 0) level_ = pLevel;
}

//returns level int
int Character::getLevel() const
{
    return level_;
}

//Enemy accesors and mutators
//sets enemy flag to true no matter what
void Character::setEnemy()
{
    enemy_flag_ = true;
}

//returns isEnemy Bool
bool Character::isEnemy() const
{
    //std::cout << enemy_flag_;
    return enemy_flag_;
}