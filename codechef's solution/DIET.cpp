#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        int array[n];
        for(int i=0; i<n; i++){
            cin>>array[i];

        }
        int j, value=0;
        for(j=0;j<n;j++){
            sum+=array[j]-k;
            if(sum<0){
                value=1;
                break;
            }
        }
        if(value==1){
            cout<<"NO "<<j+1<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

return 0;
}
