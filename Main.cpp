#include "MathShit.hpp"

int main()
{
    Mathes* a;
    std::cout<<a->squareRoot(3)<<"\n"<<std::endl;
    a->equation(1,-16,9);
    Mathes *b = new Mathes(1);
    std::cout<<b->getInput();
    system("pause");
    return 0;
    
}