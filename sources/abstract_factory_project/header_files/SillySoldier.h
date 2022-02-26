#ifndef  SillySoldier_INC
#define  SillySoldier_INC


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
#include "Soldier.h"

namespace GAME_ENEMIES
{

     // =====================================================================================
     //        Class:  SillySoldier
     //  Description:  
     //  =====================================================================================
    class SillySoldier : Soldier
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  SillySoldier
            //      Method:  SillySoldier :: SillySoldier
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            SillySoldier ();   // constructor

            SillySoldier (const SillySoldier & other);   // copy constructor

            SillySoldier (SillySoldier && other);   // copy-move constructor

            ~SillySoldier ();  // destructor

            // ====================  ACCESSORS     =======================================

            template<typename T>
            T* DoCreate(MPL::mpl_type2type<T>) const
            {
                std::cout << "In DoCreate of SillySoldier." << std::endl;
            } 

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            SillySoldier& operator= ( const SillySoldier &other ); // assignment operator

            SillySoldier& operator= ( SillySoldier && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class SillySoldier  -----


}; // namespace GAME_ENEMIES

#endif   /* ----- #ifndef SillySoldier_INC  ----- */
