//C++ program to demonstrate constructor overloading
#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    public:
    Complex(void)
    {
        a=0;
        b=0;
    }
    Complex(int x, int y)
    {
        a=x;
        b=y;
    }
    Complex(int x)
    {
        a=x;
        b=0;
    }
    void PrintNumber()
    {
        cout<<a<<"  + i"<<b<<endl;
    }
};

int main(){

    Complex c1(10, 2);
    c1.PrintNumber();

    Complex c2(10);
    c2.PrintNumber();

    Complex c3;
    c3.PrintNumber();

return 0;
}
