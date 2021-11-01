#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};

class Child1 : public Parent
{
public:
    Child1()
    {
        cout<<"Child1 Class"<<endl;
    }
};

class Child2 : public Parent
{
public:
    Child2()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child2 obj;
    Child1 obj2;

    return 0;
}
