//input selling price and cost price and determine profit or loss and how much.

#include<iostream>
using namespace std;
int main(){
int CP,SP;
cout<<"value of CP";
cin>>CP;
cout<<"value of SP";
cin>>SP;

if(SP>CP){
    cout<<"Its a profit"<<endl;
    cout<<"Amoutn of profit";
    cout<<SP-CP;
}

if(SP==CP){
    cout<<"no profit no loss";
}

else {
    cout<<"Its a loss"<<endl;
    cout<<"Amount of loss";
    cout<<CP-SP;
}

return 0;
}