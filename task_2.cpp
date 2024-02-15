#include <iostream>
using namespace std;

// Написати програму для розрахунку надбавки до зарплати за стаж.
// Cтаж запитати у користувача. Якщо стаж від 5 до 10 років надбавка
// становить 2%, якщо стаж від 10 до 20 років – 10%.

int main() {

    int salary;
    int experience;

    cout << "Enter salary: " << endl;
    cin >> salary;

    cout << "Enter experienc: " << endl;
    cin >> experience;

    if (experience > 5 && experience < 10) {
        salary = salary + (salary * 2) / 100;
    } else if (experience > 10 && experience < 20) {
        salary = salary + (salary * 10) / 100;
    }

    cout << "Final salary: " << salary;

    return 0;
}
