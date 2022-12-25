#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 45, 86, 98}; // used to store collection of item of similar type
    cout << "Printing array " << endl;
    cout << "marks[0] " << marks[0] << endl;
    cout << "marks[1] " << marks[1] << endl;
    cout << "marks[2] " << marks[2] << endl;
    cout << "marks[3] " << marks[3] << endl;
    // using pointer arthimatics

    int *p = marks;//assinging array[0] index address to pointer after each increment sizeof(datatype) will de added
    //new address=old address + i*sizeof(dataType)
    // for int 
    // p=0 first time 
    //formula p+i=p+i*sizeof(datatype)
    //p+1=0+1*4
    //p+1===>4
    //p+2=0+2*4===>8 similarly other
    cout << "Printing array using pointer" << endl;
    cout << "printing *p " << *p << endl;
    cout << "printing *(p+1) " << *(p + 1) << endl;
    cout << "printing *(p+2) " << *(p + 2) << endl;
    cout << "printing *(p+3) " << *(p + 3) << endl;
    return 0;
}