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
    class Soldier : Enemy
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

            ~Soldier();  // destructor

            // ====================  ACCESSORS     =======================================

            GAME_ENEMIES::Soldier* DoCreate(MPL::mpl_type2type<GAME_ENEMIES::Soldier>) const
            {
                std::cout << "In DoCreate of Soldier." << std::endl;
                return new Soldier;
            }

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
