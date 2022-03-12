#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int bike, car;
        cin>>bike>>car;

        if(bike<car){
            cout<<"BIKE";

        }
        else if(bike == car){
            cout<<"SAME";

        }
        else{
            cout<<"CAR";

        }
        cout<<endl;


    }
 return 0;
}
