#include <iostream>
#include "RegTask.h"
using namespace std;

int main() {
    RegTask x;
    for (size_t i = 0; i < 10; i++) {
        x.newRegistry(rand() % 10 + 1, (((double)rand() / RAND_MAX)*280. + 20));
    }
    x.print();
    cout << "Total sum: " << x.sumTotal() << endl;
    cout << "Max paid task: " << x.maxLevelPaid() << endl;

    int sz = 5;
    int level[] = {1, 2, 3, 4, 5};
    double paid[] = {34.5, 44.5, 55.7, 78, 900};

    RegTask y(sz, level, paid);
    y.print();
    cout << "Total sum: " << y.sumTotal() << endl;
    cout << "Max paid task: " << y.maxLevelPaid() << endl;

    int k;
    cout << "enter level: ";
    cin >> k;
    cout << "search for x: " << x.searchLevel(k) << endl;
    cout << "search for y: " << y.searchLevel(k) << endl;
    
    return 0;
}