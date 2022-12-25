// function calling it self called Recursion 
//to find nth term formula is nth_term=(n-2)+(n-1)
// first and second terms are always 1,1
#include<iostream>
using namespace std;
int fibonacci(int n){
    if (n<2)
    {
        return 1;
    }
    else{
        return (fibonacci(n-2)+fibonacci(n-1));
    }
    
}

int main() {
     int num;
    cout<<"Enter term you wanna find"<<endl;
    cin>>num;
    cout<<"the "<<num<<" term is "<<fibonacci(num)<<endl;
    return 0;
}