#include <iostream>
using namespace std;
int main(){
    system("cls");
    int b = 0;
    int *ptrB = &b;
    while(b < 20){
        b++;
        if (b % 2 != 0){
        cout << b << "\t" << ptrB << endl;}
    }
}