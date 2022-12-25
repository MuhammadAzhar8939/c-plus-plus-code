// reference variable means pointing same thing/value with different name 
// like ali_hassan-->hafiz-->coder-->molvi-->analyst-->hacker

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=344;//orignal variable
    int &b=a;//reference variable 
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
