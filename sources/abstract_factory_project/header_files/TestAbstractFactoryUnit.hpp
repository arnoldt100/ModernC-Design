#ifndef  TestAbstractFactoryUnit_INC
#define  TestAbstractFactoryUnit_INC


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
//        Class:  TestAbstractFactoryUnit
//  Description:  
//  =====================================================================================
template<typename T>
class TestAbstractFactoryUnit
{
    public:
        // ====================  LIFECYCLE     =======================================

        //--------------------------------------------------------------------------------------
        //       Class:  TestAbstractFactoryUnit
        //      Method:  TestAbstractFactoryUnit :: TestAbstractFactoryUnit
        // Description:  
        // 
        //  Parameters: 
        //
        //      Return:
        //--------------------------------------------------------------------------------------
        TestAbstractFactoryUnit () : // constructor
            aEnemy_ptr (nullptr)
        {
            aEnemy_ptr = new T;
            return;
        }

        TestAbstractFactoryUnit (const TestAbstractFactoryUnit & other) : // copy constructor
           aEnemy_ptr (nullptr) 
        {
            if (this != &other)
            {
                this->aEnemy_ptr = new T(other);
            }
            return;
        }

        TestAbstractFactoryUnit (TestAbstractFactoryUnit && other) : // copy-move constructor
            aEnemy_ptr (nullptr) 
        {
            return;
        }

        virtual ~TestAbstractFactoryUnit () // destructor
        {
            if ( aEnemy_ptr != 0 )
            {
                delete aEnemy_ptr;
            }
            aEnemy_ptr = nullptr;
            return;
        }

        // ====================  ACCESSORS     =======================================

        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

        TestAbstractFactoryUnit& operator= ( const TestAbstractFactoryUnit &other ) // assignment operator
        {
            if (this != &other)
            {

            }
            return *this;
        } // assignment operator

        TestAbstractFactoryUnit& operator= ( TestAbstractFactoryUnit && other ) // assignment-move operator
        {
            if (this != &other)
            {

            }
            return *this;
        } // assignment operator

    protected:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================
        T* aEnemy_ptr;

}; // -----  end of class TestAbstractFactoryUnit  -----


}; // namespace MPL

#endif   /* ----- #ifndef TestAbstractFactoryUnit_INC  ----- */
