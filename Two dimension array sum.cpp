#include<iostream>
using namespace std;
int main()
{

int num[2][3]={{2,4,5},{3,6,7}};
int temp[2][3]={{10,20,30},{90,470,27}};
int sum[2][3];
for(int i=0;i<2;i++){

    for(int j=0;j<3;j++){


       sum[i][j]= num[i][j]+temp[i][j];
    }
}
for(int i=0;i<2;i++){

    for(int j=0;j<3;j++){

 cout<<sum[i][j]<<endl;
    }
}
return 0;
}
