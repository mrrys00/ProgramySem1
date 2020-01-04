/*
9. Proszę napisać funkcję, otrzymującą jako parametr wskaźnik na pierwszy
element listy o wartościach typu int, usuwającą wszystkie elementy,
których wartość jest mniejsza od wartości bezpośrednio poprzedzających
je elementów.
v1 -- w rezultacie otrzymamy ciąg niemalejący
*/

#include <iostream>

using namespace std;

struct node {
    int v;
    node * next;
};

void insertFirst (node *&f, int x) {
    node * r = new node;
    r->v = x;
    r->next = f;
    f = r;
}

void output (node * f) {
    while (f != NULL) {
        cout << f->v << " ";
        f = f->next;
    }
    cout << endl;
}

void deleteNextNode(node * f) {
    node * r = f->next;
    f->next = f->next->next;
    delete r;
}

void function (node * f) {
    while (f != NULL and f->next != NULL) {
        if(f->next->v < f->v) deleteNextNode(f);
        else f = f->next;
    }
}

int main() {
    node * f = NULL;
    insertFirst(f,5); insertFirst(f,1); insertFirst(f,4); insertFirst(f,2); insertFirst(f,3); insertFirst(f,3);
    output(f);
    function(f);
    output(f);

    node * s = NULL;
    for(int i = 1; i < 5; i++) insertFirst(s,i);

    output(s);
    function(s);
    output(s);

    node * t = NULL;
    insertFirst(t,1); insertFirst(t,3); insertFirst(t,2); insertFirst(t,4); 
    output(t);
    function(t);
    output(t);

    return 0;

}