#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"No";
        return 0;
    }
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                cout<<"No";
                return 0;
            }
        }
        cout<<"Yes";
    }
}