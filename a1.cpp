#include<bits/stdc++.h>
using namespace std;
vector<int> processArray(vector<int>arr, int i) {

		for(int k = i; k<arr.size()-1 ; k++) {
            
			arr[k] = arr[k+1];
		}
		return arr;
}


int main(){
    vector<int>arr;
int value;
    while(1){
        cin>>value;
        if(value<0) break;
        else arr.push_back(value);
    }
    
int count = 0;
		int val = 0;
		int i = 0;
		int length = arr.size();
		while(true) {
			if(i == length) {
				break;
			}
			if(arr[i] >=100){
				count++;
					val = arr[i];
					count = 0;
					arr[--i] = val;
					length = length-1;
                    arr=processArray(arr,i+1);
					val = 0;
				}
				else {
					val = arr[i];
					i++;
				}
			}

			else{
				i++;
				val = 0;
				count = 0;
			}
           
		}

		for(int j = 0 ; j<arr.size() ; j++) {
			cout<<arr[j]<<endl;
		}
	}
	