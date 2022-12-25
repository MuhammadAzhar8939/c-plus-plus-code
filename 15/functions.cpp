#include<iostream>
using namespace std;
int sum(int a, int b); //function prototype 
//this will tell the compilar that sum function will come up

int main() {
    int num1,num2;//these are the actual parameters that will pass values to function
    cout<<"Enter num1 value"<<endl;
    cin>>num1;
    cout<<"Enter num2 value"<<endl;
    cin>>num2;
    cout<<"num1 + num2 = "<<sum(num1,num2)<<endl;//function call
    cout<<__TIME__<<endl;
    return 0;
}
//here a abd b are formal parameter that will use to recevie value from actual parameters
int sum(int a, int b){
    int c=a+b;
    return c;
}