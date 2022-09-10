#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    int b[3];
    b[0]=y;
    b[1]=y;
    b[2]=3*x-2*y;

     sort(b,b+2);
    for(int j=0;j<3;j++)
    {
        cout<<b[j]<<" " ;
    }
    cout<<endl;

}
return 0;}
