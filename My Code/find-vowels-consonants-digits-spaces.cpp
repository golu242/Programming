#include<iostream>
#include<string.h>
using namespace std;
int main(){

char line[100];

int i,v,c,ch,d,s,o;
o=v=c=ch=d=s=0;

cout<<"Enter any string\n";
cin>>line;

for(i=0;line[i]!='\0';++i)
{
    if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        v++;
    else if((line[i]>='a'&& line[i]<='z')|| (line[i]>'A'&& line[i]<'Z'))
        ++c;
    else if (line[i]>='0'&& line[i]<='9')
        ++d;
    else if (line[i]==' ')
        ++s;
}

cout<<"\nNumber of vowels, "<<v<<"\n";
cout<<"\nNumber of consonants, "<<c<<"\n";
cout<<"\nNumber of digit,"<<d<<"\n";
cout<<"\nNumber of white spaces,"<<s<<"\n";

return 0;

}
