#include <iostream>
using namespace std;

int main() {
    typedef struct Element * pointer;

    struct Element {
        int data;
        pointer next;
    };

    pointer na = NULL;
    pointer p� = NULL;
    pointer q = NULL;

    p� = new Element;
    p�->data = 3;
    cout << p�->data << endl;

    q = new Element;

    q->data = 89;
    cout << q->data <<endl;

    q = p�;
    cout << q->data <<endl;
    cout << p�;

    return 0;
}