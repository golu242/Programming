#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, x, y;
        cin>>A>>B>>x>>y;

        int powerneed = A*B;
        int powermoon = x*y;

        if(powermoon>= powerneed)

            cout<<"Yes\n";

        else
            cout<<"No\n";

    }

 return 0;
 }
