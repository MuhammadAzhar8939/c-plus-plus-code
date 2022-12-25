#include<iostream>
using namespace std;
int main() {
    int a = 3;//simple integer variable
    int * b;//declaring pointer of type integer
    b=&a;//initilizing pointer with address of a
    cout<<"the address of a is:  "<<&a<<endl;//printing address of (a) using (reference/address operator &)
    cout<<"the address of a is:  "<<b<<endl;//printing address of (a) using pointer which hold's its address
    cout<<"the vlaue of a is  :  "<<a<<endl;//printing value of a
    cout<<"the vlaue of a is  :  "<<*b<<endl;//printing value of (a) using (dereference operator *)


    //Pointer-to-Pointer
    int ** c;//pointer to pointer variable
    c=&b;//it will hold the address of other pointer variable which have address of other variable
    cout<<"\nPointer to Pointer variable\n\n";
    cout<<"address of pointer to pointer variable (C) "<<&c<<endl;
    cout<<"address of pointer variable (b) "<<c<<endl;
    cout<<"address of integer variable stored in pointer b (A) "<<b<<endl;
    cout<<"value stored in (c) is address of (b) "<<c<<endl;
    cout<<"value stored in (b) is address of (a) "<<b<<endl;
    cout<<"value stored in (a) using (b) "<<*b<<endl;
    cout<<"value stored in (a) using (c) "<<**c<<endl;


    return 0;
}