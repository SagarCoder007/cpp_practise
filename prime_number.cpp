#include<iostream>
#include<conio.h>
using namespace std;
class test{
    int n,count;
    public:
    void input(){
        cout <<"enter the number";
        cin>>n;

    }

void output(){
    count =0;

    for (int i=1;i<=n;i++){
     if (n%i==0){
        count++;
     }
    }
    if(count==2){
        cout <<"itss a prime number";
    }
     else 
        cout <<"its nott an prime number";
}
};

int main()
{
    test name1;
    name1.input();
    name1.output();
    return 0;
}