#include <bits/stdc++.h>
using namespace std;

void print7(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    print7(n);
}



// yeh use hota h for test cases
// int main(){
//     int t ;
//     cin >> t;
//     for(int i = 0; i < t; i++){
//         int n;
//         std::cin >> n;
//         print7(n);
//     }
// }

// Time:
// 0.0000 secs
// Memory:
// 3.756 Mb
// Sample Input
// 5

// Your Output
//     *    
//    ***   
//   *****  
//  ******* 
// *********