#include <bits/stdc++.h>
using namespace std;

void print16(int n){
    for(int i = 0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
	int n;
	cin >> n;
	print16(n);
}


// Time:
// 0.0000 secs
// Memory:
// 3.628 Mb
// Sample Input
// 5
// Your Output
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 