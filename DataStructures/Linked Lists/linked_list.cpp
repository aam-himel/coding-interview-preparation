#include<bits/stdc++.h>
using namespace std;

//
struct Node {
    int data;
    Node *next;
};

void printList(Node *head) {
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}


void insertAtHead(Node **head, int value){
    Node *temp = new Node();
    temp->data = value;

    temp->next = (*head);
    cout << "head star : " << head << endl;
    (*head) = temp;
};
void insertAtRandom(){};
void insertAtTail(){};
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 40;
    head->next = second;

    second->data = 50;
    second->next = third;

    third->data = 70;
    third->next = NULL;


    insertAtHead(&head, 10);
    printList(head);
    return 0;
}
