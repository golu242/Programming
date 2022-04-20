#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    for(int i=0;i<t; i++){
        string s;
        cin>>s;
        int k;
        k = s.length();
        for(int j=0;j<k;j++){
            if(s[j]=='<')
            {
                if(s[j+1]=='>')
                {
                  count++;
                }
            }
        }
        cout<<count<<endl;
        count=0;
    }
return 0;
}
