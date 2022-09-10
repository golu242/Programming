#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{  int n;
cin>>n;
int x[n],y[n];
for(int j=0;j<n;j++)
{
    cin>>x[j];

}
for(int j=0;j<n;j++)
{
    int a=1;
    for(int k=j+1;k<n;k++)
    {
        if(x[j]==x[k])
        {
            a++;

        }
    }

y[j]=a;

}
sort(y,y+n);
if(y[n-1]==y[n-2])
{
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
