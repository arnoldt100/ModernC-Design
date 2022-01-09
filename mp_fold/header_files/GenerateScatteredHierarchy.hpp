
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

namespace MCD_MP_FOLD
{

    // =====================================================================================
    //        Class:  GenerateScatteredHierarchy
    //  Description:  Primary template.
    //  =====================================================================================
    //
   
    template<template<typename> typename Unit, typename TypeList>
    class GenerateScatteredHierarchy : public boost::mp11::mp_front<TypeList>,
                                       public boost::mp11::mp_pop_front<TypeList>
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
                std::cout << "The Typelist element is: TBD" << typeid(this->my_typelist_).name()  << std::endl;
                this->who_am_i();
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


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef GenerateScatteredHierarchy_INC  ----- 
