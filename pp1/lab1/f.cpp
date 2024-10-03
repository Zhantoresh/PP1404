#include <iostream>
using namespace std;
int main(){
    int rabbits,days;
    cin>>rabbits>>days;
    int total = rabbits;
    for(int i=2; i<=days; i++){
        total += 2*i*rabbits;
    }
    cout<<total;
    
}