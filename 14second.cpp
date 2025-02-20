//second method using condiiton in switch

#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter month number";
    cin>>x;

// month no. 13578 10 12 = 31 days
//month no. 469 11 = 30days
//2month = 28days

    switch(x<=7 && x%2!=0){
        case 1:
        cout<<"31days";
        break;
    }
    switch(x>=8 && x%2==0){
        case 1:
        cout<<"31days";
        break;
    }
    switch(x==4 || x==6 || x==9|| x==11){
        case 1:
        cout<<"30days";
        break;
    }
    switch(x==2){
        case 1:
        cout<<"28days";
    }
    return 0;
}