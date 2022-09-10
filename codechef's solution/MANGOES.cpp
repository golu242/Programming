#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,k;
        cin>>x>>y>>z;

        k = (z-y)/x;
        cout<<k<<endl;
    }
return 0;
}
