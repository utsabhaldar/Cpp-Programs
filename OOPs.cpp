#include <iostream>
#include <string>
using namespace std;


class Employee{
    public:
    string name;
    int salary;
    string father;
    int age;


    private:
    string username;
    int password;
    int set;

};


int main(){

    Employee Utso;

    Utso.name = "Utsab Haldar";
    Utso.father = "Utpal Haldar";
    Utso.age = 19;
    Utso.salary = 1000;
    // Utso.password =2003;

    cout<<"the name of our first employee is "<<Utso.name<<" and salary is "<<Utso.salary<<endl;
    cout<<"The name of his father is "<<Utso.father<<endl;
    cout<<"His age is "<<Utso.age<<endl;

return 0;

}
