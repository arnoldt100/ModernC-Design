#ifndef  Monster_INC
#define  Monster_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

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
     //        Class:  Monster
     //  Description:  
     //  =====================================================================================
    class Monster : Enemy
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  Monster
            //      Method:  Monster :: Monster
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            Monster ();   // constructor

            Monster (const Monster & other);   // copy constructor

            Monster (Monster && other);   // copy-move constructor

            virtual ~Monster ()=0;  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            Monster& operator= ( const Monster &other ); // assignment operator

            Monster& operator= ( Monster && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class Monster  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef Monster_INC  ----- */
