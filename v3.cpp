

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
int oddCounter = 0;
		int val = 0;
		int i = 0;
		int length = arr.size();
		while(true) {

			if(i == length) {
				break;
			}
			
			if(arr[i]>=100 && arr[i]<=999)  {
				oddCounter++;
				
				if(oddCounter >= 2) {
					if(arr[i] > val ) {
						val = arr[i];
					}
					oddCounter = 0;
					arr[--i] = val;
					length = length-1;
					arr = processArray(arr, i+1);
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
				oddCounter = 0;
			}

		}
		for(int j = 0 ; j<length ; j++) {
            cout<<arr[j]<<endl;
        		}

}