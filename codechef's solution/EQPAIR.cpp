#include<bits/stdc++.h>
#include<map>
using namespace std;

#define long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        map <long long,long long>mp;
        for(int f=0;f<n;f++)
        {
            cin>>arr[f];
            mp[arr[f]]++;
        }
        long long result =0;
        for(auto b:mp)
        {
            result+=(b.second * (b.second-1))/2;
        }
        cout<<result<<endl;
    }
return 0;
}

