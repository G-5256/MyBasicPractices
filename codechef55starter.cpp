#include <bits/stdc++.h>
using namespace std;
//Permutation Clear

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n ;
	    cin >> n ;
	    vector<int> arr(n) ;
	    for(int i=0;i<n;i++){
	        cin >> arr[i] ;
	    }
	    int k ;
	    cin >> k;
	    set<int> s ;
	    for(int i=0;i<k;i++){
	        int a; 
	        cin>> a;
	        s.insert(a);
	    }
	    for(int i=0;i<n;i++){
	        if(s.count(arr[i])) continue;
	        else cout << arr[i] << ' ' ;
	    }
	    cout << endl ;
    }

}