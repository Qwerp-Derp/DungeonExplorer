#include "../../Hero.cpp"

class Wizard : public Hero{
    public:
        Wizard(std::string heroName): Hero(heroName, "Wizard", 10, 20, 5, 200){

        }

        void attack(Enemy *enemy, std::string attackType){
            if(attackType == "baseAttack"){
                enemy->setValue("HP", (enemy->getIntValue("HP") - 
                                    (this->getIntValue("baseDamage"))));
            }else if(attackType == "specialAttack"){
                enemy->setValue("HP", (enemy->getIntValue("HP") - 
                                          (this->getIntValue("specialDamage"))));
            }
        }

        void draw(){
            //fill later
            std::cout << "hmm";
        }
};