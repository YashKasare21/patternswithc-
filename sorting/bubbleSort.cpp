#include <bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if (didSwap == 0){
            break;
        }
    }
}




int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i =0; i<n; i++) cin >> arr[i];
	bubble_sort(arr,n);
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
// 3.596 Mb
// Sample Input
// 6
// 13 42 24 52 20 9
// Your Output
// 9 13 20 24 42 52 