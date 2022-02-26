//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <utility>
#include <iostream>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "Soldier.h"

namespace GAME_ENEMIES {

//////////////////////////////////////////////////////////////////////////////
/////////////////////////////// PUBLIC ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//============================= LIFECYCLE ====================================

Soldier::Soldier() :
    Enemy()
{
    std::cout << "Instantiating Soldier." << std::endl;
    return;
}

Soldier::Soldier( const Soldier & other) :
    Enemy(other)
{
    if (this != &other)
    {

    }
    return;
}		// -----  end of method Soldier::Soldier  -----

Soldier::Soldier( Soldier && other) :
    Enemy(std::move(other))
{
    return;
}		// -----  end of method Soldier::Soldier  -----


Soldier::~Soldier()
{
    return;
}

//============================= ACCESSORS ====================================

//============================= MUTATORS =====================================

//============================= OPERATORS ====================================

Soldier& Soldier::operator= ( const Soldier &other )
{
    if (this != &other)
    {
        Enemy::operator=(other);
    }
    return *this;
} // assignment operator

Soldier& Soldier::operator= ( Soldier && other )
{
    if (this != &other)
    {
        Enemy::operator=(std::move(other));

    }
    return *this;
} // assignment-move operator

//////////////////////////////////////////////////////////////////////////////
/////////////////////////////// PROTECTED ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//============================= LIFECYCLE ====================================

//============================= ACCESSORS ====================================

//============================= MUTATORS =====================================

//============================= OPERATORS ====================================

//////////////////////////////////////////////////////////////////////////////
/////////////////////////////// PRIVATE //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
    
//============================= LIFECYCLE ====================================

//============================= ACCESSORS ====================================

//============================= MUTATORS =====================================

//============================= OPERATORS ====================================


} // namespace GAME_ENEMIES
