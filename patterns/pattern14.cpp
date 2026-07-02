#include <bits/stdc++.h>
using namespace std;

void print14(int n){
    for(int i =1; i<=n; i++){
        for(char ch = 'A'; ch <= 'A'+ i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
	int n;
	cin >> n;
	print14(n);
}


// Time:
// 0.0000 secs
// Memory:
// 3.548 Mb
// Sample Input
// 5
// Your Output
// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F 