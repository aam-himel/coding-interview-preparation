#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main()
{

    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;


    head = new Node();
    first = new Node();
    second = new Node();


    head->data = 40;
    head->next = first;

    first->data = 50;
    first->next = second;

    second->data = 60;
    second->next = NULL;


    while(head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }

    return 0;
}
