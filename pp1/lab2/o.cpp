#include <iostream> 
using namespace std;
int main(){
    int amountofa, amountofb, amountofc, costa,costb,costc, money;
    cin>>amountofa>>amountofb>>amountofc>>costa>>costb>>costc>>money;
    int check = amountofa*costa + amountofb*costb + amountofc*costc;
    if(money>=check){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}