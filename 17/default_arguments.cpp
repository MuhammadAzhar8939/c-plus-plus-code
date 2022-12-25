//default arguments are used to give default value to an argument in function
//if that value is not passed then default value is used each time 
int moneyReceived(int currentMoney, float factor=1.04)
{
    return currentMoney * factor;
}
#include <iostream>
using namespace std;
int main()
{
    
    int money=100000;
    cout << "if you deposite : " <<money<<" you will get : "<<moneyReceived(money)<<" in one year"<< endl;//default argument will use
    cout << "if you deposite : " <<money<<" you will get : "<<moneyReceived(money,1.10)<<" in one year if you are VIP"<< endl;
    
    return 0;
}


// Constant Argument
//if you don't want function to change the value of argument use keyword const with argument
// int moneyReceived(const int currentMoney, float factor=1.04)
