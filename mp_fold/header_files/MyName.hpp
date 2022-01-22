#ifndef  MyName_INC
#define  MyName_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <string>
#include <utility>
#include <iostream>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//
#include "MPLAliases.hpp"

namespace MCD_MP_FOLD
{

     // =====================================================================================
     //        Class:  MyName
     //  Description:  
     //  =====================================================================================
    template<typename T>
    class MyName
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  MyName
            //      Method:  MyName :: MyName
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            MyName () :
                aPerson_()
            {
                this->value_ = aPerson_.who_am_i();
            	return;
            }   // constructor


            MyName (const MyName & other) :
                aPerson_(other.aPerson_),
                value_( other.value_)
            {
                return;
            }   // copy constructor

            MyName (MyName && other) :
                aPerson_(std::move(other.aPerson_)),
                value_(std::move(other.value_))
            {
                return;
            }   // copy-move constructor

            virtual ~MyName ()
            {
                return;
            }  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            MyName& operator= ( const MyName &other )
            {
                if ( this != &other)
                {
                    this->aPerson_=other.aPerson_;
                    this->value_ = other.value_;
                }
                return *this;
            } // assignment operator

            MyName& operator= ( MyName && other ) // assignment-move operator
            {
                if ( this != &other)
                {
                    this->aPerson_=std::move(other.aPerson_);
                    this->value_ = std::move(other.value_);
                }
                return *this;
            }

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================
            T aPerson_;
            std::string value_;

    }; // -----  end of class MyName  -----


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef MyName_INC  ----- 
