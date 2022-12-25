#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)  //expression
    {
    case 17://case
        cout<<"you can not drive"<<endl;
        break;//end the switch if this condition met
    case 18:
        cout<<"you can drive"<<endl;
        break;
    default:
        cout<<"Invalid Age"<<endl;
        break;
    }
   
    
    return 0;
}
