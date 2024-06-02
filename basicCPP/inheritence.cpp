#include<iostream>
using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken\n";
        }
        void makeSalad() {
            cout << "The chef makes salad\n";
        }
        void makeSpecialDish() {
            cout << "The chef make bbq\n";
        }
};

int main() {

    Chef chef;
    chef.makeChicken();

    return 0;
}