#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m%2==0 && n%2==1)
        {
            cout<<m<<endl;
        }
        else if(n%2==0 && m%2==1)
        {
            cout<<n<<endl;
        }
        else if((n*m)%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<m+n-1<<endl;
        }
    }
return 0;
}
