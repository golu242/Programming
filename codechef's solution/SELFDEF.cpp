#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, count;
        cin>>n;
        count = 0;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x>=10 && x<=60){

                count++;
            }
        }

        cout<<count<<endl;
    }

return 0;
}
