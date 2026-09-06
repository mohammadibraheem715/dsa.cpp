#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string n, int l){
    if(i >= l) return true;
    if(n[i] != n[l]) return false;
    return palindrome(i + 1, n, l-1);
}

int main(){
    string n;
    cin >> n;
   cout << palindrome(0, n, n.size()-1);
}