//
// mp_fold.cpp
//
//  Created on: Dec 28, 2021
//      Author: arnoldt
//

#include "mp_fold.hpp"
#include "Name.hpp"
#include "Person1.h"
#include "Person2.h"
#include "Person3.h"
#include <iostream>
#include <typeinfo>
#include "GenerateScatteredHierarchy.hpp"

using Person_type_list = boost::mp11::mp_list<MCD_MP_FOLD::Person1,
                                              MCD_MP_FOLD::Person2,
                                              MCD_MP_FOLD::Person3>;

using PersonWidget = MCD_MP_FOLD::GenerateScatteredHierarchy<MCD_MP_FOLD::Person1,
                                                             MCD_MP_FOLD::Person2,
                                                             MCD_MP_FOLD::Person3,
                                                             MCD_MP_FOLD::Name>;

int main (int argc, char** argv)
{
    return 0;
}
