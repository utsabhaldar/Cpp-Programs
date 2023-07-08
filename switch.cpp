// switch case in finding the tpye of marks using cpp

#include <iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter the marks : "<<endl;
    cin>>marks;

    switch(marks)
    {
        case 5:
        cout<<"This is assignment marks."<<endl;
        break;
        

        case 30:
        cout<<"This is sessional marks."<<endl;
        break;

        case 70:
        cout<<"This is written exam marks."<<endl;
        break;

        default:
        cout<<"Invaid marks"<<endl;
    }

cout<<"Full marks is 100"<<endl;

return 0;

}