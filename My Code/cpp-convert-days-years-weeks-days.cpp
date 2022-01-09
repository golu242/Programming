#include<iostream>
using namespace std;
int main(){

int y,d,w;
cout<<"Enter No. of days\n";
cin>>d;
y= d/365;
d=d%365;
w=d/7;
d=d%7;
cout<<"\nNo. of year "<<y<<" \nNo. of week "<<w<<" \nNo. of days "<<d<<"\n";


return 0;
}
