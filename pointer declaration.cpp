h #include<iostream>
using namespace std;
int main(){
int x=10;
int y=20;
int *ptr=&y;
cout<<"value of x"<<x<<endl;
cout<<"address of x"<<&x<<endl;
cout<<"value of ptr"<<*ptr<<endl;
cout<<"address of ptr"<<ptr<<endl;
return 0;
}
