#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(inputFile.is_open() && outputFile.is_open()){
        char ch;
        while(inputFile.get(ch)){
            outputFile.put(ch);
        }
        cout << "File copied successfully!" << endl;

        inputFile.close();
        outputFile.close();
    }

}