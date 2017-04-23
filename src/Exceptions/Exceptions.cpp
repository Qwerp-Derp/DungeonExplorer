#include <exception>
#include <iostream>

namespace DungeonExplorer{
    //exception thrown when enemy or hero is missing methods
    struct MissingMethods : public std::exception{
        const char * what() const throw(){
            return "Missing Method in Hero/Enemy Class File";
        } 
    };
};