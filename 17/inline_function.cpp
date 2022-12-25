// not recommonded
// used to request compilar to execute function at compile time
// just add inline keyword at start
// inline make execution fast 
inline int product(int a, int b)
{
    return a * b;
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
    
    return 0;
}