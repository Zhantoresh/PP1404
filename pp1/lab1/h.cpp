#include <iostream>
using namespace std;
int main(){
    int cpp,python,total;
    cin>>cpp>>python>>total;
    cout<<total - (total-cpp) - (total-python);
}