#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    // Removed 't' since the prompt only specifies two integers a and b
    if (cin >> a >> b) { 
        string num[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        
        for(int i = a; i <= b; i++) {
            // FIX: Changed 'i <= b' to 'i <= 9' to protect array bounds
            if(i >= 1 && i <= 9) {
                cout << num[i] << endl;
            }
            else if(i > 9) {
                if(i % 2 == 0) {
                    cout << "even" << endl;
                }
                else {
                    cout << "odd" << endl;
                }
            }
        }
    }
    return 0;
}