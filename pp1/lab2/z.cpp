#include <iostream>
using namespace std;
int main(){
    int r,s;
    cin>>r>>s;
    double sphere = 4 * 3.14 * r * r;
    double cube = 6 * s * s;
    if(sphere < cube){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}