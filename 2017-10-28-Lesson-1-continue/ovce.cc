#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int small(int a, int b){
	return a<b?a:b;
}

int main() {
    long long int max_count = 0,a,b,c;
    cin >> a >> b >> c;
    int sum = a + b;
    int smaller = small(a,b);
    int bigger = sum - smaller;
  
 	while(c > 0){
 			if(c == bigger){
 				c -= bigger;
 			} else if(c < bigger + smaller){
 				c -= smaller;

 			} else {
 				c -= smaller;
 			}
 			max_count += 1;
    }
    cout << max_count;
    return 0;
}

