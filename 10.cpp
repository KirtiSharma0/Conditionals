//take 3 input and check if they are the side of triangle

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter side a =";
    cin>>a;
    cout<<"Enter side b =";
    cin>>b;
    cout<<"Enter side c =";
    cin>>c;

    if(a+b>c && b+c>a && c+a>b){
        cout<<"Its a triangle";
    }
    else{
        cout<<"Wrong measurement";
    }
}