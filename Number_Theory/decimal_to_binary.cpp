// The approach is to divide the number by 2 and store it's remainder and then at last the binary is the bottom to top of stored remainder
#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }

    string binary = "";

    while (n > 0) {
        int remainder = n % 2;
        binary = to_string(remainder) + binary;
        n = n / 2;
    }

    return binary;
}

int main() {
    int n = 13;

    cout << "Binary: " << decimalToBinary(n) << endl;

    return 0;
}
