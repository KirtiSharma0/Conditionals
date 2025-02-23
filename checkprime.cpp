#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter any number = ";
    cin>>n;
    if(n%n==0 && n%1==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime ie composite number";
    }
    return 0;
}