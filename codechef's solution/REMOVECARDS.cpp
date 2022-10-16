#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int>m;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            m[arr[j]]++;
        }
        int max=0;
        for(int j=0;j<n;j++)
        {
            if(max<m[arr[j]])
                max=m[arr[j]];
        }
        cout<<n-max<<endl;
    }
    return 0;

}
