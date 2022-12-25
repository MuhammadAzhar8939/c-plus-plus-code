// Initilized only once
// maintain the value /they can store the value in function
//
int product(int a, int b)
{
    static int c = 0;//execute only once
    c = c + 1;//jab dosri bar control aye ga c k pass already 1 store ho ga jab 3rd time aye ga to uss k pass 2 store ho ga
    return (a + c) * b;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter value of a" << endl;
    cin >> a;
    cout << "enter value of b" << endl;
    cin >> b;
    cout << "product of a and b is = " << product(a, b) << endl;
    cout << "product of a and b is = " << product(a, b) << endl;
    cout << "product of a and b is = " << product(a, b) << endl;
    cout << "product of a and b is = " << product(a, b) << endl;
    cout << "product of a and b is = " << product(a, b) << endl;

    return 0;
}