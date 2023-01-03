/* Static data members are class members that are declared using static keywords.
   A static member has certain special characteristics.
   These are: Only one copy of that member is created for the entire class
   and is shared by all the objects of that class,
   no matter how many objects are created.*/

#include <iostream>
using namespace std;
class Employee
{
private:
    int empID;
    static int count; // its only declaration we can not define it here it must be defiend globally outside class
public:
    void setData()
    {
        cout << "Enter Employee ID" << endl;
        cin >> empID;
        count++;
    }
    void getData()
    {
        cout << "Id Of :" << count << " Employee is :" << empID << endl;
    }
};
//defining static member of class
// dataTypeOfVariable + className + scopeResolutionOp + variableName         //by default it is 0
// dataTypeOfVariable + className + scopeResolutionOp + variableName = 1000; //if we want custom start 
int Employee :: count=1000;
int main()
{
    Employee e1, e2, e3;
    e1.setData();
    e1.getData();
    //
    e2.setData();
    e2.getData();
    //
    e3.setData();
    e3.getData();
    return 0;
}