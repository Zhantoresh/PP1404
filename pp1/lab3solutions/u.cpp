#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = 0;
    int modes[1001] = {0};
    for(int i=0;i<n;i++){
        modes[arr[i]]++;
        if(modes[arr[i]]>max){
            max = modes[arr[i]];
        }
    }
    for(int i=1000; i>=0; i--){
        if(modes[i]==max){
            cout<<i<<" ";
        }
    }
}