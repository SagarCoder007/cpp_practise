#include <iostream>
using namespace std;

class Pattern
{
private:
   int Rows;

public:
    Pattern(int r){
        Rows = r;
    }

    void printpattern(){
        for (int i=1;i<=Rows;i++){
            for(int k=1;k<=i;k++){
                cout<<k<< " ";
            }
            cout<<endl;
        }
    }
};

int main(){

int numrows =10;
Pattern pattern(numrows);
pattern.printpattern();
return 0;

}
