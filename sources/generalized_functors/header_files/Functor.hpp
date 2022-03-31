#ifndef MOUSEION_Functor_INC
#define MOUSEION_Functor_INC

//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "MPLAliases.hpp"

namespace MPL
{

// =====================================================================================
//        Class:  Functor
//  Description:  
//  =====================================================================================
template<typename Result, typename TypeList >
class Functor
{
    public:
        // ====================  LIFECYCLE     =======================================

        //--------------------------------------------------------------------------------------
        //       Class:  Functor
        //      Method:  Functor :: Functor
        // Description:  
        // 
        //  Parameters: 
        //
        //      Return:
        //--------------------------------------------------------------------------------------
        Functor ()   // constructor
        {
            return;
        }

        Functor (const Functor & other) // copy constructor
        {
            if ( this != &other )
            {
                
            }
            return;
        }

        Functor (Functor && other)   // copy-move constructor
        {
            if ( this != &other )
            {
                
            }
            return;
        }

        virtual ~Functor()  // destructor
        {
            return;
        }

        // ====================  ACCESSORS     =======================================

        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

        Functor& operator= ( const Functor &other ) // assignment operator
        {
            if ( this != &other)
            {

            }
            return *this;
        }

        Functor& operator= ( Functor && other ) // assignment-move operator
        {
            if ( this != &other)
            {

            }
            return *this;
        }

    protected:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class Functor  -----


}; // namespace MPL

#endif // MOUSEION_Functor_INC
