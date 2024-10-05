#include <iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='A' and x<='Z'){
        cout<<char(x+32);
    }
    else if(x>='a' and x<='z'){
        cout<<char(x-32);
    }
}