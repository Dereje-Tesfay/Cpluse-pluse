#include<iostream>
using namespace std;

void increaseprice(double *price){
*price *=1.5;
cout<<price<<endl;//address
}
int main(){
    double price=100;
    increaseprice(&price);
    cout<<price;//value

return 0;
}
