#include <iostream>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    if(l==r){
        cout<<arr[l];
    }
    else{
        int sum = 0;
        for(int i=l; i<=r; i++){
            sum+=arr[i];
        }
        cout<<sum;
    }
}