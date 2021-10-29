#include <iostream>

using namespace std;

//encapsulation - wrap all the member variables and member functions
//into a single unit is called encapsulation. example - class

//good encapsulation - data hinding - abstraction - we can make private to data members

class Add
{
//private: // data secure - data hiding - abstraction - good encapsulation
//    int a, b;

public:
    int a, b;

//    void setData(int x, int y) // setter
//    {
//        a = x;
//        b = y;
//    }

    void userInput()
    {
        cout<<"Enter value for a and b:"<<endl;
        cin>>a>>b;
    }

    void display(); // getter

};

void Add :: display()
{
    cout<<"Addition is: "<<(a + b)<<endl;
}


int main()
{
    Add obj;

//    int a, b;
//    cout<<"Enter value for a and b:"<<endl;
//    cin>>a>>b;
//
//    obj.setData(a, b);
//    obj.a = 10;
//    obj.b = 20;

    //obj.setData(12, 10);

    obj.userInput();
    obj.display();

    return 0;
}
