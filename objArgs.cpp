//c++ program to show objects as arguments inside a function

#include <bits/stdc++.h>
using namespace std;

class timeee
{
    int hours;
    int minutes;

public:
    void getTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void putTime(void)
    {
        cout << hours << " hours and " << minutes << " minutes " << endl;
    }

    void sum(timeee, timeee);
};

void timeee ::sum(timeee t1, timeee t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    timeee t1, t2, t3;
    t1.getTime(2,45);
    t2.getTime(4,30);

    t3.sum(t1, t2);

    cout<<"T1 : ";t1.putTime();
    cout<<"T2 : ";t2.putTime();
    cout<<"T3 : ";t3.putTime();


    return 0;
}
