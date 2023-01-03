//we can also pass objects of a class to functions to use there properties etc similar to other arguments
#include <iostream>
using namespace std;
// creation of class 
class Complex{
    private:
    int a;
    int b;
    public:
    void setData(int n1, int n2)//initilizing variable
    {
        a=n1;
        b=n2;
    }
    void PrintNumber()//printing variable
    {
        cout<<"Your Complex Number is :"<<a<<"+"<<b<<"i"<<endl;// similar to complex number
    }
    void setBySumOfObjectsVar(Complex c1, Complex c2){
        a=c1.a + c2.a;
        b=c1.b + c2.b;
    }
};

int main()
{
    //creation of objects;
    Complex no1,no2,no3;
    no1.setData(4,8);//function call for 1st object
    no1.PrintNumber();//printing our 1st complex number
    //
    no2.setData(2,9);//function call for 2nd object
    no2.PrintNumber();//printing our 2nd complex number
    //
    no3.setBySumOfObjectsVar(no1,no2);//calling function by passing object
    //this function will go to object's first data member and add then and again add second data member of object's
    no3.PrintNumber();//printing our sum of number
    
    return 0;
}