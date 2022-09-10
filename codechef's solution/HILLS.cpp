#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,d;
        cin>>n>>u>>d;

        int h[n];
        for(int j=0;j<n;j++)
        {
            cin>>h[j];
        }
        int i=1,k=1;
        for(int j=1;j<n;j++)
        {
            if(h[j]==h[j-1])
            {
                i++;
            }
            else if(h[j-1]+u >= h[j] && h[j] >= h[j-1]-d)
            {
                i++;
            }
            else  if(h[j]<h[j-1])
            {
                if(k==1)
                {
                    i++;
                    k--;
                }
                else
                {
                    break;
                }

            }
            else
            {
                break;
            }
        }
        cout<<i<<endl;

    }

return 0;
}
