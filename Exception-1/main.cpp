#include <iostream>

using namespace std;
//
//Exception: Abnormal Condition / Runtime Error
//
//e.g: 10 / 0 - infinity


int main()
{
    //int a = 11;
    float a = 3.14f;

    try {

        if(a == 3.14f)
            throw 3.14f; // exception throw
        if(a != 10)
             cout<<"This is Valid Value"<<endl;

        cout<<"Try-Block"<<endl;

    }

    catch(int e) // catch the exception
    {
        cout<<"Exception here"<<e<<endl;
    }
    catch(float e)
    {
        cout<<"Exception Here "<<e<<endl;
    }

    return 0;
}
