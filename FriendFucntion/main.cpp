#include <iostream>

using namespace std;

class Complex {

private:
    int real, imag;

public:

    void setData()
    {
        cout<<"Enter value for real and imag";
        cin>>real>>imag;
    }

    void display()
    {
        cout<<real<<"+ i"<<imag<<endl;
    }

    friend Complex sum(Complex, Complex); // friend function declaration
};

Complex sum(Complex a, Complex b)
{
    Complex temp;

    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;

    return temp;
}

int main()
{
    Complex obj1, obj2, obj3;
    obj1.setData();
    obj2.setData();

    obj3 = sum(obj1, obj2);
    obj3.display();

    return 0;
}
