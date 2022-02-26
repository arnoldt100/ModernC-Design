//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <utility>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "BadMonster.h"

namespace GAME_ENEMIES {

//////////////////////////////////////////////////////////////////////////////
/////////////////////////////// PUBLIC ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//============================= LIFECYCLE ====================================

BadMonster::BadMonster() :
    Monster()
{
    return;
}

BadMonster::BadMonster( BadMonster && other) :
    Monster(std::move(other))
{
    return;
}		// -----  end of method BadMonster::BadMonster  -----


BadMonster::~BadMonster()
{
    return;
}

//============================= ACCESSORS ====================================

//============================= MUTATORS =====================================

//============================= OPERATORS ====================================

BadMonster& BadMonster::operator= ( const BadMonster &other )
{
    if (this != &other)
    {
        Monster::operator=(other);
    }
    return *this;
} // assignment operator

BadMonster& BadMonster::operator= ( BadMonster && other )
{
    if (this != &other)
    {
        Monster::operator=(std::move(other));
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