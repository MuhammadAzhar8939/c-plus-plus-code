// function calling it self called Recursion 
//n!=n*(n-1)!  formula
//1!=1 and als0 0!=1
#include <iostream>
using namespace std;
// example 01 
// Factorial 
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    cout<<"Enter number whose factorial is required"<<endl;
    cin>>num;
    cout<<"the factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}