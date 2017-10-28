#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int small(int a, int b){
	if(a<b) return a;
	else return b;
}
int big(int a, int b){
	if(a>b) return a;
	else return b;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long max_count = 0;

    int a,b,c;
    cin >> a >> b >> c;
    int smaller = small(a,b);
    int bigger = big(a,b);
    // a- what eats a white
    // b - what a black one eats
    // c - all they have eaten
 	while(c>= 0){
 		// remove smaller until c == bigger
 		if(c >= bigger){
 			// remove smaller
 			    cout << "asdfvb ";

 			if(c == bigger){
 				c -= bigger;
 			} else {
 				c -= smaller;
 			}
 			cout << c;
 			max_count += 1;
 		}
    }
    cout << max_count;
    return 0;
}

