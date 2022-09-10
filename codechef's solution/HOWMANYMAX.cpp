#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int b;
        cin>>b>>s;
        int count=0;
        for(int j=0;j<b-2;j++)
        {
            if(s[j]=='1' && s[j+1]=='0')
            {
                count++;
            }
        }
        cout<<count+1<<endl;

    }
return 0;
}
