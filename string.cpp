#include<iostream>
#include<cstring>
using namespace std;
int main(){
char str1[]="dereje";
char str2[]="Tesfaye";
char str3[10];
strcpy(str3,str1);
cout<<"strcpy(str3,str1) "<<str3<<endl;
strcat(str1,str2);
cout<<"strcat(str1,str2) "<<str1<<endl;




return 0;
}
