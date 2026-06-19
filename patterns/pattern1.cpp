#include <bits/stdc++.h>
using namespace std;


void print1(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    print1(n);
}



// output for n = 4
// ****
// ****
// ****
// ****




// #include <bits/stdc++.h>
// using namespace std;

// // this is the main part 
// void print1(int n){
//     for(int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// // yeh use hota h for test cases
// int main(){
//     int t ;
//     cin >> t;
//     for(int i = 0; i < t; i++){
//         int n;
//         std::cin >> n;
//         print1(n);
//     }
// }


// Sample Input
// 2
// 3
// 5

// Your Output
// ***
// ***
// ***
// *****
// *****
// *****
// *****
// *****