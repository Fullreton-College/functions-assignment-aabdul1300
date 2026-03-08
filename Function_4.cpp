#include <iostream>
using namespace std;

void computeCoins(int coinValue, int& num, int& amountLeft) {
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
}

int main() {
    char choice;
    do {
        int amount, quarters, dimes, pennies;
        cout << "Enter amount (1-99 cents): ";
        cin >> amount;

        int originalAmount = amount;
        int remaining = amount;

        computeCoins(25, quarters, remaining);
        computeCoins(10, dimes, remaining);
        pennies = remaining; 

        cout << originalAmount << " cents can be given as: "
             << quarters << " quarter(s), "
             << dimes << " dime(s), and "
             << pennies << " penny(pennies)." << endl;

        cout << "Continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
