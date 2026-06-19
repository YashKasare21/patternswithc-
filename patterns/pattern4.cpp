#include <bits/stdc++.h>
using namespace std;

void print4(int n){
    for(int i = 0; i<=n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}



int main(){
    int n;
    cin >> n;
    print4(n);
}

// yeh use hota h for test cases
// int main(){
//     int t ;
//     cin >> t;
//     for(int i = 0; i < t; i++){
//         int n;
//         std::cin >> n;
//         print2(n);
//     }
// }



// Time:
// 0.0000 secs
// Memory:
// 3.608 Mb
// Sample Input
// 5

// Your Output

// 1
// 22
// 333
// 4444
// 55555