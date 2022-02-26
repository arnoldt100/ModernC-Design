#include "main.h"

#include "SillySoldier.h"
#include "BadSoldier.h"
#include "SillyMonster.h"
#include "BadMonster.h"
#include "SillySuperMonster.h"
#include "BadSuperMonster.h"
#include "AbstractFactory.hpp"

// The abstract products typelist.
// using abstract_products_typelist = MPL::mpl_typelist<GAME_ENEMIES::Soldier>;

// The abstract enemy factory.
using abstract_enemy_factory =  MPL::AbstractFactory<
                                                        MPL::mpl_typelist<GAME_ENEMIES::Soldier>
                                                    >;

int main(int argc, char** argv)
{

    std::cout << "Start of executing main program." << std::endl;

    // Create an instance of abstract_enemy_factory.
    abstract_enemy_factory * my_abstract_enemy_factory_ptr = new abstract_enemy_factory;


    // Free resource.
    delete my_abstract_enemy_factory_ptr;


    std::cout << "End of executing main program." << std::endl;
    return 0;
}
