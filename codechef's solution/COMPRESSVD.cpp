#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==a[j + 1])
            {
                k++;
            }
        }
        cout<<n-k<<endl;
    }
return 0;
}
