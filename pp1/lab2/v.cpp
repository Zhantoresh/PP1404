#include <iostream>
#include <cmath>
using namespace std;
int func(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 0;
    }
    else{
        return n;
    }
}
int main(){
    int n,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    cin>>n;
    n1 = n%2;
    n2 = (n/2)%2;
    n3 = (n/4)%2;
    n4 = (n/8)%2;
    n5 = (n/16)%2;
    n6 = (n/32)%2;
    n7 = (n/64)%2;
    n8 = (n/128)%2;
    n9 = (n/128)/2;
    int answer = func(n1) * pow(2,0) + func(n2)*pow(2,1) + func(n3) * pow(2,2) + func(n4) * pow(2,3) + func(n5) * pow(2,4) + func(n6) * pow(2,5) + func(n7) * pow(2,6) + func(n8) * pow(2,7) + func(n9) * pow(2,8);
    cout<<answer;
}