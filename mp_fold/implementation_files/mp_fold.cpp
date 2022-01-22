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
// template <template <typename> typename Unit,
//           typename TypeListSize,
//           typename L>
// class AbstractPersonWidgetFactory : public MCD_MP_FOLD::GenerateScatteredHierarchy <Unit,TypeListSize,L>
// {
//     public :
//        template <typename T> void showMyName() const
//        {
//            Unit<T>& unit = *this;
//            unit.show_my_name<>()
//            return;
//        }
// };



using PersonWidget = MCD_MP_FOLD::GenerateScatteredHierarchy< MCD_MP_FOLD::MyName,
                                                              boost::mp11::mp_size<Person_type_list>,
                                                              Person_type_list>;


int main (int argc, char** argv)
{
    PersonWidget* aPersonWidget = new PersonWidget;

    delete aPersonWidget;

    return 0;
}
