#include <iostream>

using namespace std;

class Example
{
public:
    static void func()
    {
        cout<<"Static Method"<<endl;
    }
};


int main()
{
    Example :: func(); // called static method

    return 0;
}
