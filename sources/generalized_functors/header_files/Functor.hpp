#ifndef MOUSEION_Functor_INC
#define MOUSEION_Functor_INC

//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <memory>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "FunctorImpl.hpp"

namespace MPL
{

// =====================================================================================
//        Class:  Functor
//  Description:  
//  =====================================================================================
template<typename Result, class... Types >
class Functor
{
    private: 
        using Impl = GeneralizedFunctorImpl<Result,Types...>;

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

        explicit Functor(std::unique_ptr<Impl> spImpl)
        {
            this->spImpl_ = std::move(spImpl);
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

        Result operator()( Types... args)
        {
            return (*spImpl_)( args... );
        }

    protected:

        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  Alases        =======================================

        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================
        std::unique_ptr<Impl> spImpl_;

}; // -----  end of class Functor  -----


}; // namespace MPL

#endif // MOUSEION_Functor_INC
