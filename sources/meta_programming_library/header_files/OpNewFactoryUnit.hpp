#ifndef  OpNewFactoryUnit_INC
#define  OpNewFactoryUnit_INC


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
#include "MPLAliases.hpp"

namespace MPL
{

     // =====================================================================================
     //        Class:  OpNewFactoryUnit
     //  Description:  
     //  =====================================================================================
    template <typename ConcreteProduct, typename Base>
    class OpNewFactoryUnit : Base
    {

        private : 
            using BaseProductList = typename Base::ProductList;

        protected:
            using ProductList = mpl_rest<typename Base::ProductList>;

        public:
            using AbstractProduct = mpl_front<typename Base::ProductList>;

            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  OpNewFactoryUnit
            //      Method:  OpNewFactoryUnit :: OpNewFactoryUnit
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            OpNewFactoryUnit ()   // constructor
            {
                return;
            }

            OpNewFactoryUnit (const OpNewFactoryUnit & other) : // copy constructor
                Base(other)
            {
                if (this != &other)
                {

                }
                return;
            }

            OpNewFactoryUnit (OpNewFactoryUnit && other) : // copy-move constructor
                Base(std::move(other))
            {
                if (this != &other)
                {

                }
                return;
            }

            virtual ~OpNewFactoryUnit ()  // destructor
            {
                return;
            }

            // ====================  ACCESSORS     =======================================
            ConcreteProduct* DoCreate(mpl_type2type<AbstractProduct>) const
            {
                return new ConcreteProduct;
            }

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            OpNewFactoryUnit& operator= ( const OpNewFactoryUnit &other ) // assignment operator
            {
                if ( this != &other)
                {
                    Base::operator=(other);
                }
                return *this;
            }

            OpNewFactoryUnit& operator= ( OpNewFactoryUnit && other ) // assignment-move operator
            {
                if (this != &other)
                {
                    Base::operator=(std::move(other));

                }
                return *this;
            }

    }; // -----  end of class OpNewFactoryUnit  -----


}; // namespace MPL

#endif   /* ----- #ifndef OpNewFactoryUnit_INC  ----- */
