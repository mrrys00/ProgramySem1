#include <iostream>

using namespace std;

struct node {
    int v;
    node *next;
};

void insertFirst (node *&f, int x) {
    node *r = new node;
    r->v = x;
    r->next = f;
    f = r;
}

bool isCycle (node *f) {
    if (f == NULL) return false;
    node *a, *b;
    a = f;
    b = f->next;
    while (b != NULL and b != a) {
        a = a->next;
        b = b->next;
        if( b != NULL ) b = b->next;
    }

    if( a == b ) return true;
    return false;
}

void makeCycle (node *f) {
    node *r = f;
    while( r->next != NULL ) r = r->next;


    r->next = f;
}

void output (node *f) {
    while(f != NULL) {
        cout << f->v << " ";
        f = f->next;
    }
    cout << endl;
}

int main() {
    node *f = NULL;

    for( int i = 10; i > 0; i-- ) insertFirst(f,i);

    output(f);

    if( isCycle(f) ) cout << "YES" << endl;
    else cout << "NO" << endl;

    makeCycle(f);
    if( isCycle(f) ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
