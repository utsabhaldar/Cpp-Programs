#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;



    switch (age)
    {
    case 6:
        cout<<"You are 6 years old"<<endl;
        break;
    
    case 18:
    cout<<"You are 18 years old"<<endl;
    break;
    
    default:
        break;
    }
    
    
    if (age > 120){
        cout<<"Invalid age"<<endl;
    }

    else if (age >= 18)
    {
        cout<<"You are asult"<<endl;
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