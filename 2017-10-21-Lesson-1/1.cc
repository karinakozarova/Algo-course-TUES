#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int max = -2147483648;
    int arr[100001],n; 
    cin >> n;

    for(int i = 0;i<n;i++){
    	cin >> arr[i];
    	if(arr[i]>max) max = arr[i];
    } 
   
    cout << max;
    return 0;
}
