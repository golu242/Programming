#include<iostream>
using namespace std;
int main(){
int i, n, fact=1;
cout<<"Enter any positive number\n";
cin>>n;
for(i=1;i<n;i++)
{
fact=fact*i;

}

cout<<"\nFactorial of number "<<n<<" is "<<fact<<"\n";



return 0;
}
