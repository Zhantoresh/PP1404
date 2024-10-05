#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int max = arr[1];
    int position = 1;
    for(int i=1;i<=n;i++){
        if(arr[i]>max){
            max = arr[i];
            position = i;
        }
    }
    cout << position;
}