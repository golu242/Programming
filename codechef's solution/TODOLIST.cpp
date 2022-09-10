#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,i,j=0;
            cin>>n;
            int p[n];

            for(i=0;i<n; i++){
                cin>>p[i];
            }
            for(i=0;i<n;i++)
            {
                if(p[i]>=1000)
                {
                    j++;
                }
            }
            cout<<j<<endl;

    }
return 0;
}
