//Table Genrator using loop
#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"Enter Number Whose table you want..."<<endl;
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" * "<<i<<"= "<<num*i<<endl;
        /* code */
    }
    
    
    return 0;
}
