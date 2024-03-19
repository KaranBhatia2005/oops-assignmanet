#include <iostream>
#include <string>

using namespace std;

class Number {
private:
    int decimal;

public:
    Number(int num) {
        decimal = num;
    }

    string decimalToBinary() {
        if (decimal == 0)
            return "0";

        string binary = "";
        int temp = decimal;

        while (temp > 0) {
            binary = to_string(temp % 2) + binary;
            temp /= 2;
        }

        return binary;
    }
};

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    Number n(num);

    cout << "Binary representation: " << n.decimalToBinary() << endl;

    return 0;
}
