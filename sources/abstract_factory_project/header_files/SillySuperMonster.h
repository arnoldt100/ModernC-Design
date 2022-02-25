#ifndef  SillySuperMonster_INC
#define  SillySuperMonster_INC


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
     //        Class:  SillySuperMonster
     //  Description:  
     //  =====================================================================================
    class SillySuperMonster : SuperMonster
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  SillySuperMonster
            //      Method:  SillySuperMonster :: SillySuperMonster
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            SillySuperMonster ();   // constructor

            SillySuperMonster (const SillySuperMonster & other);   // copy constructor

            SillySuperMonster (SillySuperMonster && other);   // copy-move constructor

            ~SillySuperMonster ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            SillySuperMonster& operator= ( const SillySuperMonster &other ); // assignment operator

            SillySuperMonster& operator= ( SillySuperMonster && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class SillySuperMonster  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef SillySuperMonster_INC  ----- */
