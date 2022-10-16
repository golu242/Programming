#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            count++;
            if(s[j+1]=='1')
                break;
        }
        cout<<count<<endl;

    }
    return 0;

}
