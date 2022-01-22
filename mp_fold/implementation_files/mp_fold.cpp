//
// mp_fold.cpp
//
//  Created on: Dec 28, 2021
//      Author: arnoldt
//

#include "mp_fold.hpp"
#include "MyName.hpp"
#include "Person1.h"
#include "Person2.h"
#include "Person3.h"
#include <iostream>
#include <typeinfo>
#include "MPLAliases.hpp"
#include "AbstractPersonFactory"

using Person_type_list = MCD_MP_FOLD::mpl_typelist<MCD_MP_FOLD::Person1,
                                                   MCD_MP_FOLD::Person2,
                                                   MCD_MP_FOLD::Person3>;

using People3Factory = MCD_MP_FOLD::AbstractPersonFactory<Person_type_list>; 

int main (int argc, char** argv)
{
    return 0;
}
