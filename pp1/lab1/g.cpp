#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long capital,months;
    cin>>capital>>months;
    while(months!=0){
        capital*=2;
        months--;
    }
    cout<<capital;
}