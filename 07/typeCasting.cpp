#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=45;
    float b=45.5;
    cout<<a+b<<endl;
    cout<<a+(int)b<<endl;//after typeCasting
    cout<<a+int(b)<<endl;//after TypeCasting
    //similarly with other types if posible
    return 0;
}
