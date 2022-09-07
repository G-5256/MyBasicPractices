#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int n1;cin>>n1;
        if(n1==1){
          cout<<"Yes"<<endl;

        }
        else if(n1%10==0){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
    }
}