#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j=0,a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            j=j+a[i];
        }
        if(n%2==1)
        {
            cout<<"-1"<<endl;
        }
        else if(j<0)
        {
            cout<<(-j/2)<<endl;
        }
        else
        {
            cout<<j/2<<endl;
        }
    }
return 0;
}
