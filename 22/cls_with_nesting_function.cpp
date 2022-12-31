// classes and objects
// classes are extension of structure
// due to limitation --> like public data in structure , no methods
// classes have private and public members
// here we will see an example of nesting function using class
// Nesting function is function-call with-in a function
#include <iostream>  //header files
using namespace std; // standard library

class binary // syntax of class declartion
{
private: // these can only be used by this class
         // secure data
    string num;
    void chk_binary();

public: // can be used from outside the class
    void read();
    void display();
    void ones_complement();
};

void binary::read() // function to take input from user
{
    cout << "Enter a Number : ";
    cin >> num;
}

void binary::chk_binary() // function to check whether number is binary or not
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '0' || num.at(i) == '1')
        {
            // cout<<"\nCongratulations! Number is Binary"<<endl;//it will be printed as many time as loop
            continue; // exit this iteration only
        }
        else
        {
            exit(0);
        }
    }
}
void binary::display() // displaying binary number
{
    cout << "\nBinary number is : " << num << endl;
}
void binary::ones_complement() // altering binary number
{
    chk_binary(); // calling of private member using same class function
    // nested function/
    // to check if number is binary
    // if not it will end the program here
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '0')
        {
            num[i] = '1';
        }
        else if (num.at(i) == '1')
        {
            num.at(i) = '0';
        }
    }
}
int main()
{
    binary b1; // object creation
    // function calls
    b1.read();
    b1.display();
    b1.ones_complement();
    cout << "\nAfter complement" << endl;
    b1.display();

    return 0;
}
