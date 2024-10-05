#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<1 or n>26){
        cout<<"No such letter!";
    }
    else{
        cout<<char(n+64)<<" "<<char(n+96);
    }
   
}