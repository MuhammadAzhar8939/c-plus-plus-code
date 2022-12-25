#include <iostream>
using namespace std;
// call by value
void swapval(int a, int b)
{ // iss main hum variable ki copy ko swap kar rahy
    int temp = a;
    a = b;
    b = a;
}

// call by pointer reference
void swapRef(int *a, int *b)
{ // iss main pointer ki maded say address par ponch k actual variable ko use kar rahy
    int temp = *a;
    *a = *b;
    *b = temp;
}

// using Reference variable
void swapRefVar(int &a, int &b)
{ // iss main hum actual variable k address ko hi nick name/second name k through use kar rahy
    int temp = a;
    a = b;
    b = temp;
}
// using Reference variable and return reference
int &swapRefVar2(int &a, int &b)
{ // iss main hum actual variable k address ko hi nick name/second name k through use kar rahy
    // aur ik variable ko wapis bhi kar arhy nick name say
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int a = 4, b = 5;
    // call by value
    cout << "swaping using call by value" << endl; // this will not swap since copy of actual variable is used by function
    cout << "Value of a is " << a << " Value of b is " << b << endl;
    swapval(a, b); // passing values
    cout << "Value of a is " << a << " Value of b is " << b << endl;

    // call by Pointer Reference
    cout << "swaping using call by Pointer Reference" << endl; // this will  swap actual variable's address is used by function
    cout << "Value of a is " << a << " Value of b is " << b << endl;
    swapRef(&a, &b); // passing addresses
    cout << "Value of a is " << a << " Value of b is " << b << endl;

    // call by Reference Variable//ik hi variable ko dusra name say access kia ja raha &a =h;
    cout << "swaping using call by Reference Variable" << endl; // this will  swap actual variable's by another name are referenced by function
    cout << "Value of a is " << a << " Value of b is " << b << endl;
    swapRefVar(a, b); // passing variables
    cout << "Value of a is " << a << " Value of b is " << b << endl;

    // call by Reference Variable//ik hi variable ko dusra name say access kia ja raha &a =h;
    cout << "swaping using call by Reference Variable" << endl; // this will  swap actual variable's by another name are referenced by function
    cout << "Value of a is " << a << " Value of b is " << b << endl;
    swapRefVar2(a, b) = 777; // passing variables and assignig the 777 to variable that function will return
    cout << "Value of a is " << a << " Value of b is " << b << endl;
    return 0;
}