#include "../../Enemy.cpp"

class Goblin: public Enemy{
    public:
        Goblin(std::string a):Enemy(a, "Goblin", 20, 50){
            
        }
    
        void attack(Hero hero, std::string attackType) {
            if(attackType == "baseDamage"){
                hero.SetValue("HP", (hero.getIntValue("HP") - 
                                          (this->getIntValue("baseDamage"))));
            }else if(attackType == "specialDamage"){
                hero.SetValue("HP", (hero.getIntValue("HP") - 
                                          (this->getIntValue("specialDamage"))));
            }
        }
        
        void draw() {
            //fill in later
        }
};


int main(void){

}