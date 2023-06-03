#include <iostream>
using namespace std;

int main () {

    cout << "Type in your age!" << endl;

    int age;
    cin >> age;

    if (age >= 18) {
        cout << "You can buy this game!" << endl;
    } else if (age < 18) {
        cout << "You can't buy this game!" << endl;
    } else {
        cout << "Incorrect input!" << endl;
    }
    return 0;
}
