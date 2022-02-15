#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node *back;

        node(int n){
            data = n;
            back = NULL;
            next = NULL;
        }
};

void InsertAtHead(node* &head,int val){

    node *n = new node(val);
    if( head == NULL ){
        n->next = head;
        head = n;
        head->back = n;
        head->next = n;
        return;
    }
    node *temp = head;
    while( temp->next != head){
        temp = temp->next;
    }
    n->next = head;
    head->back = n;
    temp->next = n;
    n->back = temp;
    head = n;
}

void InsertAtTail(node* &head,int val){
    
    if( head == NULL){
        InsertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while( temp->next != head ){
        temp = temp->next;
    }
    n->next = head;
    head->back = n;
    temp->next = n;
    n->back = temp;
}

void DeleteAtHead(node* &head){
    if( head == NULL ){
        cout << "Empty List";
        return;
    }
    node *todelete = head;

    node *temp = head;
    while( temp->next != head ){
        temp = temp->next;
    }
    head = head->next;
    temp->next = head;
    head->back = temp;

    delete todelete;
}
void DeleteAtTail(node* &head){
    if( head == NULL){
        cout << "Empty list";
        return;
    }
    node *temp = head;
    while(temp->next !=head){
        temp = temp->next;
    }
    node *todelete = temp;
    temp->back->next = temp->next;
    temp->back = head->back;

    delete todelete;
}

void Display(node* head){
    if( head == NULL){
        cout << "Empty List";
        return;
    }
    node *temp = head;
    do{
        cout << temp->data << "<- ->";
        temp = temp->next;
    } while (temp != head);
    cout<<endl<<temp->data<<"<-head";
    cout<<endl<<endl;
}

int main(){
    int ch, ele;
    node *head = NULL;
    do{
        cout << "1. Insert at Head :" << endl;
        cout << "2. Insert at tail :" << endl;
        cout << "3. Deleting at head :" << endl;
        cout << "4. Deleting at tail :" << endl;
        cout << "5. Display \n 6. Exit" << endl;
        cout << "Enter the choice :";
        cin >> ch;
        switch (ch){
            case 1:
                cout << "Enter the element";
                cin >> ele;
                InsertAtHead(head, ele);
                break;
            
            case 2:
                cout << "Enter the element";
                cin >> ele;
                InsertAtTail(head, ele);
                break;
            
            case 3:
                DeleteAtHead(head);
                break;
            
            case 4:
                DeleteAtTail(head);
                break;

            case 5:
                Display(head);
                break;
        }
    } while (ch < 6);
    return 0;
}