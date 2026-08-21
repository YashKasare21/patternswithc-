#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted subarrays: arr[left..mid] and arr[mid+1..right]
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    // Create temporary arrays
    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0;      // Initial index of left subarray
    int j = 0;      // Initial index of right subarray
    int k = left;   // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function that sorts arr[left..right] using merge()
void merge_sort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return; // Base case: subarray has 1 or 0 elements, already sorted
    }

    // Find the middle point (this formula prevents integer overflow)
    int mid = left + (right - left) / 2;

    // Recursively sort the first and second halves
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
}

int main() {
    int n;
    cin >> n;

    // Using std::vector (Standard C++ best practice)
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call merge sort on the entire array (from index 0 to n-1)
    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// Output
// Status :Successfully executed
// Time:
// 0.0000 secs
// Memory:
// 3.76 Mb
// Sample Input
// 5
// 5 3 8 1 2
// Your Output
// Sorted array: 1 2 3 5 8 