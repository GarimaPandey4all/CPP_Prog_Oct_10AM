#include <iostream>  // iostream: input / output stream (flow of data)

using namespace std; // namespace - scope define
// :: - scope resolution operator

int main()
{
    string name; // string is a predefined data type and it is
    //also internally a char[].

    //std::cout << "Hello world!" << std::endl;

    cout<<"Brain Mentors"<<endl; // print output on output screen
    // endl: enter or new line

    //cout and cin both are predefined objects
    cout<<"Enter your name:"; // << - insertion or put to operator
    cin>>name; // take user input // >> - extraction or get from operator

    cout<<"Entered value is: "<<name;

    return 0;
}
