/*
enum is nothing just user-defined datatype 
to assign numaric value to any terminology for further use in program 
program will consider as numaric value but hum can easily read it
*/

#include<iostream>
using namespace std;
int main() {
    enum Meal {breakfast,lunch,dinner};//creation of enum
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    Meal m=lunch;
    if (m==1)
    {
       cout<<"it's lunch time"<<endl;
    }
    
    return 0;
}