#include<iostream>
using namespace std;


float data(float i,float j,float k){

i+=j+k;
return i;
}
void number(float &i,float &j,float &k){
i=data(i,j,k);
}
int main(){
    float x=1.1,y=1.2,z=1;
    number(x,y,z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;
}
