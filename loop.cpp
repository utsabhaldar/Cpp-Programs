#include <iostream>
using namespace std;

int main(){

    int i = 0;

    while(i<=20)
    {
        cout<<"The number is : "<<i<<endl;
        i = i+1;
    }

    int j = 0;

    do
    {
      cout<<"The number : "<<j<<endl;
      j = j+1;
    }
     while (j<=10);


    for(int i=0; i<=5; i++)
    {
        cout<<"number is : "<<i<<endl;
    }

    return 0;
}