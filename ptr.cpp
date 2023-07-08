#include <iostream>

using namespace std;

int main()
{
    int a = 19;
    int* ptra;
    ptra = &a;

    cout<<*ptra<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&*ptra<<endl;
    
return 0;
}