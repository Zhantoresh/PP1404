#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b+c or b>a+c or c>a+b){
        cout<<"No";
    }
    else{
        if((a==b and a!=c) or (a==c and a!=b) or (b==c and b!=a)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }


}