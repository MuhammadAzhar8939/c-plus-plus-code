//similar to static data member we can make static function
//that can only access static member of class not other
// can be directly called by class name
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
        cout<<"Id Of Employee is :"<< empID << endl;
    }
    static void countPrint(){
        cout<<"Now we have \t"<<count<<"\t Employees"<<endl;
        // cout<<empID;//through error cause its not static member 
    }
};

//defining static member of class
// dataTypeOfVariable + className + scopeResolutionOp + variableName         //by default it is 0
// dataTypeOfVariable + className + scopeResolutionOp + variableName = 1000; //if we want custom start 
int Employee :: count;
int main()
{
    Employee e1, e2, e3;
    e1.setData();
    e1.getData();
    Employee::countPrint();//directly calling static function of class
    //
    e2.setData();
    e2.getData();
    Employee::countPrint();//directly calling static function of class12
    //
    e3.setData();
    e3.getData();
    Employee::countPrint();//directly calling static function of class
    return 0;
}