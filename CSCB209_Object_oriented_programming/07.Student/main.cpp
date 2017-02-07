#include <iostream>
#include <windows.h>
#include <locale.h>
#include "Student.h"
using namespace std;
 
int main() {
     setlocale(0, "Bulgarian");
     SetConsoleOutputCP(866);
 
     Student s;
     s.read();
 
     Student ivan("Иван Иванов", 5.67);
     cout << "По - добър стъдент ли е " << ivan.getName() <<  "от" <<  s.getName() << "?" << boolalpha << (ivan > s) << endl;
 
     ivan = s;
     ivan.print();
 
     return 0;
}
