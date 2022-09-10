#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,v,sum=0;
        cin>>n>>k>>v;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
             sum=sum+arr[j];

        }
        int a=(n+k)*v-sum;
        if(a>0 && a%k==0)
        {
            cout<<a/k<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
return 0;
}
