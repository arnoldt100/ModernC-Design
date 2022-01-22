#ifndef  DefaultPersonFactory_INC
#define  DefaultPersonFactory_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "MPLAliases.hpp"

namespace MCD_MP_FOLD
{

     // =====================================================================================
     //        Class:  DefaultPersonFactory
     //  Description:  
     //  =====================================================================================
    template<typename T>
    class DefaultPersonFactory
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  DefaultPersonFactory
            //      Method:  DefaultPersonFactory :: DefaultPersonFactory
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            DefaultPersonFactory ();   // constructor

            DefaultPersonFactory (const DefaultPersonFactory & other)=delete; // copy constructor

            DefaultPersonFactory (DefaultPersonFactory && other)=delete; // copy-move constructor

            virtual T* DoCreate()=0;

            virtual ~DefaultPersonFactory ()
            {
                return;
            } 

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            DefaultPersonFactory& operator= ( const DefaultPersonFactory &other )=delete; // assignment operator

            DefaultPersonFactory& operator= ( DefaultPersonFactory && other )=delete; // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class DefaultPersonFactory  -----


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef DefaultPersonFactory_INC  ----- 
