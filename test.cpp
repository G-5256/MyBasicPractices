#include<bits/stdc++.h>
using namespace std;

string toHexa(int n){
string a="";
while(n){
    string s=to_string(n%16);
    a+=s;
    n=n/16;
    
}
reverse(a.begin(),a.end());
return a;
}
 
string toBinary(int n){
    string a="";
while(n){
    string s=to_string(n%2);
    a+=s;
    n=n/2;
}
reverse(a.begin(),a.end());
return a;
 }

int main()
{
    int n;cin>>n;
    // vector<int>v;
    // for(int i=1;i<=n;i++){
    //    cin>> v.push_back(i);
    // }
cout<<(n&1)<<endl;
    if(n&1==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
string s=toHexa(n);
cout<<n<< " To binary :"<<toBinary(n)<<endl;

// for(int i=ans.size();i>=0;i--){
//     s+=ans[i];
// }

cout<<s<<endl;
}
