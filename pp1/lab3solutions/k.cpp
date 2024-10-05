#include <iostream>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}