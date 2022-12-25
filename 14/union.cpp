/*
Union are user defined datatype 
collection of item of different datatype
but Union use share memory and each instance can only use one datatype/veriable at a time 

use to save memory
*/

#include<iostream>
using namespace std;
// creating structure
union money
{
    int rupee;
    float dollor;

};


int main() {
    // creating instance of a union
    // accessing and assigning the amount 
  union money m1;
  m1.dollor=12.24;
  union money m2;
  m2.rupee=2400;
   
    cout<<"m1 will pay in dollar  $="<<m1.dollor<<endl;
    cout<<"m2 will pay in rupee  Rs="<<m1.rupee<<endl;

    return 0;
}