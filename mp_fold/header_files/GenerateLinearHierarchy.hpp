#ifndef  GenerateLinearHierarchy_INC
#define  GenerateLinearHierarchy_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <iostream>
#include <typeinfo>

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
     //        Class:  GenerateLinearHierarchy
     //  Description:  
     //  =====================================================================================
    class GenerateLinearHierarchy
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  GenerateLinearHierarchy
            //      Method:  GenerateLinearHierarchy :: GenerateLinearHierarchy
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            GenerateLinearHierarchy ()   // constructor
            {
                return;
            }

            GenerateLinearHierarchy (const GenerateLinearHierarchy & other)   // copy constructor
            {
                return;
            }

            GenerateLinearHierarchy (GenerateLinearHierarchy && other)   // copy-move constructor
            {
                return;
            }

            virtual ~GenerateLinearHierarchy ()  // destructor
            {
                return;
            }

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            GenerateLinearHierarchy& operator= ( const GenerateLinearHierarchy &other ) // assignment operator
            {
                if ( this != &other )
                {

                }
                return *this;
            }

            GenerateLinearHierarchy& operator= ( GenerateLinearHierarchy && other ) // assignment-move operator
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

    }; // -----  end of class GenerateLinearHierarchy  -----


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef GenerateLinearHierarchy_INC  ----- 
