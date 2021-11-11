#include <iostream>

using namespace std;

//static - variable, function/method

class Student {

private:
    int rollno;
    static int marks;

public:
    void setData(int rollno)
    {
        this->rollno = rollno;
    }

    void getData()
    {
        cout<<rollno<<endl;
        cout<<marks<<endl;
    }
};

int Student :: marks = 500; // static variable initialized

int main()
{
    Student obj;
    obj.setData(100);
    obj.getData();

    return 0;
}
