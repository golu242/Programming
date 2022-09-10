#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{ int long long n,k;
cin>>n>>k;
long long sum=0;
for(int i=1;i<=k;i++)
{
    sum=sum+i;
}
if(n>=sum)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;}
}
