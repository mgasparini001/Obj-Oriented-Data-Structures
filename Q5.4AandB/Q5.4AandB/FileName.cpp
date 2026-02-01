#include <iostream>
using namespace std;
/*
1. It can undermine your learning and make you bad at what you do int he long run because
if you dont go through problem solving yourself, your not going to know how to solve the problem.
your only way is to use a tool, and so you yourself will be useless. The consequences are you
failing to learn coding and becoming 
overly reliant on ai and being expendable since anyone can use ai to solve problems.

2. You can ethically use them by asking them about syntax if you havent learned aspects of language 
syntax, or you can ask them to read your finsihed program to check for any optimizations, 
or ask them to tell you whats wrong with your code without actually telling you how to fix it.
the brain gains you lose from these though are th abilities to think completely for yourself when problem solving.



*/
int main() {
    const int SIZE = 10;
    unsigned int numbers[SIZE];

    // Step 1: Input numbers
    cout << "Enter 10 unsigned integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Step 2: Initialize min and max
    unsigned int minVal = numbers[0];
    unsigned int maxVal = numbers[0];

    // Step 3: Find min and max
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }

    // Step 4: Print the array
    cout << "\nYou entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }

    // Step 5: Print min and max
    cout << "\nMinimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}
