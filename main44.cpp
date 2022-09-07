#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    vector<int>ans;
int val;
    while(1){
        cin>>val;
        if(val<0) break;
        else v.push_back(val);
    }
    int c=0;
    for(auto &val:v){
        if(val <100){
            ans.push_back(val);
        }
        else{
        	c++;
        	if(c>0){
                ans.push_back(c);

            }
            c=0;
        }
        
    }
    for(auto &val:ans){
    	cout<<val<<endl;
    }
    return 0;
}