#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "CONSTANT EXAMPLE" << endl;
    // Normal
    int a = 4;
    cout << a << endl;
    a = 6; // it can change
    cout << a << endl;
    // Constant
    const int b = 8;
    cout << b << endl;
    // b=9;//it will generate error couse it can't be changed
    cout << b << endl;
    // manipulator in c++
    cout << "Manipulator in C++" << endl;
    // common manipulator in c++ endl is used
    //  we can also use setw(int) from iomanip library
    // it is used to manage the way data will be dispalyed
    int c = 1, d = 12, e = 1234;
    cout << "without manipulator setw" << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << "with manipulator setw" << endl; // it will fix the 4 length for displaying value
    cout << setw(4) << c << endl;
    cout << setw(4) << d << endl;
    cout << setw(4) << e << endl;
    // operator precedence
    //visit c++ operator precedence
    cout << "Operator precedence" << endl;
    int x = 2, y = 5;
    int z=x*5+y-45+76;  //how the expression will solved called operator precedence
    // (* and / then + and - from left to right for this expression)
    cout<<z<<endl;


    return 0;
}
