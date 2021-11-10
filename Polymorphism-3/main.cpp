#include <iostream>

using namespace std;

//4 + i10;
//5 + i9;
//
//9 + i19;

class Complex {

private:
    int real, imag;

public:

//    Complex()
//    {
//        real = 0;
//        imag = 0;
//    }

    Complex(int r = 0, int i= 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

};

int main()
{
    Complex obj1(4, 10);
    Complex obj2(5, 9);

    Complex obj3;

    obj3 = obj1 + obj2;

    obj3.print();

    return 0;
}
