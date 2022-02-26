#ifndef  SillyMonster_INC
#define  SillyMonster_INC


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
     //        Class:  SillyMonster
     //  Description:  
     //  =====================================================================================
    class SillyMonster : public Monster
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  SillyMonster
            //      Method:  SillyMonster :: SillyMonster
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            SillyMonster ();   // constructor

            SillyMonster (const SillyMonster & other);   // copy constructor

            SillyMonster (SillyMonster && other);   // copy-move constructor

            ~SillyMonster ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            SillyMonster& operator= ( const SillyMonster &other ); // assignment operator

            SillyMonster& operator= ( SillyMonster && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class SillyMonster  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef SillyMonster_INC  ----- */
