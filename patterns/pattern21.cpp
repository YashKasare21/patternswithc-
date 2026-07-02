#include <bits/stdc++.h>
using namespace std;


void print21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

int main() {
	int n;
	cin >> n;
	print21(n);
}


// Time:
// 0.0000 secs
// Memory:
// 3.612 Mb
// Sample Input
// 4
// Your Output
// ****
// *  *
// *  *
// ****