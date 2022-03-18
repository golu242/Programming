#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,a,b,c;
        cin>>x>>y>>z>>a>>b>>c;
        int s1 = x+y+z;
        int s2 = a+b+c;
        if(s1>s2){
            cout<<"DRAGON"<<endl;
        }
        else if(s2>s1){
            cout<<"SLOTH"<<endl;
        }
        else if(s1==s2 && x>a){
            cout<<"DRAGON"<<endl;
        }
        else if(s1==s2 && x<a){
            cout<<"SLOTH"<<endl;
        }
        else if(s1==s2 && y>b){
            cout<<"DRAGON"<<endl;
        }
        else if(s1==s2 && y<b){
            cout<<"SLOTH"<<endl;
        }
        else if(s1==s2 && z>c){
            cout<<"DRAGON"<<endl;
        }
        else if(s1==s2 && z<c){
            cout<<"SLOTH"<<endl;
        }
        else if(s1==s2 && x==a && y==b && z==c){
            cout<<"TIE"<<endl;
        }

    }
return 0;
}
