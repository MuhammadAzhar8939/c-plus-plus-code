#include <iostream>
using namespace std;
// step 05
class Y;
// step 01
class X{
    private:
    int data;
    public:
    void setData(int value){
        data=value;
    }
    // step 04
    friend void add(X,Y);//here Y is unknown to compiler to declare it above to access its data
};
// step 02
class Y{
    private:
    int data1;
    public:
    void setData(int value1){
        data1=value1;
    }
    // step 04
    friend void add(X,Y);//friend function
};

// step 03
// make a function that will use both class private data and print sum 
void add(X obj1,Y obj2){
    cout<<"The Sum of Data is : "<<obj1.data+obj2.data1;//now private data is not accessable so make this function friend in both
    
}
int main()
{
    X o1; 
    o1.setData(23);
    Y o2;
    o2.setData(32);
    add(o1,o2);//just call it with out any object's help 
    return 0;
}