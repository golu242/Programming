#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{ int n,a=0,b=0;

int arr[1000];

cin>>n;
arr [1]=0;

for(int j=2;j<=n;++j)
{
    if(j%2==0)

        arr[j]=--a;
    else
        arr[j]=++b;
}
for(int j=1;j<=n;++j)
{
    cout<<arr[j]-a+1<<' ';
}
cout<<endl;

}
return 0;
}
