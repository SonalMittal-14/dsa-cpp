#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "enter you age ";
    cin >> age ;

    if(age >= 18){
        cout << "person can vote ";
    }else{
        cout << "person cannot vote";
    }
}