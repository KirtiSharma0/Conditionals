//take 3input and find the greatest

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"write three integers";
cin>>a>>b>>c;

if(a>b && a>c){
    cout<<"a is greatest";
}
if(b>a && b>c){
    cout<<"b is greatest";
}
if(c>b && c>a){
    cout<<"c is greatest";
} 
return 0 ;
}