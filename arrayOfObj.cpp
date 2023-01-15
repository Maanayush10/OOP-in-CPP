//C++ program to show the array of objects
#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    string name;
    float age;

public:
    void getData(void);
    void putData(void);
};

void Employee ::getData(void)
{
    cout<<endl;
    cout << "Enter the employee details :" << endl;
    cout << "Name of the Employee : \t";
    cin >> name;
    cout << "Age of the Employee : \t";
    cin >> age;
    cout<<endl;
}

void Employee ::putData(void)
{
    cout<<endl;
    cout << "Employee details :" << endl;
    cout << "Name :" << name << endl;
    cout << "Age :" << age << endl;
    cout<<endl;
}

int main()
{
    cout<<"***************************************************"<<endl;
    cout<<"\t*****Welcome *****\t"<<endl;
    Employee emp[5];
    //taking employee details
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<"Employee number "<< i<<endl;
        emp[i].getData();
    }
    
    cout<<endl;
    cout<<"***************************************************"<<endl;
    //showing employee details
     for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<"Employee number "<< i<<endl;
        emp[i].putData();
    }

    return 0;
}