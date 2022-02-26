#ifndef  SuperMonster_INC
#define  SuperMonster_INC


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
     //        Class:  SuperMonster
     //  Description:  
     //  =====================================================================================
    class SuperMonster : public Enemy
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  SuperMonster
            //      Method:  SuperMonster :: SuperMonster
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            SuperMonster ();   // constructor

            SuperMonster (const SuperMonster & other);   // copy constructor

            SuperMonster (SuperMonster && other);   // copy-move constructor

            virtual ~SuperMonster ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            SuperMonster& operator= ( const SuperMonster &other ); // assignment operator

            SuperMonster& operator= ( SuperMonster && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class SuperMonster  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef SuperMonster_INC  ----- */
