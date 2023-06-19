#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    // Read numbers from input until encountering 42
    int number;
    while (cin >> number) {
        if (number == 42) {
            break;  // Stop processing input if 42 is encountered
        }
        numbers.push_back(number);
    }

    // Print the numbers
    for (const auto& num : numbers) {
        cout << num << endl;
    }

    return 0;
}
