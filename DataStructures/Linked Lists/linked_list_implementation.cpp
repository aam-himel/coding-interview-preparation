#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

struct Node {
    int data;
    Node *next;
};

// Print List
void printList(Node *head) {
    while(head != NULL) {
        cout << head->data << " ,cnt = " << ++cnt << endl;
        head = head->next;
    }
}

// Insertion
void insertAtFront(Node **head, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = *head;
    *head = temp;

}
void insertAtEnd(Node **head, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if(*head == NULL){
        *head = temp;
        return;
    }


}
void insertAtPostion(){}

int main()
{
    Node *head = new Node();
    head->data = 4;
    head->next = NULL;

    insertAtFront(&head, 2);
    insertAtFront(&head, 23);
    insertAtFront(&head, -1);
    insertAtFront(&head, -2);
    printList(head);
    return 0;
}
