#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    int a=0, b=0;
    cin>>n;
    string c;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=="star")
        {
            a++;
        }
        else{
            b++;
        }
        cout<<a<< " " <<b<<endl;
    }
    }
return 0;
}
