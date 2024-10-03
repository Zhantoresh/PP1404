#include <bits/stdc++.h>
using namespace std;
bool isleap(int year){
    if(year%4==0 and year%100!=0 or year%400==0){
        return true;
    }
    return false;
}
int main(){
    int day,month,year;
    cin>>day>>month>>year;
    if(day>31 or month>12 or day<1 or month<1){
        cout<<"no";
        return 0;
    }
    else{
        if(month==2){
            if(isleap(year) and day<=29){
                cout<<"yes";
                
            }
            else if(!isleap(year) and day<=28){
                cout<<"yes";
            }
            else{
                cout<<"no";
            }  
        }
        else if(month==4 or month==6 or month==9 or month==11){
            if(day<=30){
                cout<<"yes";
            }
            else{
                cout<<"no";
            }
        }
        else if(month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12){
            if(day<=31){
                cout<<"yes";
            }
        }
    }
}