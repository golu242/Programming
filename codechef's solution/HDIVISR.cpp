#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=10; i>=1; i--){
        if(n%i==0){
            cout<<i;
            break;
        }
    }
return 0;
}
