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
#include "AbstractFactory.hpp"
#include "ConcreteFactory.hpp"

// The abstract products typelist.
using abstract_products_typelist1 = MPL::mpl_typelist<GAME_ENEMIES::Soldier,GAME_ENEMIES::Monster,GAME_ENEMIES::SuperMonster>;

using abstract_products_typelist2 = MPL::mpl_typelist<GAME_ENEMIES::Soldier>;
using concrete_prodcts_typelist2 = MPL::mpl_typelist<GAME_ENEMIES::SillySoldier>;

using abstract_factory = MPL::AbstractFactory<abstract_products_typelist2>;
using concrete_factory = MPL::ConcreteFactory<abstract_factory,concrete_prodcts_typelist2>;

int main(int argc, char** argv)
{

    std::cout << "Start of executing main program." << std::endl;

    std::cout << "================================" << std::endl;
    std::cout << "== GenerateScatteredHierarchy ==" << std::endl;
    std::cout << "================================" << std::endl << std::endl;

    MPL::GenerateScatteredHierarchy<MPL::TestAbstractFactoryUnit,
                                    MPL::mpl_size<abstract_products_typelist1>,
                                    abstract_products_typelist1> * my_scattered_hiearchy_ptr = \
        new MPL::GenerateScatteredHierarchy< MPL::TestAbstractFactoryUnit,
                                             MPL::mpl_size<abstract_products_typelist1>,
                                             abstract_products_typelist1>(); 

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
                                 MPL::mpl_size<abstract_products_typelist1>,
                                 abstract_products_typelist1> * my_linear_hierarchy_ptr = 
        new MPL::GenerateLinearHierarchy<MPL::TestEventHandler,
                                        MPL::mpl_size<abstract_products_typelist1>,
                                        abstract_products_typelist1>();



    if ( my_linear_hierarchy_ptr != nullptr)
    {
        delete my_linear_hierarchy_ptr;
    }
    my_linear_hierarchy_ptr = nullptr;

    std::cout << std::endl << "=============================" << std::endl << std::endl;

    std::cout << "===============================" << std::endl;
    std::cout << "== Generate Concrete Product ==" << std::endl;
    std::cout << "===============================" << std::endl << std::endl;

    concrete_factory* my_factory_ptr = new concrete_factory;

    if ( my_factory_ptr != nullptr)
    {
        delete my_factory_ptr;
    }
    my_factory_ptr = nullptr;

    std::cout << std::endl << "===============================" << std::endl << std::endl;

    std::cout << "End of executing main program." << std::endl;
    return 0;
}
