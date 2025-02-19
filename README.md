Grupi 06
# Tracker-i i Library Management

## Përshkrimi
Ky është një aplikacion në C++ për menaxhimin e shpenzimeve personale. Përdoruesi mund të shtojë, shfaqë, fshijë dhe llogarisë shpenzimet sipas kategori. Programi ofron një ndërfaqe të thjeshtë dhe intuitivë për menaxhimin e buxhetit personal dhe mbajtjen e regjistrimeve të shpenzimeve.

## Karakteristikat e Projektit:
 1.Shto Libër:
Lejon përdoruesit të shtojnë libra të rinj në sistem, duke përfshirë të dhënat si titulli, autori dhe viti i botimit.
 
  
  2.Shiko Librat:
Përdoruesi mund të shikojë të gjithë librat e regjistruar në sistem me detaje si titulli, autori dhe viti i botimit.
 
  
  3.Kërko Libër: 
Mundësia për të kërkuar libra në sistem bazuar në titull, autor ose vit të botimit.

  
  4.Regjistro Huazimin
: Përdoruesi mund të regjistrojë huazimin e librave, duke specifikuar emrin e përdoruesit që po huazon librin.
 
   
   5.Kthe Libër:
Përdoruesi mund të kthejë librat e huazuara në bibliotekë.
 
   
   6.Shiko Librat e Huazuara:
Mundësia për të parë librat që janë huazuar dhe emrat e përdoruesve që i kanë marrë ato.

## Struktura e Projektit:
Projekti është i ndarë në disa skedarë:

main.cpp: Përdoruesi ndërvepron me programin dhe përdor menu për të kryer operacione të ndryshme.

functions.cpp: Implementimi i funksioneve për shtimin, kërkimin dhe shikimin e librave.

functions.h: Deklaratat e funksioneve që do të përdoren.

## Si të përdoret?
  
  1. Klono repository-n:
   ```sh
   git clone https://github.com/Artstudent1/Expense-Tracker.git
  
  2.Kompilo programin
g++ main.cpp expenseTracker.cpp -o expenseTracker

   3.Ekzekuto programin :
./expenseTracker
                  Preview i Kodit

                        4. Kod për Shtimin e Shpenzimeve
void addExpense(vector<Expense>& expenses) {
    Expense newExpense;
    cout << "Shkruani kategorinë: ";
    cin >> newExpense.category;
    cout << "Shkruani shumën: ";
    cin >> newExpense.amount;
    expenses.push_back(newExpense);
    cout << "Shpenzimi u shtua me sukses!" << endl;
}
                       5. Kod për Shfaqjen e Shpenzimeve
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
                        6.Kod për Llogaritjen e Shpenzimeve Totale
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
                     7.Kod për Llogaritjen e Shpenzimeve Totale
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


