#include <iostream>

using namespace std;

int Factorial(const int& num) {
    if (num <= 1) return 1;
    return num * Factorial(num - 1);
}

int main() {
    int x;

    cin >> x;

    if (x <= 1) cout << 1;
    else cout << Factorial(x);

    return 0;
}
