#include <iostream>

using namespace std;

void func()
{
    static int counter = 0;
    cout<<"Counter is:"<<counter++<<endl;
}


int main()
{
    for(int i = 1; i <= 10; i++)
    {
        func();
    }

    return 0;
}
