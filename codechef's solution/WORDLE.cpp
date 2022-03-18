#include<iostream>
using namespace std;
int main(){
    int t;
    string S,T;
    cin>>t;

    while(t--){
        cin>>S>>T;
        for(int i=0; i<5;i++){
            if(S[i]==T[i]){
                cout<<'G';
            }
            else{
                cout<<'B';
            }
        }
        cout<<endl;
    }
return 0;
}

