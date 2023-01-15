//C++ program to demonstrate the working of a static class member

#include <iostream>
using namespace std;

class item
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount(void)
    {
        cout << "Count :" << count << endl;
    }
};

int item ::count;

int main()
{
    item a, b, c;
    cout<<"Before calling getData()"<<endl;
    cout<<endl;

    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(10);
    b.getData(20);
    c.getData(30);

    cout<<"After reading the data"<<endl;
    cout<<endl;
    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}