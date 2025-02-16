//take input and check if it is a three digit number

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter an integer";
cin>>n;
 
if(n>=100 && n<=999){
    cout<<"three digit number";
}
else{
    cout<<"not a three digit number";
}

return 0;
}