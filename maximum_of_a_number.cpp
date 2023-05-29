#include<iostream>
using namespace std;
class maxi{
int a,b,c;
public:
 maxi(int a,int b,int c){
    a=a;
    b=b;
    c=c;

 }

 maxi(){
    cout<<"enter three vales for a,b,c"<<endl;
cin>>a>>b>>c;
if(a>b&&a>c){
cout <<"a is larger";
}
if(b>a&&b>c){
cout <<"b is larger";
}
if(c>b&&c>a){
cout <<"a is larger";
}

else 
cout <<"you r typing the wrong input type different !!!...";

 }

 int main(){
    maxi m1;
    return 0;
 }
 
};