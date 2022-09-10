#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,j;
        cin>>n;
        string b;
        cin>>b;
        for(j=0;j<n;j=j+2)
        {
            if(b[j]=='0' && b[j+1]=='0')
            {
                cout<<"A";
            }
            else if(b[j]=='0' && b[j+1]=='1')
            {
                cout<<"T";
            }
            else if(b[j]=='1' && b[j+1]=='0')
            {
                cout<<"C";
            }
            else if(b[j]=='1' && b[j+1]=='1')
            {
                cout<<"G";
            }
        }
        cout<<endl;
    }
return 0;
}
