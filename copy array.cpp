//copy of array
#include<iostream>
using namespace std;
int main(){
int first[]={10,56,70};
int second[3];
for(int i=0;i<3;i++){
    second[i]=first[i];
}
cout<<"copy of array:"<<endl;
for(int i=0;i<3;i++){
    cout<<second[i]<<endl;
}
return 0;
}
