//
// mp_fold.cpp
//
//  Created on: Dec 28, 2021
//      Author: arnoldt
//

#include "mp_fold.hpp"

using Person_type_list = boost::mp11::mp_list<MCD_MP_FOLD::Person1,
                                              MCD_MP_FOLD::Person2,
                                              MCD_MP_FOLD::Person3>;

using Person1_type_list = boost::mp11::mp_list<MCD_MP_FOLD::Person1>;

class Jane : public boost::mp11::mp_front<Person1_type_list> 
{
    public: 
        Jane () {};
    
        ~Jane() {};

};

int main (int argc, char** argv)
{


    Jane * a_jane = new Jane();

    delete a_jane;

    return 0;
}
