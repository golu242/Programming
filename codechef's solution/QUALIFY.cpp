#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, a, b, total;
        cin>>x>>a>>b;
        total = (a * 1) + (b * 2);

        if(total >= x){
            cout<< "qualify" <<endl;
        }
        else{
            cout<< "not qualify" <<endl;

        }
  }
 return 0;
}
