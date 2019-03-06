
#include <iostream>
#include <vector>

using namespace std;

// Computes the number of digits in num
// (assuming num >= 0)
int numDigits(int number) {
    int count = 1;
    
    while (number > 10) { // while still can remove a digit
        number = number / 10;
        count += 1;
    }

    return count;
}


int main() {

    // Printing a sequence of numbers and reporting
    // the number of digits in them

    int n = 110;
    int digits;

    while (n < 100000) {

        digits = numDigits(n);

        cout << n;
        cout << " ";
        cout << digits;
        cout << endl;

        n = n * 3 + n/10;
    }

    return 0;
}
