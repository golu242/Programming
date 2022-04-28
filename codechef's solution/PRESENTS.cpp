#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        if(n<5){
            cout<<n<<endl;
        }
        else{
            x=n/5;
            cout<<n-x<<endl;
        }
    }
return 0;
}
