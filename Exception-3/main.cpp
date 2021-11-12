#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    try {

        cout<<"Enter any value for a and b:";
        cin>>a>>b;

        if(b == 0)
        {
            throw b;
        }
        else {
            c = a / b;

            cout<<"Division is: "<<c<<endl;
        }

    }

    catch(...)
    {
        cout<<"System Error. Please connect with System Admin"<<endl;
    }

//    catch(int e)
//    {
//        cout<<"Divide by "<<e<<" error occur"<<endl;
//    }

    return 0;
}
