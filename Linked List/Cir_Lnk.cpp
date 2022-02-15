#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        
        node(int val){
            data = val;
            next = NULL;
        }
};

void InsertAtHead(node* &head,int val){

    node *n = new node(val);
    if( head == NULL ){
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    
    if( temp->next != head ){
        while(temp->next!=head){
            temp = temp->next;
        }
    }
    
    temp->next = n;
    n->next = head;
    head=n;
    
}

void InsertAtTail(node* &head,int val){

    node *n = new node(val);

    if( head == NULL){
        InsertAtHead(head, val);
        return;
    }

    node *temp = head;
    
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void DeleteAtHead(node* &head){

    if( head == NULL){
        cout << "Empty List" << endl;
        return;
    }
    node *todelete = head;

    node *temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    head = head->next;
    temp->next = head;

    delete todelete;
}

void DeleteAtTail(node* head){
    
    if( head == NULL){
        cout << "Empty List"<< endl;
        return;
    }
    node *temp = head;
    
    if(temp->next == head){
        DeleteAtHead(head);
        return;
    }

    while(temp->next->next != head){
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = head;
}

void Display(node* head){
    
    if(head == NULL){
        cout<<"Empty List"<<endl;;
        return;
    }

    node *temp = head;
    cout<<endl<<"\t\t\t";
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout<<endl<< temp->data << "<- head" << endl;
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
        switch(ch){
            case 1:
                cout << "Enter Element the element :";
                cin >> ele;
                InsertAtHead(head, ele);
                break;
            case 2:
                cout << "Enter the element :";
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