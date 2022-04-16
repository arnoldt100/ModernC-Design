#ifndef  main_INC
#define  main_INC

#include "DefineVisitableMacro.h"
#include "BaseVisitable.hpp"
#include <iostream>

class DocElement : public MPL::BaseVisitable<>
{
    public:
        virtual void who_am_i() const
        {
            std::cout << "I'm a DocElement."; 
        }

        // DEFINE_VISITABLE()
};

class Paragraph : public DocElement
{
    public:
        void who_am_i() const
        {
            std::cout << "I'm a Paragraph DocElement.";
        }

        DEFINE_VISITABLE()
};

class Footnote : public DocElement
{
    public:
        void who_am_i() const
        {
            std::cout << "I'm a Footnote DocElement.";
        }

        DEFINE_VISITABLE()

    protected:
};
class MyConcreteVisitor:
    public MPL::BaseVisitor,
    public MPL::Visitor<DocElement>,
    public MPL::Visitor<Paragraph>,
    public MPL::Visitor<Footnote>
{
    public:
        void visit(DocElement& doc_element) const
        {
            std::cout << "Visit(DocElement&) " << std::endl;
            doc_element.who_am_i();
        }

        void visit(Paragraph& doc_element) const
        {
            std::cout << "Visit(Paragraph&) " << std::endl;
            doc_element.who_am_i();
        }

        void visit(Footnote& doc_element) const
        {
            std::cout << "Visit(Footnote&) " << std::endl;
            doc_element.who_am_i();
        }
};

#endif   // ----- #ifndef main_INC  ----- 
