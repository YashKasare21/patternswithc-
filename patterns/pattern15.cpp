#include <bits/stdc++.h>
using namespace std;

void print15(int n){
    for(int i =1; i<=n; i++){
        for(char ch = 'A'; ch <= 'A'+ (n-i); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
	int n;
	cin >> n;
	print15(n);
}


// Time:
// 0.0000 secs
// Memory:
// 3.584 Mb
// Sample Input
// 5
// Your Output
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 