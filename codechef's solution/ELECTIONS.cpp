#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        cin>>A>>B>>C;
        if(A>50 && A>B && A>C){
            cout<<"A"<<endl;
        }
        else if(B>50 && B>C && B>A){
            cout<<"B"<<endl;
        }
        else if(C>50 && C>B && C>A){
            cout<<"C"<<endl;
        }
        else{
            cout<<"NOTA"<<endl;
        }
    }
return 0;
}
