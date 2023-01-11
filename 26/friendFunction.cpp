//some important point about friend function
//It is not a part of class
//not in scope of class
//still it allow friend function to do anything with private data of class
//it is not a member function of class
//so we cannot call it by using class objects
//inavlid synatx ---> ob1.sumObjectData();
//cannot be invoked by objects of a class
//can still use objects of class as argument/parameter to access class data member
//can be declared in private and also in public part of class
#include <iostream>
using namespace std;
//step 01
//creating class 
class Complex
{
private:
    int a,b;
    // step 03
    friend Complex sumObjectData(Complex c1,Complex c2);//friend function
public:
    void setData(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printData(){
        cout<<"Your Complex number is "<<a<<" + "<<b<<"i"<<endl;
    }


};
//step 02
// create a function that will access the private data of class and add this data of both variable 
// function-data-type +
Complex sumObjectData(Complex c1,Complex c2){
    Complex obj;
    obj.setData((c1.a+c2.a) , (c1.b+c2.b));
    return obj;
}
//now this will produce error since its not the part of class so we have to give it authorty that this can use private data
//for that we will make it friend function of class
// goto class 


int main()
{
    Complex ob1,ob2,sum;
    ob1.setData(2,3);
    ob1.printData();
    ob2.setData(4,5);
    ob2.printData();
    sum=sumObjectData(ob1,ob2);//to call this function no need to use object as it is not part of class
    //still we will use an object to store return value 
    sum.printData();

    
    return 0;
}