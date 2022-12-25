//Local variable have higer priority in in its scope 
//local can only be used inside function
//global can be used any where


#include<iostream>
using namespace std;
int a=99;   //global variable
void sum(){
    cout<<"\nvalue of a Sub-Function= "<<a;//gloabel variable's value will be printed
}
int main(int argc, char const *argv[])
{
    int a=1;    //local variable
    cout<<"a = "<<a;//local variable value will be printed
    sum();//calling function
    a=12;//it will change the value of local variable
    cout<<"\na = "<<a;//local
    

    return 0;
}
