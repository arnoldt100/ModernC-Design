#ifndef  MOUSEION_BaseVisitable_INC
#define  MOUSEION_BaseVisitable_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "BaseVisitor.h"
#include "Visitor.hpp"

namespace MPL
{

// =====================================================================================
//        Class:  BaseVisitable
//  Description:  
//  =====================================================================================
template<typename R = void>
class BaseVisitable
{
    public:
        // ====================  USING ALIASES =======================================
        using ReturnType = R;

        // ====================  LIFECYCLE     =======================================

        //--------------------------------------------------------------------------------------
        //       Class:  BaseVisitable
        //      Method:  BaseVisitable :: BaseVisitable
        // Description:  
        // 
        //  Parameters: 
        //
        //      Return:
        //--------------------------------------------------------------------------------------
        BaseVisitable ()   // constructor
        {
            return;
        }

        BaseVisitable (const BaseVisitable & other) // copy constructor
        {
            return;
        }

        BaseVisitable (BaseVisitable && other) // copy-move constructor
        {
            return;
        }

        virtual ~BaseVisitable ()  // destructor
        {
            return;
        }

        // ====================  ACCESSORS     =======================================
        virtual R Accept(BaseVisitor& ) = 0;

        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

        BaseVisitable& operator= ( const BaseVisitable &other ) // assignment operator
        {
            if (this != &other)
            {
        
            }
            return *this;
        }

        BaseVisitable& operator= ( BaseVisitable && other ) // assignment-move operator
        {
            if (this != &other)
            {
        
            }
            return *this;
        }

    protected:
        // ====================  METHODS       =======================================
        template<class T>
        static ReturnType AcceptImpl(T& visited, BaseVisitor& guest)
        {
            if ( Visitor<T,R>* p = dynamic_cast<Visitor<T,R>*>(&guest) )
            {
                return p->visit(visited);
            }
            return ReturnType();
        }

        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class BaseVisitable  -----


}; // namespace MPL

#endif   // ----- #ifndef MOUSEION_BaseVisitable_INC  ----- 
