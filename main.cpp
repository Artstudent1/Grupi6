
#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    vector<Expense> expenses;
    int choice;

    do {
        cout << "Zgjidhni nje opsion:" << endl;
        cout << "1. Shto Shpenzim" << endl;
        cout << "2. Shfaq Shpenzimet" << endl;
        cout << "3. Llogarit Shpenzimet Totale" << endl;
        cout << "4. Dalja" << endl;
        cout << "Zgjedhja: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addExpense(expenses);
                break;
            case 2:
                showExpenses(expenses);
                break;
            case 3:
                cout << "Shpenzimet Totale: " << calculateTotal(expenses) << endl;
                break;
            case 4:
                cout << "Mirupafshim!" << endl;
                break;
            default:
                cout << "Opsion i pavlefshëm!" << endl;
        }
    } while (choice != 4);

    return 0;
}
