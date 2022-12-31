#include <iostream>
using namespace std;
// in structure we can not use function but in classes we can use functions
// example of a class
class Employee
{
private:
   int a, b, c; // private member can only be accessed by class and its function from outside you can not use them
   // we will initilize private member using class function
public:
   int d, e; // can be used anywhere in program using object of a class
   // we will initilize public member using object directly
   void setData(int a1, int b1, int c1); // it a way to declare the method initilize is outside the class
   void getData()
   {
      cout << "The value of A is : " << a << endl;
      cout << "The value of B is : " << b << endl;
      cout << "The value of C is : " << c << endl;
      cout << "The value of D is : " << d << endl;
      cout << "The value of E is : " << e << endl;
   }
};
// void--> datatype of function + class name + scope resolution operator + function
void Employee::setData(int a1, int b1, int c1) // initilization of function outside the class using scope resolution operator
{
   a = a1; // setting value of private member using function
   b = b1;
   c = c1;
}

int main()
{
   Employee e1;            // creation ob object
   e1.d = 40;              // using object directly initilizing value of public member
   e1.e = 50;              // using object directly initilizing value of public member
   e1.setData(10, 20, 30); // passing values to public function to initilize private member
   e1.getData();           // calling public function to print data

   return 0;
}
