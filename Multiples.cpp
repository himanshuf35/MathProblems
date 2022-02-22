#include <stdio.h>
#include <iostream>

using namespace std;

bool checkForMultipleOfThree(int number) {
    int digitSum = 0;
    while(number > 9) {
        int digit = number % 10;
        digitSum += digit;
        number = number / 10; 
    }
    digitSum += number;
    if(digitSum % 3 == 0) {
        return true;
    }else {
        return false;
    }
}

bool checkForMultipleOfFive(int number) {
    int lastDigit = number % 10;
    if(lastDigit == 0 || lastDigit == 5) {
        return true;
    } else {
        return false;
    }
}

bool checkForMultiples(int number) {
    bool isMultipleOfThree = checkForMultipleOfThree(number);
    bool isMultipleOfFive = checkForMultipleOfFive(number);
    return isMultipleOfThree || isMultipleOfFive;
}

int main() {
    int eligibleNumberSum = 0;
    for(int number = 3; number < 1000; number++) {
        bool isEligible = checkForMultiples(number);
        if(isEligible) {
            eligibleNumberSum += number;
            cout << "Eligible Number is: " << number << "\n";
        }
    }
     cout << "Sum is: " << eligibleNumberSum << "\n";
    return 0;
}