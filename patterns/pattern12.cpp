#include <bits/stdc++.h>
using namespace std;


void print12(int n){
    int space = (2*n)-2;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}




int main() {
	int n;
	cin >> n;
	print12(n);
}




// Time:
// 0.0000 secs
// Memory:
// 3.62 Mb
// Sample Input
// 4
// Your Output
// 1      1
// 12    21
// 123  321
// 12344321