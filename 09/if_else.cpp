#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18 && age>0){
        cout<<"you can not drive"<<endl;
    }else if (age>=18 && age <=100)
    {
        cout<<"you can drive"<<endl;
    }else{
        cout<<"Invalid Age"<<endl;
    }
    
    return 0;
}
