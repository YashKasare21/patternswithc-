#include <bits/stdc++.h>
using namespace std;

void print18(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'E'- i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
	int n;
	cin >> n;
	print18(n);
}


// Time:
// 0.0000 secs
// Memory:
// 3.432 Mb
// Sample Input
// 5
// Your Output
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 