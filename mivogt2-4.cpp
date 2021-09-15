//
//  mivogt2-4.cpp
//  hw 2-4
//
//  Created by Mikayla Vogt on 9/12/21.
//

#include "mivogt2-4.hpp"
#include <iostream>

using namespace std;

int main() {
    int number;
    int sum =0;
    int product =1;
    int digit;
    cout << "Enter an integer: ";
    cin >> number;
    
    while (number>0) {
        digit = (number%10);
        sum += digit;
        product *= digit;
        number = number/10;
    }
    cout << "The sum is: " << sum << " The product is: " << product << endl;
    return 0;
}
