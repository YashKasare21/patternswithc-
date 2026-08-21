#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s ;
	cin >> s ;
// 	int arr[n];
// 	for(int i=0; i<n; i++){
// 	    cin >> arr[i];
// 	}
    
    //precompute
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]] += 1;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        
        //fetch
        cout << hash[c] << endl;
    }
    return 0;
}


// Sample Input
// abcdabehf
// 5
// a
// g
// h
// b
// c
// Your Output
// 2
// 0
// 1
// 2
// 1