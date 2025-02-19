# Tracker-i i Shpenzimeve Personale

## Përshkrimi
Ky është një aplikacion në C++ për menaxhimin e shpenzimeve personale. Përdoruesi mund të shtojë, shfaqë, fshijë dhe llogarisë shpenzimet sipas kategori. Programi ofron një ndërfaqe të thjeshtë dhe intuitivë për menaxhimin e buxhetit personal dhe mbajtjen e regjistrimeve të shpenzimeve.

## Si të përdoret?
1. Klono repository-n:
   ```sh
   git clone https://github.com/Artstudent1/Expense-Tracker.git
2.Kompilo programin 
g++ main.cpp expenseTracker.cpp -o expenseTracker
3.Ekzekuto programin :
./expenseTracker
Preview i Kodit
Kod për Shtimin e Shpenzimeve
void addExpense(vector<Expense>& expenses) {
    Expense newExpense;
    cout << "Shkruani kategorinë: ";
    cin >> newExpense.category;
    cout << "Shkruani shumën: ";
    cin >> newExpense.amount;
    expenses.push_back(newExpense);
    cout << "Shpenzimi u shtua me sukses!" << endl;
}
4. Kod për Shfaqjen e Shpenzimeve
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
5.Kod për Llogaritjen e Shpenzimeve Totale
double calculateTotal(const vector<Expense>& expenses) {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.amount;
    }
    return total;
}
double calculateTotal(const vector<Expense>& expenses) {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.amount;
    }
    return total;
}
6.Kod për Llogaritjen e Shpenzimeve Totale
double calculateTotal(const vector<Expense>& expenses) {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.amount;
    }
    return total;
}
Funksionalitetet
✔️ Shtimi i shpenzimeve (me kategorinë dhe shumën)
✔️ Shfaqja e shpenzimeve sipas kategorive
✔️ Fshirja e shpenzimeve
✔️ Llogaritja e shpenzimeve totale dhe sipas kategorive

Kontributet
Artiol Krasniqi - Implementimi i funksionalitetit të shtimit të shpenzimeve dhe përmirësimi i logjikës së përpunimit të të dhënave.
Albion Seferi - Zhvillimi i funksionaliteteve për shfaqjen e shpenzimeve sipas kategorive dhe llogaritja e shpenzimeve totale.


