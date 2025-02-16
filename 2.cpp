//print absolute value of that integer
// |-7| = 7 and |7| = 7

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter value of n";
cin>>n;
if(n>0){
    cout<<n;
}
else{
    cout<<-n;
}
return 0;
}