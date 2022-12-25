//Scope Resolution Operator ::  is used to access global variable over local variable 
//by default priority of local is higher 

#include<iostream>
using namespace std;

int a=66;
int main(int argc, char const *argv[])
{
    int a=5;
    cout<<"local variable a = "<<a<<endl;
    cout<<"global variable a = "<<::a<<endl;//using scope resolution operator

    return 0;
}
