#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       if(s.size()<=2)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           string s1="";
           for(int j=0;j<s.size()-1;j++)
           {
               s1+=s[j];
           }
           s1=s[s.size()-1]+s1;
           string s2="";
            for(int j=1;j<s.size();j++)
            {
                s2+=s[j];
            }
           s2+=s[0];
           if(s1==s2)
           {
               cout<<"YES"<<endl;
           }
           else
           {
              cout<<"NO"<<endl;
           }
       }
    }
return 0;
}
