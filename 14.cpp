//enter month number and print month days

#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter month number";
    cin>>x;
    switch(x){
        case 1:
        cout<<"Jan=31";
        break;
        case 2:
        cout<<"Feb=28";
        break;
        case 3:
        cout<<"March=31";
        break;
        case 4:
        cout<<"April=30";
        break;
         
    }

    return 0 ;
}