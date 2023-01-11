// some important point about friend function
// It is not a part of class
// not in scope of class
// still it allow friend function to do anything with private data of class
// it is not a member function of class
// so we cannot call it by using class objects
// inavlid synatx ---> ob1.sumObjectData();
// cannot be invoked by objects of a class
// can still use objects of class as argument/parameter to access class data member
// can be declared in private and also in public part of class

#include <iostream>
using namespace std;

// declaring classes
class Calculator;
class Complex;

// second class whose function i wanna make friend in complex
class Calculator
{
public:
    // below function of this class are not part of complex and connot access privte data of complex so make them friend
    int sumRealComplex(Complex, Complex);
    //    {
    //         int sum =(c1.a+c2.a);    //this will give error since this function use other class data so we will define later
    //    }
    int sumCompComplex(Complex, Complex);
    //    {
    //         int sum =(c1.b+c2.b);    //this will give error since this function use other class data so we will define later
    //    }
};

// step 01
// creating class
//

class Complex
{
private:
    int a, b;
    // step 03
    // friend int Calculator::sumRealComplex(Complex, Complex); // friend function
    // friend int Calculator::sumCompComplex(Complex, Complex); // friend function
    // instead of above we can make whole class as friend if we have to many functions
    friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData()
    {
        cout << "Your Complex number is " << a << " + " << b << "i" << endl;
    }
};

// defining functions of Calculator class
int Calculator::sumRealComplex(Complex c1, Complex c2)
{
    return (c1.a + c2.a);
}
int Calculator::sumCompComplex(Complex c1, Complex c2)
{
    return (c1.b + c2.b);
}

int main()
{
    Complex ob1, ob2;
    ob1.setData(2, 3);
    ob1.printData();
    ob2.setData(4, 5);
    ob2.printData();
    // object of second class that is friend of complex
    Calculator calc;
    int Rsum = calc.sumRealComplex(ob1, ob2);
    cout << "The sum of Real part is " << Rsum << endl;
    int Csum = calc.sumCompComplex(ob1, ob2);
    cout << "The sum of Complex part is " << Csum << endl;

    return 0;
}

// point to note here is that complex class is using calculator class in friend function declaration so we define it above complex
// second calculator class is using object of complex class even it has freind function but compiler have no warranty that you will
// make 2 objects of complex so we have only given declaration in parameter that it will take if there is any, complex object
// after that we will define our function using scope resolator