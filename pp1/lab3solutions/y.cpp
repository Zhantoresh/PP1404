#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        while(arr[i]>0){
            if(arr[i]%10==0){
                count++;
            }
            arr[i]/=10;
        }
    }
    cout<<count;
}