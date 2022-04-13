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

namespace MPL
{

// =====================================================================================
//        Class:  BaseVisitable
//  Description:  
//  =====================================================================================
class BaseVisitable
{
    public:
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

        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class BaseVisitable  -----


}; // namespace MPL

#endif   // ----- #ifndef MOUSEION_BaseVisitable_INC  ----- 
