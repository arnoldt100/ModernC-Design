#ifndef  AbstractPersonFactory_INC
#define  AbstractPersonFactory_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <string>
#include <utility>
#include <iostream>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "MPLAliases.hpp"
#include "DefaultPersonFactory.hpp"

namespace MCD_MP_FOLD
{

     // =====================================================================================
     //        Class:  AbstractPersonFactory
     //  Description:  
     //  =====================================================================================
     template <template <typename> typename Unit=DefaultPersonFactory,
               typename L>
    class AbstractPersonFactory : public MCD_MP_FOLD::GenerateScatteredHierarchy <Unit,mpl_size<L>,L>
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  AbstractPersonFactory
            //      Method:  AbstractPersonFactory :: AbstractPersonFactory
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            AbstractPersonFactory () 
            {
            	return;
            }   // constructor


            AbstractPersonFactory (const AbstractPersonFactory & other) 
            {
                return;
            }   // copy constructor

            AbstractPersonFactory (AbstractPersonFactory && other) 
            {
                return;
            }   // copy-move constructor

            virtual ~AbstractPersonFactory ()
            {
                return;
            }  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================
            template<typename T> T* Create()
            {
                Unit<T>& unit = *this;
                return unit.DoCreate(mpl_type2type<T>());
            }

            // ====================  OPERATORS     =======================================

            AbstractPersonFactory& operator= ( const AbstractPersonFactory &other )
            {
                if ( this != &other)
                {

                }
                return *this;
            } // assignment operator

            AbstractPersonFactory& operator= ( AbstractPersonFactory && other ) // assignment-move operator
            {
                if ( this != &other)
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

    }; // -----  end of class AbstractPersonFactory  -----


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef AbstractPersonFactory_INC  ----- 
