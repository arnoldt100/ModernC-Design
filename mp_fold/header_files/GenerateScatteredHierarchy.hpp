
#ifndef  GenerateScatteredHierarchy_INC
#define  GenerateScatteredHierarchy_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <iostream>
#include <typeinfo>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//
#include <boost/mp11.hpp>

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//

//-----------------------------------------------------
//  Below we define aliases to boost mp11 meta        -
//  programming library.                              -
//                                                    -
//-----------------------------------------------------
template<typename ...T>
using mpl_typelist = boost::mp11::mp_list<T...>;

template<typename L>
using mpl_size = boost::mp11::mp_size<L>;

template<typename L>
using mpl_rest_size = boost::mp11::mp_size< boost::mp11::mp_rest<L> >;

template<typename L>
using mpl_rest = boost::mp11::mp_rest<L>;

template<typename L>
using mpl_front = boost::mp11::mp_front<L>;

namespace MCD_MP_FOLD
{

    // =====================================================================================
    //        Class:  GenerateScatteredHierarchy
    //  Description:  Primary template.
    //  =====================================================================================
    //
   
    template<template<typename> typename Unit, typename TypeListSize ,typename L>
    class GenerateScatteredHierarchy : public Unit<mpl_front<L>>,
                                       public mpl_size<L>,
                                       public GenerateScatteredHierarchy<Unit,mpl_rest_size<L>,mpl_rest<L>> 
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  GenerateScatteredHierarchy
            //      Method:  GenerateScatteredHierarchy :: GenerateScatteredHierarchy
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            GenerateScatteredHierarchy ()
            {
                std::cout << "---" << std::endl;
                std::cout << "The Typelist element is: " << typeid(this->my_typelist_).name() << std::endl;
                std::cout << "The head is: " << typeid(Unit<boost::mp11::mp_front<L>>).name() << std::endl;
                std::cout << "The tail is: " << typeid(boost::mp11::mp_rest<L>).name() << std::endl;
                // this->show_my_name();
                std::cout << "---" << std::endl << std::endl;
            }   // constructor

            GenerateScatteredHierarchy (const GenerateScatteredHierarchy & other)   // copy constructor
            {
                return;
            }

            GenerateScatteredHierarchy (GenerateScatteredHierarchy && other)   // copy-move constructor
            {
                return;
            }

            virtual ~GenerateScatteredHierarchy ()  // destructor
            {
                return;
            }

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            GenerateScatteredHierarchy& operator= ( const GenerateScatteredHierarchy &other ) // assignment operator
            {
                if ( this != &other )
                {

                }
                return *this;
            }

            GenerateScatteredHierarchy& operator= ( GenerateScatteredHierarchy && other ) // assignment-move operator
            {
                if ( this != &other )
                {

                }
                return *this;
            }

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================
            L my_typelist_;

    }; // -----  end of class GenerateScatteredHierarchy  -----


    template<template<typename> typename Unit, typename L>
    class GenerateScatteredHierarchy<Unit,mpl_size<mpl_typelist<>>, L> 
    {
        public: 
            GenerateScatteredHierarchy ()
            {
                std::cout << "---" << std::endl;
                std::cout << "Empty type list" << std::endl;
                std::cout << "---" << std::endl << std::endl;
            }   // constructor

    };

}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef GenerateScatteredHierarchy_INC  ----- 
