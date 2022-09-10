#include<iostream>
using namespace std;
#define long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans=0,count=0;
        int b[n];
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
            if(b[j]==1)count++;

            else
            {
                ans+=(count *(count +1)/2);
                count=0;
            }
        }
        ans+=(count *(count +1)/2);
        cout<<ans<<endl;
    }
return 0;
}
