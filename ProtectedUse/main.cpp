#include <iostream>

using namespace std;

class Parent {
protected:
    int rollno;
};

class Child : public Parent {

public:
    Child(int rollno)
    {
          this->rollno = rollno;
    }

    void display()
    {
        cout<<"Roll Number is: "<<rollno<<endl;
    }
};

int main()
{
    Child obj(101);
    obj.display();

    return 0;
}
