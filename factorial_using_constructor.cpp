#include<iostream>
using namespace std;

class fibo{
 public:
 fibo(){
    int n1=0,n2=1,n3,n;
    cout <<"enter a number";
    cin>>n;
    cout<<"fibonacii series"<<n1<<n2;
    for (int i=2;i<n;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout <<n3;
    }
 }
};

int main(){
    fibo f1;
    return 0;
}
