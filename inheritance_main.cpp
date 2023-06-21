
#include "inheritance_main.hpp"

int main()
{
    Rose r1;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");
    
    cout<<"r1 blooms in "<<r1.getBloomTime()<<", "<<r1.getFragrance();
    return 0;
}