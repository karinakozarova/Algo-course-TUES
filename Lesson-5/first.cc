#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n; // arrays size

    int sorted_arr[n],original_arr[n];
    
    for(int value = 0;value < 32766;value++){
	 	for(int i = 0; i < n ; i++){
	 			sorted_arr[i] = value;
	 			original_arr[i] = value;

	 	}
		    
	    for(int i = 0;i < n-1;i++){ // ivancho
	    	for(int j = i; j < n-1;j++){
	    		if(original_arr[j] > original_arr[j+1]){
	    			int temp = original_arr[j + 1];
	    			original_arr[j+1] = original_arr[j];
	    			original_arr[j] = temp;
	    		}
	    	}
	    }

	    // sort sorted array
    	sort(sorted_arr, sorted_arr + n);
	    for(int i = 0; i < n;i++){
	    	if(original_arr[i] != sorted_arr[i]){
	    		// print original array
	    		for(int i = 0; i < n ; i++){
		 			cout << original_arr[i];
	 			}
	 			return 0;
	    	}
	    }
	}
	cout << "-1";
    return 0;
}

