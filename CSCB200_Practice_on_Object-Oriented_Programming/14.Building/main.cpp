#include "Building.h"
#include <iostream>
using namespace std;

int main() {
    Building * arr[8];
    for (size_t i = 0; i < 8; i++) {
        int tmp = rand() % 4;   //0, 1, 2, 3
        switch (tmp) {
            case 0:
                arr[i] = new Building("Building", "Sofia", 1001.23, 7, 13.2);
            break;
            
            case 1:
                arr[i] = new Office("Office", "Plovdiv", 1200.24, 8, 16.4, 127);
            break;
            
            case 2:
                arr[i] = new Hotel("Hilton", "Varna", 16789, 15, 25.4, 200, 20);
            break;
            
            case 3:
              arr[i] = new Factory("Stomana Ad", "Pernik", 1234567, 23, 27.78, 20, 34, 7);
            break;
        }
    }
    
    for (size_t i = 0; i < 8; i++) {
        cout << *arr[i] << endl << endl;
    }
    
    return 0;
}