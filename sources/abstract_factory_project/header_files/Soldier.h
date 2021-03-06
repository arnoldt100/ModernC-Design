#ifndef  Soldier_INC
#define  Soldier_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <iostream>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "enemy.h"

namespace GAME_ENEMIES
{

     // =====================================================================================
     //        Class:  Soldier
     //  Description:  
     //  =====================================================================================
    class Soldier : public Enemy
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  Soldier
            //      Method:  Soldier :: Soldier
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            Soldier ();   // constructor

            Soldier (const Soldier & other);   // copy constructor

            Soldier (Soldier && other);   // copy-move constructor

            virtual ~Soldier()=0;  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            Soldier& operator= ( const Soldier &other ); // assignment operator

            Soldier& operator= ( Soldier && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class Soldier  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef Soldier_INC  ----- */
