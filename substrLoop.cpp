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

    
    int i=0;
      for(int j=0;j<=30;j++)
     {
        cout<<name.substr(i,j)<<endl;
     }
    
return 0;

}