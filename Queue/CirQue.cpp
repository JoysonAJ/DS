#include<iostream>
using namespace std;

class CirQ{

    int Q_size, q[10], front = -1, back = -1, ele;
    public:
        CirQ(int n){
            Q_size = n;
        }

    void Enqueu(){
        if ( front == 0 &&  back == (Q_size - 1 ) || (front == ( back + 1) ) ) {
            cout << "Full";
            return;
        }
        cout << "Enter the element ";
        cin >> ele;
        
        back = (back + 1) % Q_size;
        q[back] = ele;
        cout << endl << q[back] << " : Is Inserted " << endl;
        if ( front == -1 ){
            front = 0;
        }
    }

    void Dequeue(){
        if( front == -1 ){

            cout << "Empty Queue";
            return;
        }
        cout << endl << q[front] << " : Is Deleted " << endl;
        front = ( front + 1 ) % Q_size;
        if( front == back )
            front=-1;
    
    }

    void display(){
        int i;
        if( front == -1 ){
            cout << "Empty Queue";
            return;
        }
        for( i=front;i != back;i=(i+1)%Q_size){
            cout << q[i] << "\t";
        }
        cout << q[back] << endl;
    }
};

int main(){
    int ch, lmt;
    cout << "Enter the size array";
    cin >> lmt;
    CirQ c(lmt);
    do{
        cout << endl << "1. Enqueue";
        cout << endl << "2. DeQueue";
        cout << endl << "3. Display";
        cout << endl << "4.Exit";
        cout << endl << "Enter choice :";
        cin >> ch;
        switch(ch){
            case 1:
                c.Enqueu();
                break;
            case 2:
                c.Dequeue();
                break;
            case 3:
                c.display();
                break;
        }
    } while (ch < 4);
}