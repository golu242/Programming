#include<bits/stdc++.h>
using namespace std;
#define long long
int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        long long a1,a2;
        if(m<2*n) cout<<m<<" "<<m<<endl;

        else if(m%n==0)
        {
            cout<<m<<" "<<n<<endl;
        }
        else{
            long long y=m/2;
            if(m>=2*n) y = 2*n;
            long diff =INT_MIN;
            for(int j=n;j<y;j++){
            long long b=m/j;
            long long cd = (j*b)-j;
            if(cd>diff)
            {

                a1=j;
                a2=j*b;
                diff=cd;

            }

            }
            cout<<a1<<" "<<a2<<endl;

        }


    }
return 0;
}
