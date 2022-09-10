#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,r=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int p=a[0];
        int q=a[0];
        if(n<2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=1; i<n-1;i++)
            {
                p=max(p,a[i]);
                q=min(q,a[i]);
                if(a[i+1]<p && a[i+1]>q)
                {
                    r=1;
                    break;}
                }
                if(r==1)
                    cout<<"NO"<<endl;


            else
                cout<<"YES"<<endl;

        }
    }
    return 0;
}
