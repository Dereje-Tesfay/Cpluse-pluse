
//sort array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int arr[5];
cout<<"Enter a Number of Array:"<<endl;

for(int i=0;i<5;i++){
    cin>>arr[i];
}

sort(arr,arr+5);//5 is number

cout<<"sort of array is:"<<endl;
for(int i=0;i<5;i++){
    cout<<"index\t"<<i<<"\t"<<arr[i]<<endl;
}
return 0;
}
