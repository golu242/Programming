#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        deque<char>dq;
        int j=0;
        int i=n-1;
        for(int p=0;p<s.size();p++)
        {
            if(p & 1)
            {
                if(s[i]=='1')
                {
                    dq.push_front(s[i--]);
                }
                else
                {
                    dq.push_back(s[i--]);
                }

            }

        else
        {
            if(s[j]=='1')
            {
                dq.push_back(s[j++]);
            }
            else
            {
                dq.push_front(s[j++]);
            }
        }
    }
    string t(dq.begin(),dq.end());
    cout<<t<<endl;
}
return 0;

}
