#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Following are some common types of C++ operators

    //  1:Arthimatic Operator
    int a=4,b=5;
    cout<<"Arthimatic Operator in C++\n\n";
    cout<<"A+B = "<<a+b<<endl;//addition
    cout<<"A-B = "<<a-b<<endl;//subtraction
    cout<<"A*B = "<<a*b<<endl;//multiplication
    cout<<"A/B = "<<a/b<<endl;//devision
    cout<<"A%B = "<<a%b<<endl;//modulous
    cout<<"A++ = "<<a++<<endl;//post increment first print then increment
    cout<<"A-- = "<<a--<<endl;//post decrement
    cout<<"++A = "<<++a<<endl;//pre increment
    cout<<"--A = "<<--a<<endl;//pre decrement
    //Assignment Operaton
    //a=4; = is assignment operator used to assign value
    

    //Comparison Operator
    cout<<"Comparison Operator in C++\n\n";
    cout<<"a==b = "<<(a==b)<<endl;//if both equal
    cout<<"a!=b = "<<(a!=b)<<endl;//if not equal
    cout<<"a>=b = "<<(a>=b)<<endl;//greator then or equal to
    cout<<"a<=b = "<<(a<=b)<<endl;//less then or equal to
    cout<<"a>b  = "<<(a>b)<<endl;//greator then
    cout<<"a<b  = "<<(a<b)<<endl;//less then

    //Logical Operator
    cout<<"Comparison Operator in C++\n\n";
    cout<<"a==b && a<b = "<<(a==b && a<b)<<endl;//if both true (And operator &&)
    cout<<"a==b || a<b = "<<(a==b || a<b)<<endl;//if any one true (OR operator ||)
    cout<<"!(a==b) = "<<!(a==b)<<endl;//Reverse the result (NOT operator !)



    return 0;
}
