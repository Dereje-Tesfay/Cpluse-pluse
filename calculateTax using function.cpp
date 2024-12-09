#include<iostream>
using namespace std;
void calculateTax( double income,double taxRate){
int tax=taxRate*income;
cout<<"The tax is :"<<tax;
}
int main(){
    double income,taxRate;
    cout<<"Enter taxRate :"<<endl;
    cin>>taxRate;
     cout<<"Enter income :"<<endl;
     cin>>income;

calculateTax(income,taxRate);
}
