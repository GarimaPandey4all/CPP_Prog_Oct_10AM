#include <iostream>

using namespace std;

//1. Function Template

template <class T>
T add(T a, T b)
{
    cout<<"Addition is: "<<(a + b)<<endl;
}

int main()
{
    add(10, 20);

    add(34.67, 78.89);

    add(25.78f, 89.70f);

    return 0;
}
