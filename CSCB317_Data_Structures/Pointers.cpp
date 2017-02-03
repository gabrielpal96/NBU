#include <iostream>
using namespace std;

int main() {
    typedef struct Element * pointer;

    struct Element {
        int data;
        pointer next;
    };

    pointer na = NULL;
    pointer pî = NULL;
    pointer q = NULL;

    pî = new Element;
    pî->data = 3;
    cout << pî->data << endl;

    q = new Element;

    q->data = 89;
    cout << q->data <<endl;

    q = pî;
    cout << q->data <<endl;
    cout << pî;

    return 0;
}