#include<iostream>
#include<string.h>
using namespace std;
int main(){
 char str[100],strl[100],temp;
 int i=0, j=0;

 cout<<"Enter any string\n";
 cin>>str;

 strcpy(strl,str);

 j= strlen(str)-1;
 while(i<j)
 {
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
 }
 cout<<"\nAfter reversing,string ["<<strl<<"] is :["<<str<<"]\n";


return 0;
}
