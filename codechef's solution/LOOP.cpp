#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,M;
        cin>>A>>B>>M;
        if(A>B){
            cout<<min(A-B,M-A+B);
        }
        else{
            cout<<min(B-A,A+M-B);
        }
        cout<<endl;
    }
return 0;
}
