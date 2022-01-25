#include<iostream>
using namespace std;
int main(){
int i, count=0;
char ch[50];
cout<<"\nEnter any string\n";
cin>>ch;

for(i=0;ch[i]!='\0' ;i++)

{
    count++;
}

cout<<"\nThe length of string ["<<ch<<"] is, "<<count<<"\n";

return 0;
}
