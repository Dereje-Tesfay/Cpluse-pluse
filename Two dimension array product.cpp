#include<iostream>
using namespace std;
int main()
{
int z;
int num[2][3]={{2,4,5},{3,6,7}};
int temp[2][3]={{10,20,30},{90,470,27}};
int pro[2][3];
for(int i=0;i<2;i++){

    for(int j=0;j<3;j++){


       pro[i][j]= num[i][j]*temp[i][j];
    }
}
for(int i=0;i<2;i++){

    for(int j=0;j<3;j++){

 cout<<pro[i][j]<<endl;
    }
}
return 0;
}
