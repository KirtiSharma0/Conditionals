//take input and check if it is divisible by 5 or 3 but not divisible by 15

#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter n";
    cin>>n;

    if(n%3==0 || n%5==0 && n%15!=0){
        cout<<"divisible by 3 or 5 but not divisible by 15 ";
    }

}