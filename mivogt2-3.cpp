//
//  mivogt2-3.cpp
//  hw 2.3
//
//  Created by Mikayla Vogt on 9/12/21.
//

#include "mivogt2-3.hpp"
#include <iostream>

using namespace std;
int main() {
    int sum = 45;
    for (int n=10; n<=25; n++) {
        sum += n;
        cout << "T(" << n<< ") = " << sum << endl;
    }
    return 0;
}
