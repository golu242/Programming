#include<iostream>
using namespace std;
int main(){
    int t,n,i,j,l,k,b=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(j=0;j<n;j++){
                cin>>a[j];}
        for(l=0;l<n-1;l++)
        {
            for(k=l+1;k<n;k++){
                if((a[l]*a[k])>0){
                    b++;
                }
            }
        }

        cout<<b<<endl;
        b=0;

    }
return 0;
}
