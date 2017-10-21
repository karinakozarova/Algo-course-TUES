#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a,int n){
    // a - array
    cout << n << " ";
    int exists = 0,sum_next = 0,sum_prev = 0;
    for(int i = 0; i < n;++i){
        // find sum_next
        for(int b = i; b < n; b++) sum_next += a[b];
        // find sum_prev
        for(int b = n; b > 0; b--) sum_prev += a[b];
        
        cout << "Next: " << sum_next << "Prev: " << sum_prev << "  ";

        if(sum_prev == sum_next) exists = 1;
        
    }
    if(exists == 0) return "NO";
    else return "YES";    
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }

        string result = solve(a,n);
        cout << result << endl;
    }

}
