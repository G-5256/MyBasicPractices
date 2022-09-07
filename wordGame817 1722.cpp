//wordgamecodeforces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        /*
        wordgame
        1
        abc
        sss
        abc
        3
        asa asa asa 
        asd asd ffd
        fde fda ffd
        */
       string s[3][n];
        for(int i=0;i<3;i++){
              for(int j=0;j<n;j++){
                cin>>s[i][j];
              }
         }

        map<string,int>m;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                m[s[i][j]]++;            }
            cout<<endl;
        }
vector<int>ans(3,0);
for(int i=0;i<3;i++){
    for(int j=0;j<n;j++){
        if(m[s[i][j]]==1){
            ans[i]+=3;
        }
        else if(m[s[i][j]]==2){
            ans[i]+=1;
        }

    }

    

}
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;

    }
}