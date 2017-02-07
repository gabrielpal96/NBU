#include "Point.h"
#include <iostream>
using namespace std;
 
int main() {
     Point a;
     Point b(3, 12);
     Point c(b);
     Point d = c;
     cout << "a= "; a.print();
     cout << "a.x = " << a.get_x() << endl;
     cout << "b= "; b.print();
     cout << "c= ";
     ++c;
     c.print();
     cout << "d= ";
     d = c++;
     d.print();
     cout << "c = "; c.print();
 
     return 0;
}
