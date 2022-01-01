
#ifndef  GenerateScatteredHierarchy_INC
#define  GenerateScatteredHierarchy_INC


//--------------------------------------------------------//
//-------------------- System includes -------------------//
//--------------------------------------------------------//
#include <iostream>

//--------------------------------------------------------//
//-------------------- External Library Files ------------//
//--------------------------------------------------------//
#include <boost/mp11.hpp>

//--------------------------------------------------------//
//--------------------- Package includes -----------------//
//--------------------------------------------------------//

namespace MCD_MP_FOLD
{

     // =====================================================================================
     //        Class:  GenerateScatteredHierarchy
     //  Description:  Primary template.
     //  =====================================================================================
    template<typename TypeList, template<typename> typename Unit>
    class GenerateScatteredHierarchy;
    
    template<typename... T, template<typename> typename Unit>
    class GenerateScatteredHierarchy<boost::mp11::mp_list<T...>, Unit>
    {
        public:
            // ====================  LIFECYCLE     =======================================

            //--------------------------------------------------------------------------------------
            //       Class:  GenerateScatteredHierarchy
            //      Method:  GenerateScatteredHierarchy :: GenerateScatteredHierarchy
            // Description:  
            // 
            //  Parameters: 
            //
            //      Return:
            //--------------------------------------------------------------------------------------
            GenerateScatteredHierarchy ()
            {
                std::cout << "The Head element is: TBD" << std::endl;
            }   // constructor

            GenerateScatteredHierarchy (const GenerateScatteredHierarchy & other);   // copy constructor

            GenerateScatteredHierarchy (GenerateScatteredHierarchy && other);   // copy-move constructor

            virtual ~GenerateScatteredHierarchy ();  // destructor

            // ====================  ACCESSORS     =======================================

            // ====================  MUTATORS      =======================================

            // ====================  OPERATORS     =======================================

            GenerateScatteredHierarchy& operator= ( const GenerateScatteredHierarchy &other ); // assignment operator

            GenerateScatteredHierarchy& operator= ( GenerateScatteredHierarchy && other ); // assignment-move operator

        protected:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

        private:
            // ====================  METHODS       =======================================

            // ====================  DATA MEMBERS  =======================================

    }; // -----  end of class GenerateScatteredHierarchy  -----


}; // namespace MCD_MP_FOLD

#endif   // ----- #ifndef GenerateScatteredHierarchy_INC  ----- 
