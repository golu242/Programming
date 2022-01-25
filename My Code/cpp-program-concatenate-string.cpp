#include<iostream>
#include<string.h>
using namespace std;
int main(){

char str[100],strl[100];

cout<<"Enter first string\n";
cin>>str;
cout<<"Enter second string\n";
cin>>strl;

strcat(str,strl);
cout<<"After concatenating of string is, ["<<str<<"]\n";

return 0;

}
