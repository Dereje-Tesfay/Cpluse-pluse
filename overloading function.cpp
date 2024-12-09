
#include<iostream>
using namespace std;
void sum( int x,int y){
int sum=x+y;
cout<<"The sum of two numbers is: "<<sum<<endl;
}
void sum(double x,double y, double z){
double sum=x+y+z;

cout<<"The sum of three numbers is: "<<sum<<endl;
}
int main(){
sum(15,56);
sum(15,56,30);
}
