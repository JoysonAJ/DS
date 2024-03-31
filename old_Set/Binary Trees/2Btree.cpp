// Build tree from Inorder and PreOrder
#include<iostream>
using namespace std;

class Btree {

public:
    int data;
    Btree *Right;
    Btree *Left;
    
    Btree(int n){
        data = n;
        Right = NULL;
        Left = NULL;
    }
};

int Search(int inOrder[],int start,int end,int curr){
    for (int i = 0; i <= end;i++){
        if(inOrder[i] == curr)
            return i;
    }
    return -1;
}

Btree* BuildTree(int preOrder[],int inOrder[],int start,int end) {
    static int idx = 0;

    if( start > end )
        return NULL;

    int curr = preOrder[idx];
    idx++;
    Btree *root = new Btree(curr);

    if(start==end)
        return root;

    int pos = Search(inOrder, start, end, curr);

    root->Left = BuildTree(preOrder, inOrder, start, pos - 1);
    root->Right = BuildTree(preOrder, inOrder, pos + 1, end);

    return root;
}

void InorderDisplay(Btree *root){
        if(root == NULL)
            return;
        InorderDisplay(root->Left);
        cout << root->data << " ";
        InorderDisplay(root->Right);
}

int main(){
    int PreOrder[] = {1, 2, 4, 3, 5};
    int InOrder[] = {4, 2, 1, 5, 3};

    Btree *root = BuildTree(PreOrder, InOrder, 0, 4);
    InorderDisplay(root);
    return 0;
}


