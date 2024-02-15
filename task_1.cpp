#include <iostream>
using namespace std;

// Розрахувати підсумкову вартість покупки, первісну вартість запросити у користувача.
// Якщо вартість покупки більша за 1000 грн, але менша за 2000грн, знижка 5%, якщо більше за 2000 грн,
// але менша за 5000 грн, знижка 10%.

int main() {

    int purchase_price;
    int discount = 0;

    cout << "Enter purchase price: " << endl;
    cin >> purchase_price;

    if (purchase_price > 1000 && purchase_price < 2000) {
        discount = 5;
    } else if (purchase_price > 2000 && purchase_price < 5000) {
        discount = 10;
    }

    cout << "Final purchase price: " << purchase_price - (purchase_price * discount) / 100;



    return 0;
}
