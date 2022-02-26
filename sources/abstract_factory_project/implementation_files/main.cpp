#include "main.h"

#include "SillySoldier.h"
#include "BadSoldier.h"
#include "SillyMonster.h"
#include "BadMonster.h"
#include "SillySuperMonster.h"
#include "BadSuperMonster.h"
#include "GenerateScatteredHierarchy.hpp"
#include "GenerateLinearHierarchy.hpp"
#include "AbstractFactory.hpp"
#include "ConcreteFactory.hpp"

// The abstract products typelist.
using abstract_products_typelist1 = MPL::mpl_typelist<GAME_ENEMIES::Soldier,GAME_ENEMIES::Monster,GAME_ENEMIES::SuperMonster>;
using concrete_prodcts_typelist1 = MPL::mpl_typelist<GAME_ENEMIES::SillySoldier,GAME_ENEMIES::SillyMonster,GAME_ENEMIES::SillySuperMonster>;

using abstract_products_typelist2 = MPL::mpl_typelist<GAME_ENEMIES::Soldier>;
using concrete_prodcts_typelist2 = MPL::mpl_typelist<GAME_ENEMIES::SillySoldier>;

using abstract_factory = MPL::AbstractFactory<abstract_products_typelist1>;
using concrete_factory = MPL::ConcreteFactory<abstract_factory,concrete_prodcts_typelist1>;

int main(int argc, char** argv)
{

    std::cout << "Start of executing main program." << std::endl;

    std::cout << "===============================" << std::endl;
    std::cout << "== Generate Concrete Product ==" << std::endl;
    std::cout << "===============================" << std::endl << std::endl;

    concrete_factory* my_factory_ptr = new concrete_factory;

    GAME_ENEMIES::Soldier* my_soldier = my_factory_ptr->Create<GAME_ENEMIES::Soldier>();
    GAME_ENEMIES::Monster* my_monster = my_factory_ptr->Create<GAME_ENEMIES::Monster>();
    GAME_ENEMIES::SuperMonster* my_supermonster = my_factory_ptr->Create<GAME_ENEMIES::SuperMonster>();

    if ( my_factory_ptr != nullptr)
    {
        delete my_factory_ptr;
    }
    my_factory_ptr = nullptr;

    std::cout << std::endl << "===============================" << std::endl << std::endl;

    std::cout << "End of executing main program." << std::endl;
    return 0;
}
