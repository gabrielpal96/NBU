#include "Doctor.h"
#include "Person.h"
#include "Patient.h"
using namespace std;
 
int main() {
     Doctor d;
     cout << "Enter Doctor";
     cin >> d;
     
     ofstream file("BlackList.txt", ios::out);
     if (!file) {
         cerr << "Could not open file\n";
         return -1;
     }
     
     d.BlackList(file);
     file.close();
 
     return 0;
}