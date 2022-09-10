#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]!= arr[j+1])
            {
                count=count+2;
            }
        }
        for(int j=1;j<n-1;j++)
        {
            if(arr[j-1]!= arr[j] && arr[j]!= arr[j+1])
            {
                count--;
            }
        }
        cout<<count<<endl;
    }
return 0;
}
