#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,count=0,ans=0;
        cin>>N;
        string S;
        cin>>S;

        for(int j=0;j<N;j++)
        {
            if(S[j]=='1')
                count++;
            else ans++;

        }
        if(N%2==0)
        {
            if(count%2 && ans%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
     return 0;
}
