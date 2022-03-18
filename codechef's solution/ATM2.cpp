#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        int sum=0;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        for(int i=0; i<n; i++){
            sum = sum+a[i];
            if(k-sum>=0){
                cout<<'1';

            }
            else{
                cout<<'0';
                sum = sum-a[i];
            }
        }
        cout<<endl;
        sum=0;
    }
return 0;
}
