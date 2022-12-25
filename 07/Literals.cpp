#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<sizeof(32.2)<<endl;//by default Double
    cout<<sizeof(32.2f)<<endl;//float
    cout<<sizeof(32.2F)<<endl;//float
    cout<<sizeof(32.2l)<<endl;//long double
    cout<<sizeof(32.2L)<<endl;//long double
    return 0;
}
