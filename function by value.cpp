#include<iostream>
using namespace std;
void inc(int a){
a++;
cout<<"function value is "<<a<<endl;
}



int main(){
    int x=5;
    inc(x);
    cout<<"main value is "<<x<<endl;
return 0;
}
