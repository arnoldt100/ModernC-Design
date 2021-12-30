//
// mp_fold.cpp
//
//  Created on: Dec 28, 2021
//      Author: arnoldt
//

#include "mp_fold.hpp"

int main (int argc, char** argv)
{
    using Person_type_list = boost::mp11::mp_list<MCD_MP_FOLD::Person1,
                                                  MCD_MP_FOLD::Person2,
                                                  MCD_MP_FOLD::Person3>;

    return 0;
}
