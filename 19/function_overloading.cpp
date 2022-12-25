#include<iostream>
using namespace std;
// volume of cube s^3---->side
int volume(int s){
    return (s*s*s);
}

// volume of slndr pir^2h---->pi,radius,hight
int volume(int r,int h){
    return (3.14*r*r*h);
}

// volume of rectangular cube h*l*w --->hight,length,width
int volume(int h,int l,int w){
    return (h*l*w);
}
int main() {
    cout<<"volume of a cube with hight=3 is "<<volume(3)<<endl;
    cout<<"volume of a Rectangular cube with hight=3 length=4,width=7 is "<<volume(3,4,7)<<endl;
    cout<<"volume of a slndr with radius=2 hight=3 is "<<volume(2,3)<<endl;
    return 0;
}