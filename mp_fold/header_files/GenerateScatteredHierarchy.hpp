
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

tenplate<typename T>
using mp_rest_size = boost::mp11::mp_size< boost::mp11::mp_rest<T> >

namespace MCD_MP_FOLD
{

    // =====================================================================================
    //        Class:  GenerateScatteredHierarchy
    //  Description:  Primary template.
    //  =====================================================================================
    //
   
    template<template<typename> typename Unit, typename TypeListSize ,typename TypeList>
    class GenerateScatteredHierarchy : public Unit<boost::mp11::mp_front<TypeList>>,
                                       public boost::mp11::mp_rest<TypeList>
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
                std::cout << "The head is: " << typeid(Unit<boost::mp11::mp_front<TypeList>>).name() << std::endl;
                std::cout << "The tail is: " << typeid(boost::mp11::mp_rest<TypeList>).name() << std::endl;
                this->show_my_name();
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
            TypeList my_typelist_;

    }; // -----  end of class GenerateScatteredHierarchy  -----


    template<template<typename> typename Unit, typename TypeList>
    class GenerateScatteredHierarchy<Unit,boost::mp11::mp_size<boost::mp11::mp_list<>>, TypeList> 
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
