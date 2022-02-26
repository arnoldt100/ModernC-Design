#include "main.h"

#include "SillySoldier.h"
#include "BadSoldier.h"
#include "SillyMonster.h"
#include "BadMonster.h"
#include "SillySuperMonster.h"
#include "BadSuperMonster.h"
#include "AbstractFactory.hpp"

// The abstract products typelist.
using abstract_products_typelist = MPL::mpl_typelist<GAME_ENEMIES::Soldier>;

int main(int argc, char** argv)
{

    std::cout << "Start of executing main program." << std::endl;

    

    std::cout << "End of executing main program." << std::endl;
    return 0;
}
