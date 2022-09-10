#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k>>m;
        int a= m*k;

        if(n%a==0)
        {
            cout<<n/a<<endl;
        }
        else
        {
            cout<<(n/a)+1<<endl;
        }
    }
return 0;
}
