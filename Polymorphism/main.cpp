#include <iostream>

using namespace std;
//
//polymorphism:
//
//    poly - many and morphism - forms
//
//    example: person - employee, student, son, uncle, brother etc
//
//    2 types of polymorphism:
//
//        1. compile time polymorphism
//        a) function overloading and b) function overriding
//
//        2. runtime polymorphism
//        a) operator overloading

class Overloading{

private:
    int a, b;

public:
    void Add()
    {
        a = 10;
        b = 20;
    }

    void Add(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout<<"Addition is:"<<(a + b)<<endl;
    }
};

int main()
{
    Overloading obj;

    obj.Add();
    obj.display();

    obj.Add(30, 50);
    obj.display();

    return 0;
}
