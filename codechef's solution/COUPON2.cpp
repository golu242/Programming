#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,C;
        cin>>D>>C;
        int arr[3];
        int arr1[3];
        for(int j=0;j<3;j++)
        {
            cin>>arr[j];
        }
        for(int k=0;k<3;k++)
        {
            cin>>arr1[k];
        }
        if((arr[0]+arr[1]+arr[2]>=150) && (arr1[0]+arr1[1]+arr1[2]>=150) && (C<D*2))
        {
            cout<<"YES"<<endl;
        }
        else if(((arr[0]+arr[1]+arr[2]>=150) || (arr1[0]+arr1[1]+arr1[2]>=150)) && (C<D))
        {
           cout<<"YES"<<endl;
        }
        else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}
