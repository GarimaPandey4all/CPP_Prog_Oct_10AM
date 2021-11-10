#include <iostream>

using namespace std;

namespace first {
    int value = 600;
}

namespace second {

    int value = 1000;

    int func()
    {
        return value;
    }

}


//global variable
int value = 100;

int main()
{
    //local variable
    int value = 500;

    cout<<value<<endl;
    cout<<first::value<<endl;
    cout<<second::value<<endl;
    cout<<second::func()<<endl;

    return 0;
}
