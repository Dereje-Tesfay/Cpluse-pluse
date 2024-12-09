
//create a function that reacive two integers maximum of the two.
#include<iostream>
using namespace std;
void max( int x,int y){
if(x>y){
    cout<<"this number is greater: "<<x<<endl;
}
else{
    cout<<"this number is greater: "<<y;
}
}
int main(){
    int x,y;
    cout<<"Enter two a number:"<<endl;
    cin>>x>>y;

max(x,y);
}
