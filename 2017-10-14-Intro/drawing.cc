#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//чете число N и рисува със звездички (*)
// квадрат със страна N и неговите диагонали.

int main() {
    int n;
    cin >> n;
    if(n > 0){
    	if(n == 1) {
    		cout << "*";
    	}else {
		    for(int column = 0; column <n; column++) cout << "*"; // first row
		    cout << endl;

		    for(int row = 1; row<n-1;row++){
		    	cout << "*";
		    	for(int column = 1; column <n-1; column++){
		    			 if(column == row || column == n- row-1) cout << "*";
		    			 else cout << " ";
		    			 if(column == n) cout << "*";
		    	} 
		    	cout << "*";
		    	cout << endl; 
		    }

			for(int column = 0; column <n; column++) cout << "*"; // last row
		    cout << endl;
		}
	}
    return 0;
}
