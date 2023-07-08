#include<iostream>
using namespace std;

int main (){
    int a;
    cout<<"enter a number more than 2"<<endl;
    cin>>a;

    if (a<=2){
        cout<<"wrong value"<<endl;
    }
    else if(a%2 == 0){
        cout<<"this is a prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }

    return 0;
}
