#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,sum = 0;
	cin >> n;

	int arr[n];
	while(n--) cin >> arr[n];

	int is_okay = 1;
	for(int i = 0;i<n;i++){
		for(int b=i;b<n;b++){
			if(arr[i] >= arr[b]) is_okay = 0;
		}
		if(is_okay == 0) break;
		else sum += arr[i];
	}
	cout << sum;
    return 0;
}
