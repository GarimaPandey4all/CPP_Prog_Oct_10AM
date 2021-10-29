#include <iostream>

using namespace std;

class Add
{
private:
    int a, b;

public:
    //default constructor
//    Add()
//    {
//        a = 10;
//        b = 20;
//    }

    //parameterized constructor
//    Add(int x, int y)
//    {
//        a = x;
//        b = y;
//    }

    Add(int a, int b)
    {
//        instance variable = local variable
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout<<(a + b)<<endl;
    }
};

int main()
{
    //this keyword: it holds current object's address/reference

    Add obj(10, 20);

    obj.display();

    return 0;
}
