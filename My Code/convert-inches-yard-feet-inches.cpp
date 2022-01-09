#include<iostream>
using namespace std;
int main(){

int y,f,i;
cout<<"Enter Inches to convert\n";
cin>>i;
y = i/432;
i=i%432;
f= i/12;
i= i%12;

cout<<"After conversion from inches to feet, yards and inches\n";
cout<<"Yards = "<<y<<" \nFeet = "<<f<<" \nInches = "<<i<<"\n";



return 0;
}
