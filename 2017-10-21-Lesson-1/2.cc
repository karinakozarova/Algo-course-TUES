#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int is_palindrome = 1;

	string palindrome;
    cin >> palindrome;

    int length = palindrome.length()-1;

	for(int i = 0;i < (length/2)+1;i++){
		char first = palindrome[i];
		char last = palindrome[length - i];
		if(last != first) is_palindrome = 0;
	} 

	if(is_palindrome == 0) cout << "NO";
	else cout << "YES";
    return 0;
}
