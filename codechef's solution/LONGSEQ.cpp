#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        int arr[2]={0};
        for(int j=0;j<b.size();j++)
        {
            arr[b[j]-'0']++;
        }
        if(arr[0]==1 || arr[1]==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
return 0;
}
