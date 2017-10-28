#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int arr[n];
        if(n < 3) cout << "input at least 3 nums";
        int copy = n;
    for(copy = 0;copy<n;copy++){
    	cin >> arr[copy];
    }
    int max1 = 0,max2 = 0,max3 = 0;


    for(int i = 0;i<=n;++i){
    	if(arr[i] >= max1){
    		//cout << "arr[n>" << arr[i] << endl;
    		max3 = max2;
    		max2 = max1;
    		max1 = arr[i];
			cout << ">max1" << max3 << "2:    "<< max2<< "1:    "<<max1 << endl;
    	} else if(arr[i] >=  max2){
    		max3 = max2;
    		max2 = arr[i];
			cout << ">max2" << max3 << "2:    "<< max2<< "1:    "<<max1 << endl;


    	} else if(arr[n] >= max3){
    		max3 = arr[i];
			cout << ">max3" << max3 << "2:    "<< max2<< "1:    "<<max1 << endl;

    	} else {
			cout << "???? " << max3 << "2:    "<< max2<< "1:    "<<max1 << endl;
    	}

    }

    cout << "res:" << max3;
    return 0;
}
