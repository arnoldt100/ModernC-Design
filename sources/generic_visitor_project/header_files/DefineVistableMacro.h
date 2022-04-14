#ifndef  DefineVistableMacro_INC
#define  DefineVistableMacro_INC

#define DEFINE_VISITABLE \
    virtual ReturnType Accept(BaseVisitor & guest) \
{ \
    return AcceptImpl( *this, guest); \
} \

#endif   // ----- #ifndef DefineVistableMacro_INC  ----- 