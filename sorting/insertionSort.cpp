#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[], int n){
    for(int i = 0; i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            std::swap(arr[j-1], arr[j]);
            j--;
        }
    }
}



int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i =0; i<n; i++) cin >> arr[i];
	insertion_sort(arr,n);
	for(int i = 0; i<n; i++){
	    cout << arr[i] << " ";
	}
	return 0;
	

}


// Output
// Status :Successfully executed
// Time:
// 0.0000 secs
// Memory:
// 3.672 Mb
// Sample Input
// 6
// 6 5 4 3 2 1
// Your Output
// 1 2 3 4 5 6 