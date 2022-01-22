#ifndef  MPLAliases_INC
#define  MPLAliases_INC

//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//
#include <boost/mp11.hpp>

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//

namespace MCD_MP_FOLD
{

//-----------------------------------------------------
//  Below we define aliases to boost mp11 meta        -
//  programming library.                              -
//                                                    -
//-----------------------------------------------------
template<typename ...T>
using mpl_typelist = boost::mp11::mp_list<T...>;

template<typename T>
using mpl_type2type = boost::mp11::mp_identity<T>;

template<typename L>
using mpl_size = boost::mp11::mp_size<L>;

template<typename L>
using mpl_rest_size = boost::mp11::mp_size< boost::mp11::mp_rest<L> >;

template<typename L>
using mpl_rest = boost::mp11::mp_rest<L>;

template<typename L>
using mpl_front = boost::mp11::mp_front<L>;


}; // namespace __NAMESPACE__

#endif   // ----- #ifndef MPLAliases_INC  ----- 
