#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int count=0,count2=0,answer=0;
        cin>>n;
        long long a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]%2==0)
            {
                 count++;
            }
            else
            {
                 count2++;
            }
        }
      if(count==n)
      {
          cout<<"0"<<endl;
      }
      else{
        cout<<count<<endl;
      }
    }
return 0;
}
