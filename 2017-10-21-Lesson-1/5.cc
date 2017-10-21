#include <bits/stdc++.h>
using namespace std;

string is_palindrome(string palindrome){
    int is_palindrome = 1;
    int length = palindrome.length()-1;

    for(int i = 0;i < (length/2)+1;i++){
        char first = palindrome[i];
        char last = palindrome[length - i];
        if(last != first) is_palindrome = 0;
    } 

    if(is_palindrome == 0) return "NO";
    else return "YES";
}

char easytolower(char in){
  if(in<='Z' && in>='A')
    return in-('Z'-'z');
  return in;
} 

int main() {
    string str;
    cin >> str;  
    for(int i = 0; i < str.size(); ++i)
    {
        if (!((str[i] >= 'a' && str[i]<='z')
         || (str[i] >= 'A' && str[i]<='Z'))){
            str[i] = '\0';
        }
    }

    transform(str.begin(), str.end(), str.begin(), easytolower);
    is_palindrome(str);
}
