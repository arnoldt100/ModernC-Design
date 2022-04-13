#ifndef  MOUSEION_Visitor_INC
#define  MOUSEION_Visitor_INC


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
//        Class:  Visitor
//  Description:  
//  =====================================================================================
template <class T, typename R = void>
class Visitor
{
    public:
        // ====================  USING ALIASES =======================================
        using ReturnType = R;

        // ====================  LIFECYCLE     =======================================

        //--------------------------------------------------------------------------------------
        //       Class:  Visitor
        //      Method:  Visitor :: Visitor
        // Description:  
        // 
        //  Parameters: 
        //
        //      Return:
        //--------------------------------------------------------------------------------------
        Visitor ();   // constructor

        Visitor (const Visitor & other);   // copy constructor

        Visitor (Visitor && other);   // copy-move constructor

        virtual ~Visitor ()=0;  // destructor

        // ====================  ACCESSORS     =======================================
        virtual ReturnType visit(T&) const = 0;

        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

        Visitor& operator= ( const Visitor &other ); // assignment operator

        Visitor& operator= ( Visitor && other ); // assignment-move operator

    protected:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  METHODS       =======================================

        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class Visitor  -----


}; // namespace MPL

#endif   // ----- #ifndef MOUSEION_Visitor_INC  ----- 
