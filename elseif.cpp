// program of if else statement in cpp

#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    if (age > 120){
        cout<<"Invalid age"<<endl;
    }

    else if (age >= 18)
    {
        cout<<"You can vote"<<endl;
    }
    
    else if (age >= 6)
    {
        cout<<"You are in school"<<endl;
    }

    else 
    {
        cout<<" You are a child "<<endl;
    }

return 0;

}