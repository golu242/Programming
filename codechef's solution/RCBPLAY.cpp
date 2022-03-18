#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;

        if((y-x)>(z * 2)){
            cout<<"NO"<<endl;
        }
        if((y-x)<=(z * 2)||(y-x)<= z){

            cout<<"YES"<<endl;
        }

        }

return 0;
}
