#include <iostream>

using namespace std;

//Inheritance: Parent - Child Relationship
//- Reuseability
//
//Inheritance:
//
//    1. Single Inheritance
//    2. Multiple Inheritance
//    3. Multilevel Inheritance
//    4. Heirarchical Inheritance
//    5. Hybrid Inheritance


//Parent / Base Class
class Parent {
public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};

//Child / Derived Class
class Child : public Parent // inheritance
{
public:
    Child()
    {
        cout<<"Child Class"<<endl;
    }
};

int main()
{
    Child obj;

    return 0;
}
