#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i+=2)
            swap(s[i], s[i+1]);
        for(int i=0; i<n; i++)
            s[i]='a'+'z'-s[i];
        cout<<s<<endl;
    }
return 0;
}
