#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int arr[7];
	    int count_one = 0;
	    for(int i = 0 ; i <7 ; i++){
	        cin >> arr[i] ;
	        if(arr[i] == 1){
	            count_one++;
	        }
	       
	    }
	    if(count_one >= 4){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
