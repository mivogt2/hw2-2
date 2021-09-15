//
//  mivogt2-2.cpp
//  hw 2
//
//  Created by Mikayla Vogt on 9/12/21.
//

#include "mivogt2-2.hpp"

#include <iostream>
using namespace std;
int main(){
    int number;
    while(true) {
        cout << "Enter an integer: ";
        cin >> number;
        if (number %5 ==0 || number % 11 == 0) {
            cout << "You have entered in a number divisible by 5 or 11. Exiting program now\n";
            break;
        }
    }
    return 0;
}
