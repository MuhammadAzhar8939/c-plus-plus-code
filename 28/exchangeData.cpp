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
    void printData(){
        cout<<data<<endl;
    }
    // step 04
    friend void exchange(X&,Y&);//here Y is unknown to compiler to declare it above to access its data
};
// step 02
class Y{
    private:
    int data1;
    public:
    void setData(int value1){
        data1=value1;
    }
      void printData(){
        cout<<data1<<endl;
    }
    // step 04
    friend void exchange(X&,Y&);//friend function
};

// step 03
// make a function that will use both class private data and exchange them will use there addresses to change data 
//here we will use pass by reference(value is accessible) not pass by value(just a copy is accessible) 
void exchange(X &obj1,Y &obj2){
    int temp=obj1.data;
    obj1.data=obj2.data1;
    obj2.data1=temp;    
}
int main()
{
    X o1; 
    o1.setData(23);
    Y o2;
    o2.setData(32);
    cout<<"Before swap Data"<<endl;
    o1.printData();
    o2.printData();
    exchange(o1,o2);//just call it with out any object's help 
    cout<<"After Swap Data"<<endl;
    o1.printData();
    o2.printData();

    return 0;
}