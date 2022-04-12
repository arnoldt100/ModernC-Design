#ifndef  MOUSEION_FunctorImpl_INC
#define  MOUSEION_FunctorImpl_INC


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
//        Class:  GeneralizedFunctorImpl
//  Description:  The template for arbitrary number of args.
//  =====================================================================================
template <typename Result,class... Types>
class GeneralizedFunctorImpl
{
    public:
        virtual Result operator()(Types... args)=0;
        virtual GeneralizedFunctorImpl* Clone() const=0;
        virtual ~GeneralizedFunctorImpl() 
        {
            return;
        }
};

/*

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The primary template.
//  =====================================================================================
template <typename R, class TList>
class FunctorImpl;

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 0 args.
//  =====================================================================================
template <typename R>
class FunctorImpl<R,NullType>
{
    public:
        virtual R operator()()=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 1 args.
//  =====================================================================================
template <typename R,typename P1>
class FunctorImpl<R,mpl_typelist<P1>>
{
    public:
        virtual R operator()(P1)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 2 args.
//  =====================================================================================
template <typename R, typename P1, typename P2>
class FunctorImpl<R,mpl_typelist<P1,P2>>
{
    public:
        virtual R operator()(P1,P2)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 3 args.
//  =====================================================================================
template <typename R, typename P1, typename P2, typename P3>
class FunctorImpl<R,mpl_typelist<P1,P2,P3>>
{
    public:
        virtual R operator()(P1,P2,P3)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 4 args.
//  =====================================================================================
template <typename R, typename P1, typename P2, typename P3, typename P4>
class FunctorImpl<R,mpl_typelist<P1,P2,P3,P4>>
{
    public:
        virtual R operator()(P1,P2,P3,P4)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 5 args.
//  =====================================================================================
template <typename R, typename P1, typename P2, typename P3, typename P4, typename P5>
class FunctorImpl<
                    R,mpl_typelist<P1,P2,P3,P4,P5>
                 >
{
    public:
        virtual R operator()(P1,P2,P3,P4,P5)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 6 args.
//  =====================================================================================
template <
            typename R, typename P1, typename P2, typename P3, typename P4, typename P5,
            typename P6
         >
class FunctorImpl<
                    R,mpl_typelist<P1,P2,P3,P4,P5,P6>
                 >
{
    public:
        virtual R operator()(P1,P2,P3,P4,P5,P6)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 7 args.
//  =====================================================================================
template <
            typename R, typename P1, typename P2, typename P3, typename P4, typename P5,
            typename P6, typename P7
         >
class FunctorImpl<
                    R,mpl_typelist<P1,P2,P3,P4,P5,P6,P7>
                 >
{
    public:
        virtual R operator()(P1,P2,P3,P4,P5,P6,P7)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

// =====================================================================================
//        Class:  FunctorImpl
//  Description:  The partial template specialization for 8 args.
//  =====================================================================================
template <
            typename R, typename P1, typename P2, typename P3, typename P4, typename P5,
            typename P6, typename P7, typename P8
         >
class FunctorImpl<
                    R,mpl_typelist<P1,P2,P3,P4,P5,P6,P7,P8>
                 >
{
    public:
        virtual R operator()(P1,P2,P3,P4,P5,P6,P7,P8)=0;
        virtual FunctorImpl* Clone() const=0;
        virtual ~FunctorImpl() 
        {
            return;
        }
};

*/


}; // namespace MPL

#endif   // ----- #ifndef MOUSEION_FunctorImpl_INC  ----- 
