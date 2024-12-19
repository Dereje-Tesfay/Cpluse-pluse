
//exersice__1
#include<iostream>
using namespace std;
int main(){
int x=10;
int y=20;
int*ptr=&x;
*ptr *=2;
ptr =&y;
*ptr *=3;
cout <<"value of x :"<<&x<<endl; //output is 20
cout<<"value of y :"<<y<<endl; //output is 60
return 0;
}
