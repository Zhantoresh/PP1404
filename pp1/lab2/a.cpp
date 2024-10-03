#include <iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    if(number!=0 and number%2==0){
        cout<<"Even";
    }
    else if(number%2==1){
        cout<<"Odd";
    }
    else{
        cout<<"None";
    }
}