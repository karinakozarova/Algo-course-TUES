#include <bits/stdc++.h>

using namespace std;
bool string_has(string s1,char s2){ // s2 is in s1
    if (s1.find(s2) != std::string::npos) return true;
    return false;
}

string twoStrings(string s1, string s2){
    // Complete this function
    bool result = false;
    for(char letter = 'a';letter++;letter <= 'z'){
        if(string_has(s1,letter) == true && string_has(s2,letter) == true){
            result = true;
            break;
        } 
    }
    if(result == true) return "YES";
    else return "NO";
}



int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
