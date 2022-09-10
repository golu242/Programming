#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        int a[n];
        int c[n+1]={0};
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            c[a[j]]++;

        }
        for(int j=0;j<n+1;j++)
        {
            if((c[j]>=k) && (a[j-1]!=j))
                count++;
        }
        cout<<count<<endl;
    }
return 0;
}
