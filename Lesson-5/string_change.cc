#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int num_of_deletions(string str){
	int deleted = 0;
	for(int i = 0; i < str.length();i++){
		if(str[i] == str[i+1]) deleted++;
	}
	return deleted;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_of_strings;
	cin >> num_of_strings;

	for(int i = 0; i < num_of_strings;i++){
		string str;
		cin >> str;
		cout << num_of_deletions(str) << endl;
	}
    return 0;
}

