#include "../src/heroes/classes/Wizard/Wizard.cpp"
#include "../src/enemies/classes/Goblin/Goblin.cpp"

int main(void){
    Goblin Geoff("Geoff");
    Wizard Merlin("Merlin");
    Merlin.Wizard::attack(&Geoff, "baseAttack");
    std::cout << Geoff.getIntValue("HP");
}