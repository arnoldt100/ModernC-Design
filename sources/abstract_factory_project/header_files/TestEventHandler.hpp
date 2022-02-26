#ifndef  TestEventHandler_INC
#define  TestEventHandler_INC

//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <utility>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//

namespace MPL
{

     // =====================================================================================
     //        Class:  TestEventHandler
     //  Description:  
     //  =====================================================================================
    template <typename T,typename Base>
    class TestEventHandler : Base
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  TestEventHandler
            //      Method:  TestEventHandler :: TestEventHandler
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            TestEventHandler ()   // constructor
                : Base()
            {
                return;
            }

            TestEventHandler (const TestEventHandler & other) : // copy constructor
            	Base(other)
            {
                if (this != &other)
                {

                }
                return;
            }

            TestEventHandler (TestEventHandler && other);   // copy-move constructor

            virtual ~TestEventHandler ()  // destructor
            {
            	return;
            }

            // ====================  ACCESSORS     =======================================
            virtual void OnEvent(T &obj);

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            TestEventHandler& operator= ( const TestEventHandler &other ) // assignment operator
            {
            	if (this != &other)
            	{
            		Base::operator=(other);
            	}
            	return *this;
            }

            TestEventHandler& operator= ( TestEventHandler && other ) // assignment-move operator
            {
            	if (this != &other)
            	{
            		Base::operator=(std::move(other));
            	}
            	return *this;
            }

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class TestEventHandler  -----


}; // namespace MPL

#endif   /* ----- #ifndef TestEventHandler_INC  ----- */
