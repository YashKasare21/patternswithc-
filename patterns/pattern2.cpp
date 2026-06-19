#include <bits/stdc++.h>
using namespace std;


void print2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cin >> n;
    print2(n);
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