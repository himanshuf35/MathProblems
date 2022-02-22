#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int num1 = 0;
    int num2 = 1;
    int nextNum = 0;
    while(num1 + num2 <= 4000000) {
        nextNum = num1 + num2;
        int temp = num2;
        num2 = nextNum;
        num1 = temp;
        if(nextNum % 2 == 0) {
            cout << "Next Num is: " << nextNum << "\n";
            sum += nextNum;
        }
    }
    cout << "Even Num is: " << sum << "\n";
    return 0;
}