#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,count = 0;
	cin >> n;
	int copy = n;
	int arr[n];

	while(n--){
		cin >> arr[n];
	}

	sort(arr, arr+copy); 

  	for(int i =0; i< copy; i++){
  		if(arr[i] != arr[i-1])
  		if(arr[i] == arr[i+1]) count++;
  	}
  	cout << count;
    return 0;
}
