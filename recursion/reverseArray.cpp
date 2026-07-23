#include <bits/stdc++.h>
using namespace std;


void f(int i, int arr[], int n){
    if( i >= n/2 ) return;
    swap(arr[i], arr[n-1-i]);
    f(i+1,arr,n);
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {cin >> arr[i];}
    f(0,arr,n);
    for(int i=0; i<n; i++) {cout << arr[i] << " ";}
    return 0;

}


// Output
// Status :Successfully executed
// Time:
// 0.0000 secs
// Memory:
// 3.592 Mb
// Sample Input
// 5
// 1 2 3 4 5
// Your Output
// 5 4 3 2 1 