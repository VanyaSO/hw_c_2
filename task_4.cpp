#include <iostream>
using namespace std;

// Дано натуральне число. Визначити, чи воно є парним, чи закінчується цифрою 3

int main() {

    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "Number even" << endl;
    } else {
        cout << "Number odd" << endl;
    }

    if (num % 3 == 3) {
        cout << "Number finished 3" << endl;
    } else {
        cout << "Number not finished 3" << endl;
    }


    return 0;
}
