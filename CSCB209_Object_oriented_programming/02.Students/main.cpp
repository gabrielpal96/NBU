#include <iostream>
#include "Student.h"
using namespace std;
 
int main() {
    Student s;
     s.read();
 
     Student student("Georgi Stoyanov", 5.67);
     cout << "Is better student " << student.getName()
          << " than " << s.getName() << "? " << boolalpha
          << student.is_better_than(s) << endl;

     return 0;
}
