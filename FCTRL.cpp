#include <iostream>

using namespace std;

int countTrailingZeros(int n) {
    int count = 0;

    while (n >= 5) {
        n /= 5;
        count += n;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int num;
        cin >> num;

        int zeros = countTrailingZeros(num);
        cout << zeros << endl;
    }

    return 0;
}
