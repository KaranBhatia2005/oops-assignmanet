#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printOddEvenNumbers(int limit) {
    cout << "Odd Numbers up to " << limit << ": ";
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Even Numbers up to " << limit << ": ";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

void printPrimeNumbers(int limit) {
    cout << "Prime Numbers up to " << limit << ": ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int choice;
    int limit;

    do {
        cout << "\nMenu:\n";
        cout << "1. Print Odd and Even Numbers\n";
        cout << "2. Print Prime Numbers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the limit: ";
                cin >> limit;
                printOddEvenNumbers(limit);
                break;
            case 2:
                cout << "Enter the limit: ";
                cin >> limit;
                printPrimeNumbers(limit);
                break;
            case 3:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }
    } while (choice != 3);

    return 0;
}
