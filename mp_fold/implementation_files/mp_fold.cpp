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
#include "GenerateScatteredHierarchy.hpp"

using Person_type_list = boost::mp11::mp_list<MCD_MP_FOLD::Person1,
                                              MCD_MP_FOLD::Person2,
                                              MCD_MP_FOLD::Person3>;

using Empty_Person_type_list = boost::mp11::mp_list<>;

using PersonWidget = MCD_MP_FOLD::GenerateScatteredHierarchy< MCD_MP_FOLD::MyName,
                                                              boost::mp11::mp_size<Person_type_list>,
                                                              Person_type_list>;

//using PersonWidget = MCD_MP_FOLD::GenerateScatteredHierarchy<MCD_MP_FOLD::MyName,
//                                                             MCD_MP_FOLD::Person1,
//                                                             MCD_MP_FOLD::Person2,
//                                                             MCD_MP_FOLD::Person3>;


int main (int argc, char** argv)
{
    PersonWidget aPersonWidget;

    return 0;
}
