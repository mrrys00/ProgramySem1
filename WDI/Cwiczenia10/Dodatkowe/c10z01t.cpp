#include <iostream>

using namespace std;

struct node {
    int v;
    node *next;
};

void output (node *f) {
    while(f != NULL) {
        cout << f->v << " ";
        f = f->next;
    }
    cout << endl;
}

void insertLast (node *&f, int x) {
    node *r = new node;
    r->v = x;
    r->next = NULL;

    if( f == NULL ) { f = r; return; }

    node *prev = f;
    node *curr = f;
    while(curr != NULL ) {
        prev = curr;
        curr = curr->next;
    }
    
    prev->next = r;
}

int main() {
    node *f = NULL;

    for(int i = 1; i <= 10; i++) insertLast(f,i);

    output(f);


    return 0;
}