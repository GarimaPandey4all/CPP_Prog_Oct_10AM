#include <iostream>

using namespace std;
//
//In  a Class we have three types of Access Modifiers:
//
//    1. private(by default)
//    2. protected
//    3. public
//
class HelloWorld
// class is just a logical entity,
// class is a category, blueprint, layout, Human, Bird, Animal etc
// class is a collection of similar types of objects
{
//    1. Data Members/Class Variables/Instance Variables
//    2. Member Functions / Methods

private:
    int x; // data member

public:
    void setData() // setter
    {
        x = 10;
    }

    void getData() // getter
    {
        cout<<"x is:"<<x<<endl;
        cout<<"Hello World"<<endl;
    }
};


int main()
{
    //int x;
    HelloWorld obj; // obj - object create - real time entity
    obj.setData();
    obj.getData();

    HelloWorld obj2; // obj - object create - real time entity
    obj2.setData();
    obj2.getData();

    //obj.x = 20; // error as x is private in class

    return 0;
}
