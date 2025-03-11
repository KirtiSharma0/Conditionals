//take input and check divisiblity by 5 or 3

#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter value";
cin>>a;

if(a%3==0  || a%5==0){
    cout<<"divisible by 5 or 3";
}
else{
    cout<<"not divisible by 5 and 3";
}
return 0;
}