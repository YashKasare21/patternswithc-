#include <iostream>
#include <vector>
using namespace std;

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function: Yeh pivot ko uski sahi jagah rakhta hai
int partition(vector<int>& arr, int low, int high) {
    // Hum last element ko pivot maan rahe hain
    int pivot = arr[high]; 
    
    // 'i' wo index track karega jahan se chote elements shuru honge
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        // Agar current element pivot se chota ya equal hai
        if (arr[j] <= pivot) {
            i++; // Chote element ke liye space badhao
            swap(&arr[i], &arr[j]); // Swap karke chote element ko left side bhejo
        }
    }
    
    // Finally, pivot ko uski sahi jagah (i+1) par rakho
    swap(&arr[i + 1], &arr[high]);
    return (i + 1); // Pivot ka naya index return karo
}

// Main Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partitioning index mil gaya
        int pi = partition(arr, low, high);

        // Pivot se pehle wale hisse ko sort karo
        quickSort(arr, low, pi - 1);
        
        // Pivot ke baad wale hisse ko sort karo
        quickSort(arr, pi + 1, high);
    }
}

// Helper function to print array
void printArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Size of array
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Taking input elements
    }

    // Sorting call
    quickSort(arr, 0, n - 1);

    // Output
    printArray(arr);

    return 0;
}


// Output
// Status :Successfully executed
// Time:
// 0.0000 secs
// Memory:
// 3.6 Mb
// Sample Input
// 5
// 5 3 8 1 2
// Your Output
// 1 2 3 5 8 
