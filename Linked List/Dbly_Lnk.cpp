#include <iostream>
using namespace std;

class Node{
    
    public:
            int data;
            Node* next;
            Node* back;

            Node(int n){
                data = n;
                next = NULL;
                back = NULL;
        }
};

void InsertAtHead(Node* &head,int val){

    Node *n = new Node(val);
    n->next = head;
    if(head!=NULL){
        head->back = n;
    }
    head = n;
}

void InsertAtTail(Node* &head,int val){
    
    if(head == NULL){
        InsertAtHead(head, val);
        return;
    }

    Node *n = new Node(val);
    Node *temp = head;

    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->back = temp;
}

void DeleteAtHead(Node *&head){

    if(head == NULL){
        cout << "Empty List";
        return;
    }
    Node *todelete = head;
    head = head->next;
    head->back = NULL;

    delete todelete;
}

void DeleteAtTail(Node *&head){

    if(head == NULL){
        cout << "Empty List";
        return;
    }

    Node *temp = head;
    while( temp->next != NULL ){
        temp = temp->next;
    }
    Node *todelete = temp;
    temp->back->next = temp->next;

    delete todelete;
}

void Display(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << "<-->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    int ch, ele;
    Node *head = NULL;
    do {
        cout << "\n  \t\tInsert Element    \n\n";
        cout << endl << "1.Insert at Head  ";
        cout << endl << "2.Insert at tail"; 
        
        cout << "\n \t\t Deleting the Element  \n\n";
        cout << endl << "3.Deleting at Head  ";
        cout << endl << "4.Deleting at tail";
        
        cout << endl << "\n5.Display  \n6.exit";
        cout << endl << "Enter The choice  : ";
        cin >> ch;
        switch (ch){
            case 1:
                    cout << "Enter The element  :";
                    cin >> ele;
                    InsertAtHead(head, ele);
                    cout << "\n \n ";
                    break;
            case 2:
                    cout << "Enter The element  :";
                    cin >> ele;
                    InsertAtTail(head, ele);
                    cout << "\n \n ";
                    break;
            case 3:
                    DeleteAtHead(head);
                    cout << "\n \n ";
                    break;
            case 4:
                    DeleteAtTail(head);
                    cout << "\n \n ";
                    break;

            case 5:
                    Display(head);
                    cout << "\n \n ";
                    break;
            
        }
    } while (ch < 5);
    return 0;
}