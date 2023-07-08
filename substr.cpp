#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout<<"Enter your name : "<<endl;
    cin>>name;

    cout<<"Your name is : "<<name<<endl;

    cout<<"The lenth of your name is : "<<name.length()<<endl;

    cout<<name.substr(0)<<endl;
    cout<<name.substr(0,1)<<endl;
    cout<<name.substr(0,2)<<endl;
    cout<<name.substr(0,3)<<endl;
    cout<<name.substr(0,4)<<endl;
    cout<<name.substr(0,5)<<endl;


return 0;
}