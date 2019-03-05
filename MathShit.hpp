#include <iostream>


class Mathes{
    public:
        Mathes();
        Mathes(int input);
        double squareRoot(double a);
        double powerOfTen(int n);
        void equation(int a,int b,int c);
        int getInput();
    private:
        int m_input;
}; 