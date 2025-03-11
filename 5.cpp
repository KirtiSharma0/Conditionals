//take input and check divisiblity by 5 and 3

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter integer";
cin>>n;
if(n%3==0 && n%5==0){
    cout<<"divisible by 3 and 5";
}
else{
    cout<<"not divisible";
}
return 0;
}