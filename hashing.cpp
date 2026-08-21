#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n ;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	// precompute
	int hash[13] = {0};
	for(int i=0; i<n; i++){
	    hash [arr[i]] += 1;
	}
	
	int q;
	cin >> q;
	while(q--){
	    int number;
	    cin >> number;
	    
	    //fetch
	    cout << hash[number] << endl;
	}
	
	return 0;

}


// Time:
// 0.0000 secs
// Memory:
// 3.632 Mb
// Sample Input
// 5
// 1 3 2 1 3
// 5
// 1
// 4
// 2
// 3
// 12
// Your Output
// 2
// 0
// 1
// 2
// 0