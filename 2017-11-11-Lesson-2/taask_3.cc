#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	unsigned long long n,k;
	cin >> n >> k;

	int arr_n[n];
	for(int i =0;i<n;i++){
		cin >> arr_n[i];
	}
	sort(arr_n,arr_n+n);


	int arr_k[k];
	for(int i =0;i<n;i++){
		cin >> arr_k[i];
	}
	sort(arr_k,arr_k+k);
	for(int i =0;i<n;i++){
		cout <<  arr_k[i] << endl;
	}
	for(int i = 0;i<k;i++)	{
		int count = 0;
		for(int j = 0; j < n; j++){
			if(arr_k[j] <= arr_n[i]) {
				count++;
				cout << arr_k[j] << " " << arr_n[i];
			}
		}

		cout << count << " ";
	}
	return 0;
}