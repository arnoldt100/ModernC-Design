#ifndef  BadSuperMonster_INC
#define  BadSuperMonster_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "SuperMonster.h"

namespace GAME_ENEMIES
{

     // =====================================================================================
     //        Class:  BadSuperMonster
     //  Description:  
     //  =====================================================================================
    class BadSuperMonster : SuperMonster
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  BadSuperMonster
            //      Method:  BadSuperMonster :: BadSuperMonster
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            BadSuperMonster ();   // constructor

            BadSuperMonster (const BadSuperMonster & other);   // copy constructor

            BadSuperMonster (BadSuperMonster && other);   // copy-move constructor

            ~BadSuperMonster ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            BadSuperMonster& operator= ( const BadSuperMonster &other ); // assignment operator

            BadSuperMonster& operator= ( BadSuperMonster && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class BadSuperMonster  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef BadSuperMonster_INC  ----- */
