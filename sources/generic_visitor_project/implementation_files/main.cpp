#include "main.h"

int main(int argc, char** argv)
{

    MyConcreteVisitor visitor;

    DocElement* d = new Index;
    d->Accept(visitor);

    if (d != nullptr)
    {
        delete d;
        d = nullptr;
    }

    return 0;
}
