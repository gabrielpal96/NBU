#include <iostream>
#include "Property.h"
using namespace std;
 
int main() {
     Property * properties;
     int numberProperties;
     cout << "Enter number of Properties: ";
     cin >> numberProperties;
     properties = new Property[numberProperties];
     int mode;
 
EnterMode:
     do {
         cout << "Enter mode:\n" <<
              "1. Enter Properties\n" <<
              "2. Print Properties\n" <<
              "3. The most expensive Properties\n" <<
              "0. Exit\n";
         cout << "Enter mode: ";
         cin >> mode;
 
         switch (mode) {
         case 1:
         {
              for (int i = 0; i < numberProperties; i++) {
                   properties->EnterData(properties[i]);
              }
         }
         break;
 
         case 2:
         {
              for (int i = 0; i < numberProperties; i++) {
                   properties->PrintData(properties[i]);
              }
         }
         break;
 
         case 3:
         {
              Property expensive = properties->MostExpensiveProperty(properties, numberProperties);
              cout << "Most expensive Property in this set is: \n";
              properties->PrintData(expensive);
         }
         break;
 
         case 0: break;
 
         default:
              cout << "Invalid command!\n";
              goto EnterMode;
         }
     } while (mode != 0);
 
     delete[] properties;
 
     return 0;
}