#include "main.h"

int main(int argc, char** argv)
{
    MyConcreteVisitor visitor;
    Paragraph par;
    DocElement* d = &par;
    d->Accept(visitor);
    return 0;
}
