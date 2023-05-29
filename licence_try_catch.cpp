#include<iostream>
using namespace std;
int main() {
    int age ;
    cout<<" Enter a age : ";
    cin>>age;
    try {
        if(age>=18) {
            cout<<"Your eligible for driving licence.......";
        }
        else {
            throw age;
        }
    }
    catch(int) {
        cout<<"Sorry but your not 18 year old so your not eligible for driving licence......";
    }
    return 0;
}