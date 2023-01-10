//Classes and objects

#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getData(int a, float b);

    void putData(void)
    {
        cout << "Number :" << number << endl;
        cout << "Cost :" << cost << endl;
    }
};

void item ::getData(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item X, Y;
    int a, c;
    float b, d;
    cout<<"Enter the number and cost of X : \t";
    cin>>a>>b;

    X.getData(a, b);
    cout<<"Enter the number and cost of Y : \t";
    cin>>c>>d;
    Y.getData(c,d);

    cout<<"Object X: "<<endl;
    X.putData();
    cout<<endl;

    cout<<"Object Y: "<<endl;
    Y.putData();
    cout<<endl;
    return 0;
}
