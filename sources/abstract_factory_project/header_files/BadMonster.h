#ifndef  BadMonster_INC
#define  BadMonster_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "Monster.h"

namespace GAME_ENEMIES
{

     // =====================================================================================
     //        Class:  BadMonster
     //  Description:  
     //  =====================================================================================
    class BadMonster : Monster
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  BadMonster
            //      Method:  BadMonster :: BadMonster
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            BadMonster ();   // constructor

            BadMonster (const BadMonster & other);   // copy constructor

            BadMonster (BadMonster && other);   // copy-move constructor

            ~BadMonster ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            BadMonster& operator= ( const BadMonster &other ); // assignment operator

            BadMonster& operator= ( BadMonster && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class BadMonster  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef BadMonster_INC  ----- */
