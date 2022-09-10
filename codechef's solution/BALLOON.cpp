#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];

        }
        for(int j=0;j<n;j++)
        {
            if(a[j]==1 || a[j]==2 || a[j]==3 || a[j]==4 || a[j]==5 || a[j]==6 || a[j]==7)
            {
                count=j+1;
            }
        }
        cout<<count<<endl;
    }
return 0;
}
