#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int y = 2*n - (x-1);
        cout<<y<<endl;
    }
return 0;
}
