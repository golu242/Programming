#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int len=s.length();
        int c0=0,c1=0,ans;
        for(int j=0;j<len;j++)
        {
            if(s[j]=='1')
                c1++;
            else
                c0++;
        }
        if(c1>c0)
        {
            for(int j=0;j<c1;j++)
                cout<<1;
                cout<<endl;

        }
        else
        {
            for(int j=0;j<c0;j++)
            cout<<0;
            cout<<endl;


        }
    }
return 0;
}
