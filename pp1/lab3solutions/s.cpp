#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b = sqrt(a);
    if(b == sqrt(a)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}