#include "../../Enemy.cpp"

class Goblin: public Enemy{
    public:
        Goblin(std::string a): Enemy(a, "Goblin", 20, 50, 100){
            
        }
    
        void attack(Hero *hero, std::string attackType) {
            if(attackType == "baseAttack"){
                hero->setValue("HP", (hero->getIntValue("HP") - 
                                          (this->getIntValue("baseDamage"))));
            }else if(attackType == "specialAttack"){
                hero->setValue("HP", (hero->getIntValue("HP") - 
                                          (this->getIntValue("specialDamage"))));
            }
        }
        
        void draw() {
            //fill in later
        }
};