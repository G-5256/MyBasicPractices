#include <bits/stdc++.h>
using namespace std;

int main(){
//     int n;
//     cin>>n;
//    map<string, int>m;
//    vector<string>nameArray;
//    while(n--){
//         string name;cin>>name;
//         m[name]++;
//     }
//    map<string, int>::iterator it;

//     for(auto it=m.begin();it!=m.end();it++){
// cout<<it->first<<" "<<it->second<<endl;
//     }

int n;
cin>>n;
while(n--){
    int x;cin>>x;

int shakes=0;
    for(int i=1;i<x;i++){
shakes=i+shakes;//ap:Gp 
    }
    cout<<"For " <<x<<" hands "<<shakes<<" shakes"<<endl;
}


}



