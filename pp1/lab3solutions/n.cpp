#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int finalarr[n+m];
    for(int i=0;i<n;i++){
        finalarr[i] = arr1[i];
    }
    for(int i=n; i<n+m;i++){
        finalarr[i] = arr2[i-n];
    }
    sort(finalarr, finalarr + n+m);
    for(int i=0;i<n+m; i++){
        cout<<finalarr[i]<<" ";
    }
}