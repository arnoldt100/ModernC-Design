
//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <iostream>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "Person1.h"

namespace MCD_MP_FOLD {

//////////////////////////////////////////////////////////////////////////////
/////////////////////////////// PUBLIC ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//============================= LIFECYCLE ====================================

Person1::Person1()
{
    return;
}

Person1::Person1( Person1 && other)
{
    return;
}		// -----  end of method Person1::Person1  -----


Person1::~Person1()
{
    std::cout << "deleting Person1" << std::endl;
    return;
}

//============================= ACCESSORS ====================================

//============================= MUTATORS =====================================
std::string Person1::who_am_i() const
{
    return "I'm person1.";
}

//============================= OPERATORS ====================================

Person1& Person1::operator= ( const Person1 &other )
{
    if (this != &other)
    {

    }
    return *this;
} // assignment operator

Person1& Person1::operator= ( Person1 && other )
{
    if (this != &other)
    {

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


} // namespace MCD_MP_FOLD
