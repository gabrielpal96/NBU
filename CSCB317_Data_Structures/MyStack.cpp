#include <iostream>
using namespace std;

typedef struct Stack * pointer;

struct Stack {
    int data;
    pointer next;
};

int main() {
    pointer na = NULL;
    pointer p� = NULL;
    pointer q = NULL;
    int data = 0;
    
    while (data > 0) {
        cin >> data;
        p� = new Stack;
        p�->data = data;
        p�->next = na;
        na = p�;
    }
    na = na->next;
    p� = na;
    
    while (p� != NULL) { 
        cout << p�->data << endl;
        p� = p�->next;
    }

    delete p�;
    return 0;
}