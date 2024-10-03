#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double steaks,sides;
    cin>>steaks>>sides;
    if(sides/2==steaks){
        cout<<"2";
    }
    else{
        cout<<ceil((steaks*2)/sides);
    }
}