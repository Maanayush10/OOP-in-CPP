// Adding the data members of two different classes using friend function

#include<iostream>
using namespace std;

class ABC;

class XYZ
{
    int data;
    public:
    void getData(int x)
    {
        data=x;
    }
    friend void add(ABC, XYZ);
};
class ABC
{
    int data;
    public:
    void getData(int x)
    {
        data=x;
    }
    friend void add(ABC, XYZ);
};

void add(ABC a, XYZ x)
{
    cout<<"The sum of data of both classes are :\t";
    int s= a.data+x.data;

    cout<<s<<endl;
}
int main(){

    ABC a1;
    XYZ x1;

    a1.getData(10);
    x1.getData(100);

    add(a1, x1);

return 0;
}
