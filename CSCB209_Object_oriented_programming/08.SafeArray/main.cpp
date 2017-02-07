#include <iostream>
#include <Windows.h>
#include <locale.h>
#include "SafeArray.h"
using namespace std;
 
int main() {
     setlocale(0, "Bulgarian");
     SetConsoleOutputCP(866);
 
     int arrayInt[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 
     SafeArray arr(arrayInt, 10);
 
     for (int i = 0; i <= 10; i++)
         cout << "arr[" << i << "] = " << arr[i] << endl;
 
     return 0;
}
