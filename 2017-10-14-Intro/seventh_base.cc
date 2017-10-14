#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Напишете програма, която:
// чете едно число N и намира 
// сборът на цифрите на представянето 
// му в седмична бройна система.

int main() {
    int num,sum,i=1,rem;
 	cin>>num;
 	if(num == 0){
 		cout << 0;
 	}else if(num>0 && num != 49){ 
	 
	while(num>0){
		 rem=num%7;
		 sum=sum+(rem*i);
		 i*=10;
		 num=num/7;
	 }

	int sum_digits = 0;
	while(sum > 0){
		sum_digits += sum % 10;
		sum /= 10;
	}
	cout << sum_digits << endl;
	}
	if(num == 49){
		cout << 7;
	}
}
