#include <iostream>
#include <iomainip>

using namspace std;

int main() {
    char choice;
    do {
        int currH, currM, waitH, waitM;
        char colon;

        cout << "Current time (HH:MM): ";
        cin >> currH >> colon >> currM;
        cout << "Waiting time (HH:MM): ";
        cin >> waitH >> colon >> waitM;

        int finalM = (currM + waitM) % 60;
        int extraH = (currM + waitM) / 60;
        int finalH = (currH + waitH + extraH) % 24;

        cout << "Completion Time: " 
             << setfill('0') << setw(2) << finalH << ":" 
             << setw(2) << finalM << endl;

        cout << "Enter Y to continue, any other halts: ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

