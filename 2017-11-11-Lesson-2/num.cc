#include <iostream>
#include <cmath>


using namespace std;

int main(){
	unsigned long long int n,k;

	cin >> n >> k; // stoinost

	unsigned long long int l = 0,r = n,a_n,result = 0;
  if(k <= 0){
  	if( n == 0) cout << 1;
    else cout << 0;
    return 0;
  }


	while(r-l > 1){
		unsigned long long int middle = (l+r)/2;
		a_n = pow(middle,1.3) + 3*pow(middle,0.7) + 9*pow(middle,0.3); 
		if(a_n == k) {
			result = middle; 
			break;
		} else{
			if(pow(middle,1.3) + 3*pow(middle,0.7) + 9*pow(middle,0.3) <= k) l = middle;
			else r = middle;
		}
	}

	if(result == 0) cout << -1;
	else cout << result;

	return 0;
}