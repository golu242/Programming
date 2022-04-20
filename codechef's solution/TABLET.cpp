#include<iostream>
using namespace std;
int main(){
    int t,n,area;
    cin>>t;
    for(n=0;n<t;n++){
        int m,b,l,w,p,max=-1;
        cin>>m>>b;
        for(int k=0;k<m;k++){
            cin>>l>>w>>p;
            area= l * w;
            if(p<=b){
                if(max<area){
                    max=area;
                }
            }
        }
        if(max>0){
            cout<<max<<endl;
        }
        else if(max==-1){
            cout<<"no tablet"<<endl;
        }
    }
return 0;
}
