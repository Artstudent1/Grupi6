
#include "functions.h"
#include <iostream>

using namespace std;

void addExpense(vector<Expense>& expenses) {
    Expense newExpense;
    cout << "Shkruani kategorinë: ";
    cin >> newExpense.category;
    cout << "Shkruani shumën: ";
    cin >> newExpense.amount;
    expenses.push_back(newExpense);
    cout << "Shpenzimi u shtua me sukses!" << endl;
}

void showExpenses(const vector<Expense>& expenses) {
    if (expenses.empty()) {
        cout << "Nuk ka asnjë shpenzim!" << endl;
    } else {
        cout << "Lista e Shpenzimeve:" << endl;
        for (const auto& expense : expenses) {
            cout << "Kategoria: " << expense.category << ", Shuma: " << expense.amount << endl;
        }
    }
}

double calculateTotal(const vector<Expense>& expenses) {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.amount;
    }
    return total;
}
