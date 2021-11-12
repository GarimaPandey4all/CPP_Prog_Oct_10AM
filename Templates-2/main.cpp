#include <iostream>

using namespace std;

//2. Class Templates
template <class T>
class Calculator
{
private:
    T a, b;

public:
    void setData(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    void Calc()
    {
        cout<<"Addition is:"<<(a + b)<<endl;
        cout<<"Subtraction is:"<<(a - b)<<endl;
        cout<<"Multiplication is:"<<(a * b)<<endl;
        cout<<"Division is:"<<(a / b)<<endl;
    }
};


int main()
{
    Calculator<int> obj;
    obj.setData(10, 20);
    obj.Calc();


    Calculator<float> obj2;
    obj2.setData(10.56f, 20.67f);
    obj2.Calc();


    Calculator<double> obj3;
    obj3.setData(10.67, 20.89);
    obj3.Calc();


    return 0;
}
