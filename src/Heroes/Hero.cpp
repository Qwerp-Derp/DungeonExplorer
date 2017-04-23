#pragma once

#include <string>
#include <iostream>
#include "../Enemies/Enemy.cpp"

class Hero {
    public:
        Hero(std::string heroName, std::string heroClass, int baseDamage, int specialDamage, int defence, int HP){
            this->heroName = heroName;
            this->heroClass = heroClass;
            this->baseDamage = baseDamage;
            this->specialDamage = specialDamage;
            this->maxHP = HP;
            this->HP = HP;
        }

        //virtual void attack(Enemy enemy, std::string attackType);
        //virtual void draw();

        template<class T>
        void setValue(std::string setter, T value){
            if(setter == "baseDamage"){
                this->baseDamage = value;
            }else if(setter == "specialDamage"){
                this->specialDamage = value;
            }else if(setter == "maxHP"){
                this->maxHP = value;
            }else if(setter == "defence"){
                this->defence = value;
            }else if(setter == "heroName"){
                this->heroName = value;
            }else if(setter == "HP"){
                this->HP = value;   
            }else if(setter == "heroClass"){
                this->heroClass = value;
            }else{
                std::cout << "INVALID SETTER TAG";
            }
        }

        int getIntValue(std::string getter){
            if(getter == "baseDamage"){
                return this->baseDamage;
            }else if(getter == "specialDamage"){
                return this->specialDamage;
            }else if(getter == "defence"){
                return this->defence;
            }else if(getter == "HP"){
                return this->HP;
            }else if(getter == "maxHP"){
                return this->maxHP;
            }else{
                return 0xAFD108;
            }
        }

        std::string getStringValue(std::string getter){
            if(getter == "heroName"){
                    return this->heroName;
            }else if(getter == "heroClass"){
                    return this->heroClass;
            }
        }

    protected:
        int baseDamage,
                specialDamage,
                defence,
                HP,
                maxHP;
        std::string heroName,
                heroClass;
};