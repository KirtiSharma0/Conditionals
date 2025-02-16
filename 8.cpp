//check character is alphabet or not
//use ASCII values
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character";
    cin>>ch;
    int ascii = (int)ch;

    // if(ascii>=97 && ascii<=122 ){
    //     cout<<"lowercase alphabet";
    // }
    // if(ascii>=65 && ascii<=90){
    //     cout<<"uppercase alphabet";
    // }

    if (ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"alphabtet";
    }
    else {
        cout<<"not a alphabet"; 
    }
        
    return 0;
}