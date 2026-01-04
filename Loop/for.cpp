#include <iostream>
using namespace std;

int main(){
    int count =1;
    int sum =0;
    int n = 50;
    for(int i=1; i<=n; i++){
        // cout << count << endl;
        // count++;
        sum = sum + i;
        if(i == 6){
            break;
        }
    }
    cout << "sum is :: " << sum << endl;
}