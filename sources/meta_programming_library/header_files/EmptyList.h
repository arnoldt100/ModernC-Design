#ifndef  MOUSEION_EmptyList_INC
#define  MOUSEION_EmptyList_INC


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
     //        Class:  EmptyList
     //  Description:  
     //  =====================================================================================
    class EmptyList
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  EmptyList
            //      Method:  EmptyList :: EmptyList
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            EmptyList ();   // constructor

            EmptyList (const EmptyList & other);   // copy constructor

            EmptyList (EmptyList && other);   // copy-move constructor

            virtual ~EmptyList ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            EmptyList& operator= ( const EmptyList &other ); // assignment operator

            EmptyList& operator= ( EmptyList && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class EmptyList  -----


}; // namespace MPL

#endif   // ----- #ifndef MOUSEION_EmptyList_INC  ----- 