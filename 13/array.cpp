#include <iostream>
using namespace std;
int main()
{
    // method 1
    int marks[4] = {23, 45, 86, 98}; // used to store collection of item of similar type
    cout << "Printing array " << endl;
    cout << "marks[0] " << marks[0] << endl;
    cout << "marks[1] " << marks[1] << endl;
    cout << "marks[2] " << marks[2] << endl;
    cout << "marks[3] " << marks[3] << endl;
    // method 2
    cout << "\nPrinting array Method 2\n" << endl;
    int mathMarks[4];
    mathMarks[0]=25;
    mathMarks[1]=35;
    mathMarks[2]=45;
    mathMarks[3]=55;
    cout << "mathMarks[0] " << mathMarks[0] << endl;
    cout << "mathMarks[1] " << mathMarks[1] << endl;
    cout << "mathMarks[2] " << mathMarks[2] << endl;
    cout << "mathMarks[3] " << mathMarks[3] << endl;

    //we can also change the value of array
    mathMarks[3]=888;
    cout<<"\nvalue of mathMarks[4] after changing  "<<mathMarks[3]<<endl;

    // printing mathMarks array using for loop 
    cout<<"\nprinting array using for loop"<<endl;
    for (int i = 0; i < 4; i++)
    {
            cout << "mathMarks "<<i<<" "<< mathMarks[i] << endl;

    }
    // printing mathMarks array using while loop 

    int j=0;
        cout<<"\nprinting array using While loop"<<endl;

    while (j<4)
    {
            cout << "mathMarks "<<j<<" "<< mathMarks[j] << endl;
            j++;
    }
    // printing mathMarks array using do-while loop 

    int k=0;
            cout<<"\nprinting array using Do-While loop"<<endl;

    do{
    cout << "mathMarks "<<k<<" "<< mathMarks[k] << endl;
            k++;

    }while (k<4);
    

    
    
    return 0;
}