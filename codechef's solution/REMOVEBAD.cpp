#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int max = INT_MIN;
    unordered_map<int, int>m;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
        m[a[j]]++;
    }
    for(auto b : m)
    {
        if(b.second > max)
            max = b.second;


    }
     cout<<n-max<<endl;
    }

return 0;
}

