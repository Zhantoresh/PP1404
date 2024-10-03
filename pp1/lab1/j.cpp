#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a>b+c or b>a+c or c>a+b){
        cout<<"nan";
    }
    else{
        double p = (a+b+c)/2;
        cout<<fixed<<setprecision(2)<<sqrt(p*(p-a)*(p-b)*(p-c));
    }
}