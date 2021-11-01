#include <iostream>

//Hybrid - multiple + heirarchical

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};


class Parent2
{
public:
    Parent2()
    {
        cout<<"Parent2 Class"<<endl;
    }
};


//Multiple
class Child1 : public Parent, public Parent2
{
public:
    Child1()
    {
        cout<<"Child1 Class"<<endl;
    }
};

//heirarchical
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
