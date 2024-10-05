#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char final[4];
    final[3] = n%16;
    final[2] = (n/16)%16;
    final[1] = (n/256)%16;
    final[0] = (n/256);
    for(int i=0;i<5; i++){
        if(final[i]!='0'){
            cout<<final[i];
        }
    }
}
