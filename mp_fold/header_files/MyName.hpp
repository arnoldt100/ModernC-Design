#ifndef  Name_INC
#define  Name_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <string>
#include <utility>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//

namespace MCD_MP_FOLD
{

     // =====================================================================================
     //        Class:  Name
     //  Description:  
     //  =====================================================================================
    template<typename T>
    class Name
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  Name
            //      Method:  Name :: Name
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            Name ()
            {
                this->value_ = T.who_am_i();
            	return;
            }   // constructor


            Name (const Name & other)
            {
                this->_value = other.value_;
                return;
            }   // copy constructor

            Name (Name && other)
            {
                this->_value =  std::move(other.value_);
                return;
            }   // copy-move constructor

            virtual ~Name ()
            {
                return;
            }  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            Name& operator= ( const Name &other )
            {
                if ( this != &other)
                {
                    this->_value = other.value_;
                }
                return *this;
            } // assignment operator

            Name& operator= ( Name && other ) // assignment-move operator
            {
                if ( this != &other)
                {
                    this->_value = std::move(other.value_);
                }
                return *this;
            }

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================
            std::string value_;

    }; // -----  end of class Name  -----


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef Name_INC  ----- 
