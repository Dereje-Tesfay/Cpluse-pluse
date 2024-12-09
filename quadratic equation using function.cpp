#include<iostream>
#include<cmath>
using namespace std;
void qua(double a,double b,double c){

double q;
q=b*b-4*a*c;
if(q>0){
    double root1 =(-b+sqrt(q))/(2*a);
    double root2 =(-b-sqrt(q))/(2*a);
    cout<<"root1 is"<<root1<<endl;
    cout<<"root2 is"<<root2<<endl;
}
else if(q==0){
    double root=(-b/(2*a));
    cout<<"root is"<<root<<endl;
}
else{
    cout<<"their is no root!";
}
}
int main(){
int a,b,c;
cout<<"Enter a,b and c"<<endl;
cin>>a>>b>>c;
qua(a,b,c);
return 0;
}
