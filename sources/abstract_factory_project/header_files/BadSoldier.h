#ifndef  BadSoldier_INC
#define  BadSoldier_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "Soldier.h"

namespace GAME_ENEMIES
{

     // =====================================================================================
     //        Class:  BadSoldier
     //  Description:  
     //  =====================================================================================
    class BadSoldier : public Soldier
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  BadSoldier
            //      Method:  BadSoldier :: BadSoldier
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            BadSoldier ();   // constructor

            BadSoldier (const BadSoldier & other);   // copy constructor

            BadSoldier (BadSoldier && other);   // copy-move constructor

            ~BadSoldier ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            BadSoldier& operator= ( const BadSoldier &other ); // assignment operator

            BadSoldier& operator= ( BadSoldier && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class BadSoldier  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef BadSoldier_INC  ----- */
