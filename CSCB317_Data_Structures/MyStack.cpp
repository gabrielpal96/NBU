#include <iostream>
using namespace std;

typedef struct Stack * pointer;

struct Stack {
    int data;
    pointer next;
};

int main() {
    pointer na = NULL;
    pointer pî = NULL;
    pointer q = NULL;
    int data = 0;
    
    while (data > 0) {
        cin >> data;
        pî = new Stack;
        pî->data = data;
        pî->next = na;
        na = pî;
    }
    na = na->next;
    pî = na;
    
    while (pî != NULL) { 
        cout << pî->data << endl;
        pî = pî->next;
    }

    delete pî;
    return 0;
}