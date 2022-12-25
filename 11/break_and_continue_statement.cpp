#include<iostream>
using namespace std;
int main() {
    //Break Statement
    cout<<"Break statement will exit the control from loop"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if(i==4){
            cout<<"condition met at 4 so breaking the loop using break statement\n\n";
            break;
        }
        cout<<i<<endl;
    }
    //Continue Statement
     cout<<"Continue statement will Skip That particular itration loop will not be terminated"<<endl;
    for (int j = 0; j < 10; j++)
    {
        if(j==4){
            cout<<"this number is skiped through continue statemant\n";
            continue;
        }
        cout<<j<<endl;
    }
    
    return 0;
}