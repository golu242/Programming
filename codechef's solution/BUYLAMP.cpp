#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(y>x)
        {
           cout<<n*x<<endl;
        }
        else
        {
            cout<<(x*k + (n-k)*y)<<endl;
        }

    }
return 0;
}
