#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v1;
        for(int j=0;j<n;j++)
        {
            int y;
            cin>>y;
            v1.push_back(y);
        }
        int count=0;
        for(int j=0;j<v1.size();j++)
        {
            if(v1[j]==1)
            {
                count++;
            }

        }
        if(count==v1.size())
        {
            cout<<"100"<<endl;
        }
        else
        {
            int counter=0;
            for(int j=0;j<m;j++)
            {
                if(v1[j]==1)
                {
                    counter++;
                }
            }
            if(counter==m)
            {
                cout<<k<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }
    return 0;

}
