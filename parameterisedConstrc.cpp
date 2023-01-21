#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    public:
    Complex(int , int);
    void PrintNumber()
    {
        cout<<a<<"  + i"<<b<<endl;
    }
};
Complex :: Complex(int x, int y) // a default constructor as it takes no parameter
{
    a=x;
    b=y;
}

int main()
{
    //Implicit call
    Complex a(4,6);
    a.PrintNumber();

    //explicit call
    Complex b= Complex(5,7);
    b.PrintNumber();
return 0;
}
