#ifndef  main_INC
#define  main_INC

#include "DefineVisitableMacro.h"
#include "BaseVisitable.hpp"
#include <iostream>

class DocElement : public MPL::BaseVisitable<>
{
    public:
        DEFINE_VISITABLE()
};

class Paragraph : public DocElement
{
    public:
        DEFINE_VISITABLE()
};

class MyConcreteVisitor:
    public MPL::BaseVisitor,
    public MPL::Visitor<DocElement>,
    public MPL::Visitor<Paragraph>
{
    public:
        void visit(DocElement&) const
        {
            std::cout << "Visit(DocElement&) " << std::endl;
        }

        void visit(Paragraph&) const
        {
            std::cout << "Visit(Paragraph&) " << std::endl;
        }
};

#endif   // ----- #ifndef main_INC  ----- 
