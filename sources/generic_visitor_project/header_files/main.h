#ifndef  main_INC
#define  main_INC

#include "DefineVistableMacro.h"
#include "BaseVisitable.hpp"
#include <iostream>

class DocElement : public BaseVistable<>
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
    public BaseVisitor,
    public Visitor<DocElement>,
    public Visitor<Paragraph>
{
    public:
        void Visit(DocElement&)
        {
            std::cout << "Visit(DocElement&) " << std::endl;
        }

        void Visit(Paragraph&)
        {
            std::cout << "Visit(Paragraph&) " << std::endl;
        }
}

#endif   // ----- #ifndef main_INC  ----- 
