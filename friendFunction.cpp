//C++ program to demonstrate the use of friend function
//Calculating mean
#include<iostream>
using namespace std;
class sample
{
    int a, b;
    public :
    void getValue(void)
    {
        cout<<"Enter the value of a :\t";
        cin>>a;
        cout<<"Enter the value of b :\t";
        cin>>b;
    }
    friend float mean(sample);
};

float mean(sample s)
{
    float m=(s.a+s.b)/2;
    return m;
}
int main(){
    sample s1;
    s1.getValue();
    float m=mean(s1);
    cout<<"Mean :\t";
    cout<<m<<endl;

return 0;
}
