#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(x<n)
        {
            cout<<-1<<endl;continue;
        }

            cout<<x-n+1<<" ";

        for(int j=1;j<=n;j++)
        {
            if(j!=x-n+1)
            {
                cout<<j<<" ";
            }

        }
        cout<<"\n";
    }
return 0;
}
