#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int sum=0, prod=0,count=0;
            for(int i=0;i<n;i++)
            {
                sum=0;
                prod=1;
                for(int j=i;j<n;j++)
                {
                    sum+=a[j];
                    prod=prod*a[j];
                    if(sum==prod)
                    {
                        count++;
                    }
                }
            }
            cout<<count<<endl;
    }
return 0;
}
