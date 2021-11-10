#include <iostream>

using namespace std;

class Shape {

public:

    //parent's feature hide
    void shape()
    {
        cout<<"This is a shape Function"<<endl;
    }
};

class Circle : public Shape {

public:

    //overriding
    void shape()
    {
        cout<<"This is a shape of circle class"<<endl;
    }

};

int main()
{
    Circle obj;

    obj.shape();

    return 0;
}
