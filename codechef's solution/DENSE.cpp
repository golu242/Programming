#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int j=0;
        int i=n-1;
        int ans=0;


        while(j<=i)
        {
            if (s[j] == '(' and s[i] == ')')
            {
                j++;
                i--;
            }
            else if (s[j] == '(' and s[i] == '(')
            {
                ans++;
                i--;
            }
            else if (s[j] == ')' and s[i] == ')')
            {
                ans++;
                j++;
            }
            else
            {
                ans += 2;
                j++;
                i--;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}
