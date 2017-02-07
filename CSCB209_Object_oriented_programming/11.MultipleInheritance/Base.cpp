#include<iostream>
using namespace std;
 
class base1 {
private:
     int b1;
public:
     base1(int x = 0) {
         cout << "base1(" << x << ")\n";
         b1 = x;
     }
 
     ~base1() { 
        cout << "~base1()\n"; 
      }
};
 
class base2 {
private:
     int b2;
public:
     base2(int x = 0) {
         cout << "base2(" << x << ")\n";
         b2 = x;
     }
 
     ~base2() { 
        cout << "~base2()\n"; 
      }
};
 
class base3 {
private:
     int b3;
public:
     base3(int x = 0) {
         cout << "base3(" << x << ")\n";
         b3 = x;
     }
 
     ~base3() { 
        cout << "~base3()\n"; 
      }
};
 
class derived : public base1, base2, protected base3 {
private:
     base1 d1;
     base2 d2;
     base3 d3;
public:
     derived(int x) :base1(x), base2(x), base3(x) {
         cout << "derived: \n";
         d1 = base1(1);
         d2 = base2(2);
         d3 = base3(3);
     }
 
     ~derived() { 
        cout << "~derived()\n"; 
      }
};
 
int main() {
     derived d(5);
 
     return 0;
}
