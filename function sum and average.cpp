//sum and average using function
#include<iostream>
using namespace std;
void sum(float x,float y,float z){
int sum =x+y+z;
int average=sum/3;
cout<<"Sum of x,y and z: "<<sum<<endl;
cout<<"Average of x,y and z  "<<average<<endl;
}
int main(){
    float x,y,z;
    cout<<"Enter Three Numbers:";
    cin>>x>>y>>z;
    sum(x,y,z);
}
