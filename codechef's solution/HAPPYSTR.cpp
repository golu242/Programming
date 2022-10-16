#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0,k=0;
        for(int j=0;j<s.length();j++)
        {
            if(count==3)
            {
               k=1;
               break;
            }
           else if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                count++;

            }
            else
            {
                count=0;
            }
        }
        if(count>=3)
                {
                    cout<<"Happy"<<endl;
                }
                else
                {
                    cout<<"Sad"<<endl;
                }

    }
return 0;
}
