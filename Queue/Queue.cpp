#include<iostream>
using namespace std;

class queues{
    
    private: 
            int q[20],back=-1,front=-1,limit;
    public:
        queues(int n){
            limit=n;
        }

    void Insert(){
        if(front==0 && back==(limit-1)){
            cout<<"Queue is FUll";
            return;

        }
        int ele;
        cout<<"Enter the element:\t";
        cin>>ele;
        if(front==-1 && back==-1)
            front++;
        q[++back]=ele;
    }

    void Delete(){
        if(front==back){
            front=back=-1;
            cout<<"Queue is Empty";
            return;
        }
        cout<<q[front]<<"Is Deleted";
        front++;
    }
    void display(){
        if(front==back){
            cout<<"Queue is full";
            return;
        }
        for(int i=front;i<=back;i++){
            cout<<q[i]<<"\t";

        }

    }
};

int main(){
    int n,ch;
    cout<<"enter the size of array\t :";
    cin>>n;
    queues q(n);
    
    do{
        cout<<" \n1.ADD \n2.DELETE \n3.DISPLAY \n 4. EXIT\n";
        cout<<"Enter the Choice : ";
        cin>>ch;
        switch (ch){
        case 1:
                q.Insert();
                break;
        case 2:
                q.Delete();
                break;
        case 3: 
                q.display();
                break;
        }
    }while(ch<4);
    return 0;
}
