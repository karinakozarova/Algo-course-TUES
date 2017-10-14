#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

// Любчо искал да си построи ограда и 
// си търсел колчета за нея. Пред него 
// имало много колчета - почти милион!
// - и той трябвало да си подбере 
// няколко за оградата. Той искал да
// си огради колкото се може по-голям 
// терен, и затова му трябвало колкото
// се може повече колчета. За съжаление
// не можел да вземе всички - оградата
// трябва да е равна: разликава във 
// висоличата на най-високото и 
// най-ниското колче трябва да 
// е най-много K.

Напишете програма, която по зададени брой колчета, N, техните височини, и максималната разлика, намира колко най-много колчета може да избере Любчо.
int main() {
    int n,k,arr[1000000];
    cin >> n; 
    cin >> k;

    int min=0,max=0;
    for(int i = 0; i<n;i++){
    	cin >> arr[i];
    }
  
   //sorting
   int swap;
   for (int c = 0 ; c < ( n - 1 ); c++){
	    for (int d = 0 ; d < n - c - 1; d++){
	      if (arr[d] > arr[d+1])
	      {
	        swap       = arr[d];
	        arr[d]   = arr[d+1];
	        arr[d+1] = swap;
	      }
	    }
	  }

	int max_count = 0,count = 0;
	for (int c = 0 ; c < ( n - 1 ); c++){
		if(arr[c+1] - arr[c] <= k){
			count++;
			//cout << count<<max_count;
			if(count>max_count) max_count = count;
		}else{
			count = 0;
		}

	}
	cout << max_count+1;
    return 0;
}
