/*
write a program where user will input a number and the program should print all
numbers till inouted value which is NOT divisible by 3.
*/
#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for(int i = 0; i<=num; i++){
        if(i % 3 == 0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;

}