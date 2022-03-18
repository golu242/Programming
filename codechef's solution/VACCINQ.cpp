#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y,t=0;
        cin>>n>>p>>x>>y;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        int i=0;
        while(i<p){
            if(a[i]==0){
                t=t+x;

            }
            else{
                t=t+y;
            }
            i++;
        }
        cout<<t<<endl;

    }
return 0;
}
