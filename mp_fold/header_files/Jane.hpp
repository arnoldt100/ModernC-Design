#include <boost/mp11.hpp>
#include <iostream>
#include <boost/core/demangle.hpp> 
#include "Person1.h"
#include "Person2.h"
#include "Person3.h"
#include "GenerateScatteredHierarchy.hpp"

namespace MCD_MP_FOLD {

using Person1_type_list = boost::mp11::mp_list<MCD_MP_FOLD::Person1>;

class Jane : public boost::mp11::mp_front<Person1_type_list> 
{
    public: 
        Jane (); 
    
        ~Jane(); 

};

};

