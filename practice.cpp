// // this is a c++ programing

// #include <iostream>

// using namespace std;

// int main(){

//     cout<<"Hello World "<<endl;

//     cout<<"You are saying Hello to the World"<<endl;

//     return 0;
// }






// // the sum of 2 number

// #include <iostream>

// using namespace std;

// int main(){

// int a,b;
// cout<<"Enter the value of a: "<<endl;
// cin>>a;

// cout<<"Enter the value of b: "<<endl;
// cin>>b;

// cout<<"The sum is: "<< a+b;

// return 0;

// }





// #include<iostream>
// using namespace std;

// int main()
// {   
//     float a,b;
//     cout<<"Enter the value of a: "<<endl;
//     cin>>a;

//     cout<<"Enter the value of b: "<<endl;
//     cin>>b;

//     cout<<"a + b = "<<a+b<<endl;
//     cout<<"a - b = "<<a-b<<endl;
//     cout<<"a * b = "<<a*b<<endl;
//     cout<<"a / b = "<<a/b<<endl;
    
// return 0;

// };






// // this is a basic cpp programming of declaring the variables

// #include <iostream>

// using namespace std;

// int main(){

//     int a = 25;
//     float b = 30;
//     double c = 35;
//     short d = 40;
//     long e = 45;
//     long long f = 50; 

//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<d<<endl;
//     cout<<e<<endl;
//     cout<<f<<endl;

//     return 0;
// }







// // changing the value of the variable in cpp

// #include <iostream>

// using namespace std;

// int main(){

//     int a = 25;
//     float b = 30;
//     double c = 35;
//     short d = 40;
//     long e = 45;
//     long long f = 50;

//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<d<<endl;
//     cout<<e<<endl;
//     cout<<f<<endl;


//     a = 1;
//     b = 2;
//     c = 3;
//     d = 4;
//     e = 5;
//     f = 6;


//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<d<<endl;
//     cout<<e<<endl;
//     cout<<f<<endl;

//     return 0;
// }






// // program of if else statement in cpp

// #include <iostream>
// using namespace std;

// int main(){

//     int age;
//     cout<<"Enter your age : "<<endl;
//     cin>>age;

//     if (age > 120){
//         cout<<"Invalid age"<<endl;
//     }

//     else if (age >= 18)
//     {
//         cout<<"You are asult"<<endl;
//         cout<<"You can vote"<<endl;
//     }
    
//     else if (age >= 6)
//     {
//         cout<<"You are in school"<<endl;
//     }

//     else 
//     {
//         cout<<" You are a child "<<endl;
//     }

// return 0;

// }






// // swith case in finding the tpye of marks iusing cpp

// #include <iostream>
// using namespace std;

// int main(){

//     int marks;
//     cout<<"Enter the marks : "<<endl;
//     cin>>marks;

//     switch(marks)
//     {
//         case 5:
//         cout<<"This is assignment marks."<<endl;
//         break;
        

//         case 30:
//         cout<<"This is sessional marks."<<endl;
//         break;

//         case 70:
//         cout<<"This is written exam marks."<<endl;
//         break;

//         default:
//         cout<<"Invalid marks"<<endl;
//     }

// cout<<"Full marks is 100"<<endl;

// return 0;

// }








// // loops using cpp

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 0;

//     while(i<=20)
//     {
//         cout<<"The number is : "<<i<<endl;
//         i = i+1;
//     }

//     int j = 0;

//     do
//     {
//       cout<<"The number : "<<j<<endl;
//       j = j+1;
//     }
//      while (j<=10);


//     for(int i=0; i<=5; i++)
//     {
//         cout<<"number is : "<<i<<endl;
//     }

//     return 0;
// }







// // substr program in cpp  
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string name;

//     cout<<"Enter your name : "<<endl;
//     cin>>name;

//     cout<<"Your name is : "<<name<<endl;

//     cout<<"The length of your name is : "<<name.length()<<endl;

//     cout<<name.substr(0)<<endl;
//     cout<<name.substr(0,1)<<endl;
//     cout<<name.substr(0,2)<<endl;
//     cout<<name.substr(0,3)<<endl;
//     cout<<name.substr(0,4)<<endl;
//     cout<<name.substr(0,5)<<endl;

    
//     int i=0;
//       for(int j=0;j<=5;j++)
//      {
//         cout<<name.substr(i,j)<<endl;
//      }
    



// return 0;
// }






// // pointer in cpp
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a = 19;
//     int* ptra;
//     ptra = &a;

//     cout<<*ptra<<endl;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<&*ptra<<endl;
    
// return 0;
// }







// OOPs in cpp

#include <iostream>
#include <string>
using namespace std;


class Employee{
    public:
    string name;
    int salary;
    string father;
    int age;


};


int main(){

    Employee Utso;

    Utso.name = "Utsab Haldar";
    Utso.father = "Utpal Haldar";
    Utso.age = 19;
    Utso.salary = 1000;

    cout<<"the name of our first employee is "<<Utso.name<<" and salary is "<<Utso.salary<<endl;
    cout<<"The name of his father is "<<Utso.father<<endl;
    cout<<"His age is "<<Utso.age<<endl;

return 0;

}






