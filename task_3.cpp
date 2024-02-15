#include <iostream>
using namespace std;

// Ввести з клавіатури три числа, позитивні звести до куба, а негативні замінити на 0.11

int main() {

    for(int i = 0; i < 3; i++) {
        double num;
        cout << "Enter number: " << endl;
        cin >> num;

        if (num > 0) {
            num = pow(num, 3);
        } else if (num <= 0) {
            num = 0.11;
        }

        cout << num << endl;
    }

    return 0;
}
