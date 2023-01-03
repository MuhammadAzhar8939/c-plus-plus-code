// for example we have a company of 100 employee instead of writing thousand of lines to just get employee details like id,
// we can create and array of object and then using loop we can do this task in few lines of code
// here is demonstration by an example
#include <iostream>
using namespace std;
// creation of class Employee
class Employee
{
private:
    int empID;
    string empName;

public:
    void setData()
    {
        cout << "Enter ID of Employee" << endl;
        cin >> empID;
        cout << "Enter name of Employee" << endl;
        cin >> empName;
    }
    void getData()
    {
        cout << "Employee Name is \t:" << empName << endl;
        cout << "Employee ID is \t\t:" << empID << endl;
    }
};

int main()
{
 /*
 //creation of OBJECTs
 Employee e1,e2,e3;
 //calling functions for employee
 e1.setData();
 e1.getData();
 //calling functions for employee
 e2.setData();
 e2.getData();
 //calling functions for employee
 e3.setData();
 e3.getData();
   */

  //now same thing we can do using array of object 
  Employee emp[100];
  for (int i = 0; i < 100; i++)
  {
    emp[i].setData();
    emp[i].getData();
  }

//   will take 100 Employees data with few lines
  
    return 0;
}