#include <iostream>
using namespace std;
int main(){
    int mid,end,final;
    cin>>mid>>end>>final;
    int overall = mid+end+final;
    if(final>=20 and mid+end>=30 and overall>=70){
        cout<<"YES!";
    }
    else{
        cout<<"NO.";
    }
}