#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int copy = n;
    for(copy = 0;copy<n;copy++){
    	cin >> arr[copy];
    	if(!cin)  return 0;
    }
    long long int max1 = 0,max2 = 0,max3 = 0,max4 = 0;

    for(int i = 0;i<=n;++i){
    	if(arr[i] >= max1){
    		max4 = max3;
    		max3 = max2;
    		max2 = max1;
    		max1 = arr[i];
    	} else if(arr[i] >=  max2){
    		max4 = max3;
    		max3 = max2;
    		max2 = arr[i];


    	} else if(arr[i] >= max3){
    		max4 = max3;
    		max3 = arr[i];
    	}

    }

    if(n >= 3)cout << max4;
    return 0;
}
