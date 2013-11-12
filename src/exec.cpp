#include "AnEnum.h"
#include "enumostreambug/AMessage.h"
#include <iostream>

namespace enumostreambug 
{
    class AClass 
    {
    public:
        AClass() {}
                  
        void print(const anamespace::AnEnum & f) { std::cout << f << std::endl; }
    };
}

int main()
{
    anamespace::AnEnum st = anamespace::ST_OK;

    std::cout << st << std::endl;
    enumostreambug::AClass foo;
    foo.print(st);

    return 0;
}
