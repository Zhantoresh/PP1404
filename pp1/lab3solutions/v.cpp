#include <iostream>
using namespace std;
int main() {
    int n, steps;
    cin >> n;
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> steps;
    if (steps < 0) {
        steps = n + (steps % n);  
    }
    steps = steps % n;  
    for (int i = 0; i < n; i++) {
        temp[(i + steps) % n] = arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}   