#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{

long long int n;
cin>>n;
int j;
for(j =0;n>0;j++)
{
    int a=log2(n);
    int b=pow(2,a);
    n=n%b;
}
 cout<<j-1<<endl;

}
return 0;
}

