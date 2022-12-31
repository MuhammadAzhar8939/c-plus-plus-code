#include <iostream>
using namespace std;

class shop // class syntax
{
private:
    int itemID[100];    // array of 100 variable/item
    int itemPrice[100]; // array of 100 variable/item
    int count = 0;      // variable to iterate between the array

public:
    void setData(void);      // method to set private data member of a class
    void displayPrice(void); // method to display the prices of items
};

void shop::setData(void) // initilization of function
{                        // getting values from user
    // count+1 is just for user readability
    // itemid[count]-->mean store value at this index of array
    cout << "Enter item ID of Your item NO : " << count + 1 << endl;
    cin >> itemID[count];
    cout << "Enter item Price of Your item NO : " << count + 1 << endl;
    cin >> itemPrice[count];
    // increment to move to next index to store next value without replicating previous
    count++;
}

void shop::displayPrice() // method initilization
{
    for (int i = 0; i < count; i++) // loop through the item of an array
    {
        cout << "Price for itemID : " << itemID[i] << "\tis : " << itemPrice[i] << endl; // printing the value simply
    }
}

int main()
{
    int no; // variable to take input that how many item user wanna store
    cout << "enter number of item you wanna set price \nMust be less then 100" << endl;
    cin >> no;
    shop s1;                     // creation of an object
    for (int i = 0; i < no; i++) // loop through user requirement
    {
        s1.setData(); // call function according to user need to store data
    }
    s1.displayPrice(); // printing data
    return 0;
}