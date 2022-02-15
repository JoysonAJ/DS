#include<iostream>
using namespace std;

class DEqueue{
    private:
        int front=-1, back=-1, Dq_size,dq[20];
    public:
        DEqueue(int n){
            Dq_size = n;
        }
    
        void EnqueueBack(){
            if ( front == 0 && back == Dq_size-1){
                cout << "Queue IS full";
                return;
            }
            if ( !front==-1 && back== Dq_size-1) {
                cout << "Insert fromt Front end \n back end reached last location";
                return;
            }
            
            cout << "Enter the element\t:";
            cin >> dq[++back];
            if (front == -1)
                front++;
        }

        void EnqueueFront(){
            if (front == 0 && back == Dq_size - 1){
                cout << "\nQueue is Full";
                return;
            }
            if(front <= 0){
                cout << "\nInsertion from front not  possible";
                return;
            }
            cout << "Enter the element ";
            cin >> dq[--front];
        }

        void DequeueFront(){
            if( front == -1 && back == -1){
                cout << "\n empty Queue";
                return;
            }
            cout<<"\n Deleted element"<<dq[front];
            front++;
            if(front==back){
                front=back=-1;
            }
        }
        void DequeueBack(){
            if( front == -1 && back == -1){
                cout << "\n empty Queue";
                return;
            }
            cout<<"\n Deleted Element \t :"<<dq[back];
            back--;
            if(back==front)
                front=back=-1;
        }

        void Display(){

            if( front == -1 && back == -1){
                cout << "empty Queue";
                return;
            }
            for (int i = front; i <= back;i++){
                cout << dq[i] << "\t";
            }
        }
};

int main(){
    int ary_size,ch;
    cout << "Enter the Array Size";
    cin >> ary_size;
    DEqueue dq(ary_size);
    do{
        cout << "\t 1.Enqueue\t--\t Back \n ";
        cout << "\t 2.Enqueue\t--\t Front \n ";
        cout << "\t 3.Dequeue\t--\t Front \n ";
        cout << "\t 4.Dequeue\t--\t Back \n ";
        cout << "\t 5.Display\n ";
        cout << "\n Enter the Choice";
        cin >> ch;
        switch(ch){
            case 1:
                dq.EnqueueBack();
                break;
            case 2:
                dq.EnqueueFront();
                break;
            case 3:
                dq.DequeueFront();
                break;
            case 4:
                dq.DequeueBack();
                break;
            case 5:
                dq.Display();
                break;           
        }
    } while (ch < 6);
    return 0;
}

