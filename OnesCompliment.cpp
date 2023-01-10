//C++ program to display OnesCompliment using OOP parardigms
#include<iostream>
#include<string>
using namespace std;

class binary
{
    //private by default
    string s;

    public:
        //methods have to be made public as a general rule
        void read(void)
        {
            cout<<"Enter the binary number : \t";
            cin>>s;
        }

        //checking if the binary format is proper or not
        void chk_bin(void)
        {
            for(int i=0; i<s.length(); i++)
            {
                if(s.at(i)!= '0' && s.at(i)!='1')
                {
                    cout<<"Improper binary format....Program Ending"<<endl;
                    exit(0);
                }
            }
        }
        void Ones(void)     // you don't have to declare any parameter here otherwise, that will become a parameter exclusive to the function
        {
            chk_bin();
            for(int i= 0; i<s.length(); i++)
            {
                if(s.at(i)=='0')
                {
                    s.at(i)= '1';
                }
                else
                {
                    s.at(i)='0';
                }
            }
        }

        //nesting of member functions
        //displays the binary numbers
        void displayOnes(void)
        {
            Ones(); //calling other member function
            cout<<"The 1's complement of the above binary number is :\t";
            cout<<s;
            cout<<endl;
        }
};
int main(){
    binary b;
    b.read();
    b.displayOnes();
return 0;
}
