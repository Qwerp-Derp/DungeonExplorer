#pragma once

#include "../heroes/Hero.cpp"
#include <string>
#include <iostream>

class Enemy {
    public:
        Enemy(std::string enemyName, std::string enemyType, int baseDamage, int specialDamage, int HP){
            this->HP = HP;
            this->enemyName = enemyName;
            this->enemyType = enemyType;
            this->baseDamage = baseDamage;
            this->specialDamage = specialDamage;
        }
        
        //virtual void attack(Hero hero, std::string attackType);
        //virtual void draw();
        
        template<class T>
        void setValue(std::string setter, T value) {
            if(setter == "enemyName") {
                this->enemyName = value;
                return;
            }else if(setter == "enemyType") {
                this->enemyType = value;
                return;
            }else if(setter == "baseDamage") {
                this->baseDamage = value;
                return;
            }else if(setter == "HP"){
                this->HP = value;
            }else if(setter == "specialDamage") {
                this->baseDamage = value;
                return;
            }else {
                std::cout << "INVALID SETTER VALUE";
            }
        }
        
        //function overloading because templates dont work
        std::string getStringValue(std::string getter) {
            std::string returner;
            if(getter == "enemyName") {
                returner = this->enemyName;
            }else if(getter == "enemyType") {
                returner = this->enemyType;
            }else{
                returner = "Invalid Getter";
            }
            return returner;
        }
        
        int getIntValue(std::string getter){
            int returner;
            if(getter == "baseDamage") {
                returner = this->baseDamage;
            }else if(getter == "specialDamage") {
                returner = this->specialDamage;
            }else if(getter == "HP"){
                return this->HP;    
            }else{
                returner = 0xAFD108;
            }
            return returner;
        }

    protected:
        std::string enemyName,
                    enemyType;
        int baseDamage,
            specialDamage,
            HP;
};
