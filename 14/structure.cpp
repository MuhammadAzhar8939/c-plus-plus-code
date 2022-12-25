/*
structure are user defined datatype 
collection of item of different datatype
*/

#include<iostream>
using namespace std;
// creating structure
struct employee
{
    int eid;
    float salary;
   
};

int main() {
    // creating instance of a structure
    struct employee em1;
    // accessing and assigning the employee id and salary to em1
    em1.eid=1;
    em1.salary=22212.3;
    cout<<"employee em1 id is "<<em1.eid<<endl;
    cout<<"employee em1 salary is "<<em1.salary<<endl;

    return 0;
}