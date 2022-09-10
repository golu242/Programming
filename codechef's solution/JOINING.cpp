#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%5==0)
        {
            if(k%5==0)
            {
                cout<<(n/5 - k/5)<<endl;
            }
            else
            {
                cout<<(n/5 - k/5 -1)<<endl;
            }
        }
            else if(k%5==0)
            {
                cout<<(n/5-k/5)+1<<endl;
            }
            else
            {
                cout<<(n/5-k/5)<<endl;
            }


    }
return 0;
}
