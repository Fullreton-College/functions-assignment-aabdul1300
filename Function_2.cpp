#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void processPayment();
double getCoinValue(string coinName);

int main() {
      processPayment();
return 0;
}

void processPayment() {
      double total = 0.0;
      double price = 3.50;
string input;

cout << "Twinkie Price: $3.50. Acceptable; dollar, quater, dime, nickel. " << endl;

while (total < price) {

      cout << "Insert coin: ";
      cin >> input;
      total += getCoinValue(input);
      cout << "Total entered; $" << fixed << setprecision(2) << total endl;
      
      }

cout << "Enjoy your deep-fried twinkie!" << endl;
if (total > price) {
cout << "Change returned: $" << (total - price) << endl;
}

}

double getCoinValue(string coinName) {
      if (coinName == "dollar") return 1.00;
      if (coinNmae == "quater') return 0.25;
      if (coinName == "dime") return 0.10;
      if (coinName == "nickel") return 0.05;

            return 0.0;
}
            



