#include <iostream>
using namespace std;
int main() {
   
   int num, originalnum,remainder,result=0;

cout<<"enter three numbers"; 
cin>>num;
originalnum=num;

while(originalnum != 0){
   remainder = originalnum %10;
    result+= remainder*remainder*remainder;
    originalnum /= 10;

}

    if(result==num)
    cout<<"it a atmstrong number";

    else
    cout<<"it is not a armstrog number";

    return 0;
}