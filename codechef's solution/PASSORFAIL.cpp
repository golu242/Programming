#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, p;
        cin>>n>>x>>p;

        if((3 * x)- (n - x)>=p){

            cout<<"PASS"<<endl;

        }
        else{

            cout<<"FAIL"<<endl;
        }
    }

return 0;
}
