#include "main.h"

#include "SillySoldier.h"
#include "BadSoldier.h"
#include "SillyMonster.h"
#include "BadMonster.h"
#include "SillySuperMonster.h"
#include "BadSuperMonster.h"
#include "TestAbstractFactoryUnit.hpp"
#include "TestEventHandler.hpp"
#include "GenerateScatteredHierarchy.hpp"
#include "GenerateLinearHierarchy.hpp"

// The abstract products typelist.
using abstract_products_typelist = MPL::mpl_typelist<GAME_ENEMIES::Soldier,GAME_ENEMIES::Monster,GAME_ENEMIES::SuperMonster>;

int main(int argc, char** argv)
{

    std::cout << "Start of executing main program." << std::endl;

    std::cout << "================================" << std::endl;
    std::cout << "== GenerateScatteredHierarchy ==" << std::endl;
    std::cout << "================================" << std::endl << std::endl;

    MPL::GenerateScatteredHierarchy<MPL::TestAbstractFactoryUnit,
                                    MPL::mpl_size<abstract_products_typelist>,
                                    abstract_products_typelist> * my_scattered_hiearchy_ptr = \
        new MPL::GenerateScatteredHierarchy< MPL::TestAbstractFactoryUnit,
                                             MPL::mpl_size<abstract_products_typelist>,
                                             abstract_products_typelist>(); 

    if ( my_scattered_hiearchy_ptr != nullptr )
    {
        delete my_scattered_hiearchy_ptr;
    }
    my_scattered_hiearchy_ptr = nullptr;

    std::cout << std::endl << "================================" << std::endl << std::endl;




    std::cout << "=============================" << std::endl;
    std::cout << "== GenerateLinearHierarchy ==" << std::endl;
    std::cout << "=============================" << std::endl << std::endl;

    MPL::GenerateLinearHierarchy<MPL::TestEventHandler,
                                 MPL::mpl_size<abstract_products_typelist>,
                                 abstract_products_typelist> * my_linear_hierarchy_ptr = 
        new MPL::GenerateLinearHierarchy<MPL::TestEventHandler,
                                        MPL::mpl_size<abstract_products_typelist>,
                                        abstract_products_typelist>();



    if ( my_linear_hierarchy_ptr != nullptr)
    {
        delete my_linear_hierarchy_ptr;
    }
    my_linear_hierarchy_ptr = nullptr;

    std::cout << std::endl << "=============================" << std::endl << std::endl;

    std::cout << "End of executing main program." << std::endl;
    return 0;
}
