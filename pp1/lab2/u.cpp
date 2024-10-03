#include <iostream>
using namespace std;
int main(){
    int totalattend, studentsattend;
    cin>>totalattend>>studentsattend;
    if(studentsattend>=totalattend*0.8){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}